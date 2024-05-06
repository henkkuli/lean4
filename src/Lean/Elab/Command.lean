/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Gabriel Ebner
-/
prelude
import Lean.Meta.Diagnostics
import Lean.Elab.Binders
import Lean.Elab.SyntheticMVars
import Lean.Elab.SetOption
import Lean.Language.Basic

namespace Lean.Elab.Command

structure Scope where
  header        : String
  opts          : Options := {}
  currNamespace : Name := Name.anonymous
  openDecls     : List OpenDecl := []
  levelNames    : List Name := []
  /-- section variables -/
  varDecls      : Array (TSyntax ``Parser.Term.bracketedBinder) := #[]
  /-- Globally unique internal identifiers for the `varDecls` -/
  varUIds       : Array Name := #[]
  /-- noncomputable sections automatically add the `noncomputable` modifier to any declaration we cannot generate code for. -/
  isNoncomputable : Bool := false
  deriving Inhabited

structure State where
  env            : Environment
  messages       : MessageLog := {}
  scopes         : List Scope := [{ header := "" }]
  nextMacroScope : Nat := firstFrontendMacroScope + 1
  maxRecDepth    : Nat
  ngen           : NameGenerator := {}
  infoState      : InfoState := {}
  traceState     : TraceState := {}
  deriving Nonempty

structure Context where
  fileName       : String
  fileMap        : FileMap
  currRecDepth   : Nat := 0
  cmdPos         : String.Pos := 0
  macroStack     : MacroStack := []
  currMacroScope : MacroScope := firstFrontendMacroScope
  ref            : Syntax := Syntax.missing
  tacticCache?   : Option (IO.Ref Tactic.Cache)
  /--
  Snapshot for incremental reuse and reporting of command elaboration. Currently unused in Lean
  itself.

  Definitely resolved in `Language.Lean.process.doElab`.

  Invariant: if the bundle's `old?` is set, the context and state at the beginning of current and
  old elaboration are identical.
  -/
  snap?          : Option (Language.SnapshotBundle Language.DynamicSnapshot)

abbrev CommandElabCoreM (ε) := ReaderT Context $ StateRefT State $ EIO ε
abbrev CommandElabM := CommandElabCoreM Exception
abbrev CommandElab  := Syntax → CommandElabM Unit
structure Linter where
  run : Syntax → CommandElabM Unit
  name : Name := by exact decl_name%

/-
Make the compiler generate specialized `pure`/`bind` so we do not have to optimize through the
whole monad stack at every use site. May eventually be covered by `deriving`.

Remark: see comment at TermElabM
-/
@[always_inline]
instance : Monad CommandElabM := let i := inferInstanceAs (Monad CommandElabM); { pure := i.pure, bind := i.bind }

def mkState (env : Environment) (messages : MessageLog := {}) (opts : Options := {}) : State := {
  env         := env
  messages    := messages
  scopes      := [{ header := "", opts := opts }]
  maxRecDepth := maxRecDepth.get opts
}

/- Linters should be loadable as plugins, so store in a global IO ref instead of an attribute managed by the
    environment (which only contains `import`ed objects). -/
builtin_initialize lintersRef : IO.Ref (Array Linter) ← IO.mkRef #[]
builtin_initialize registerTraceClass `Elab.lint

def addLinter (l : Linter) : IO Unit := do
  let ls ← lintersRef.get
  lintersRef.set (ls.push l)

instance : MonadInfoTree CommandElabM where
  getInfoState      := return (← get).infoState
  modifyInfoState f := modify fun s => { s with infoState := f s.infoState }

instance : MonadEnv CommandElabM where
  getEnv := do pure (← get).env
  modifyEnv f := modify fun s => { s with env := f s.env }

@[always_inline]
instance : MonadOptions CommandElabM where
  getOptions := do pure (← get).scopes.head!.opts

protected def getRef : CommandElabM Syntax :=
  return (← read).ref

instance : AddMessageContext CommandElabM where
  addMessageContext := addMessageContextPartial

instance : MonadRef CommandElabM where
  getRef := Command.getRef
  withRef ref x := withReader (fun ctx => { ctx with ref := ref }) x

instance : MonadTrace CommandElabM where
  getTraceState := return (← get).traceState
  modifyTraceState f := modify fun s => { s with traceState := f s.traceState }

instance : AddErrorMessageContext CommandElabM where
  add ref msg := do
    let ctx ← read
    let ref := getBetterRef ref ctx.macroStack
    let msg ← addMessageContext msg
    let msg ← addMacroStack msg ctx.macroStack
    return (ref, msg)

def mkMessageAux (ctx : Context) (ref : Syntax) (msgData : MessageData) (severity : MessageSeverity) : Message :=
  let pos := ref.getPos?.getD ctx.cmdPos
  let endPos := ref.getTailPos?.getD pos
  mkMessageCore ctx.fileName ctx.fileMap msgData severity pos endPos

private def addTraceAsMessagesCore (ctx : Context) (log : MessageLog) (traceState : TraceState) : MessageLog := Id.run do
  if traceState.traces.isEmpty then return log
  let mut traces : HashMap (String.Pos × String.Pos) (Array MessageData) := ∅
  for traceElem in traceState.traces do
    let ref := replaceRef traceElem.ref ctx.ref
    let pos := ref.getPos?.getD 0
    let endPos := ref.getTailPos?.getD pos
    traces := traces.insert (pos, endPos) <| traces.findD (pos, endPos) #[] |>.push traceElem.msg
  let mut log := log
  let traces' := traces.toArray.qsort fun ((a, _), _) ((b, _), _) => a < b
  for ((pos, endPos), traceMsg) in traces' do
    let data := .tagged `_traceMsg <| .joinSep traceMsg.toList "\n"
    log := log.add <| mkMessageCore ctx.fileName ctx.fileMap data .information pos endPos
  return log

private def addTraceAsMessages : CommandElabM Unit := do
  let ctx ← read
  -- do not add trace messages if `trace.profiler.output` is set as it would be redundant and
  -- pretty printing the trace messages is expensive
  if trace.profiler.output.get? (← getOptions) |>.isNone then
    modify fun s => { s with
      messages          := addTraceAsMessagesCore ctx s.messages s.traceState
      traceState.traces := {}
    }

private def runCore (x : CoreM α) : CommandElabM α := do
  let s ← get
  let ctx ← read
  let heartbeats ← IO.getNumHeartbeats
  let env := Kernel.resetDiag s.env
  let scope := s.scopes.head!
  let coreCtx : Core.Context := {
    fileName       := ctx.fileName
    fileMap        := ctx.fileMap
    currRecDepth   := ctx.currRecDepth
    maxRecDepth    := s.maxRecDepth
    ref            := ctx.ref
    currNamespace  := scope.currNamespace
    openDecls      := scope.openDecls
    initHeartbeats := heartbeats
    currMacroScope := ctx.currMacroScope
    options        := scope.opts
  }
  let x : EIO _ _ := x.run coreCtx {
    env
    ngen := s.ngen
    nextMacroScope := s.nextMacroScope
    infoState.enabled := s.infoState.enabled
    traceState := s.traceState
  }
  let (ea, coreS) ← liftM x
  modify fun s => { s with
    env               := coreS.env
    nextMacroScope    := coreS.nextMacroScope
    ngen              := coreS.ngen
    infoState.trees   := s.infoState.trees.append coreS.infoState.trees
    traceState.traces := coreS.traceState.traces.map fun t => { t with ref := replaceRef t.ref ctx.ref }
    messages          := s.messages ++ coreS.messages
  }
  return ea

def liftCoreM (x : CoreM α) : CommandElabM α := do
  MonadExcept.ofExcept (← runCore (observing x))

private def ioErrorToMessage (ctx : Context) (ref : Syntax) (err : IO.Error) : Message :=
  let ref := getBetterRef ref ctx.macroStack
  mkMessageAux ctx ref (toString err) MessageSeverity.error

@[inline] def liftIO {α} (x : IO α) : CommandElabM α := do
  let ctx ← read
  IO.toEIO (fun (ex : IO.Error) => Exception.error ctx.ref ex.toString) x

instance : MonadLiftT IO CommandElabM where
  monadLift := liftIO

def getScope : CommandElabM Scope := do pure (← get).scopes.head!

instance : MonadResolveName CommandElabM where
  getCurrNamespace := return (← getScope).currNamespace
  getOpenDecls     := return (← getScope).openDecls

instance : MonadLog CommandElabM where
  getRef      := getRef
  getFileMap  := return (← read).fileMap
  getFileName := return (← read).fileName
  hasErrors   := return (← get).messages.hasErrors
  logMessage msg := do
    let currNamespace ← getCurrNamespace
    let openDecls ← getOpenDecls
    let msg := { msg with data := MessageData.withNamingContext { currNamespace := currNamespace, openDecls := openDecls } msg.data }
    modify fun s => { s with messages := s.messages.add msg }

def runLinters (stx : Syntax) : CommandElabM Unit := do
  profileitM Exception "linting" (← getOptions) do
    withTraceNode `Elab.lint (fun _ => return m!"running linters") do
      let linters ← lintersRef.get
      unless linters.isEmpty do
        for linter in linters do
          withTraceNode `Elab.lint (fun _ => return m!"running linter: {linter.name}")
              (tag := linter.name.toString) do
            let savedState ← get
            try
              linter.run stx
            catch ex =>
              logException ex
            finally
              modify fun s => { savedState with messages := s.messages }

protected def getCurrMacroScope : CommandElabM Nat  := do pure (← read).currMacroScope
protected def getMainModule     : CommandElabM Name := do pure (← getEnv).mainModule

protected def withFreshMacroScope {α} (x : CommandElabM α) : CommandElabM α := do
  let fresh ← modifyGet (fun st => (st.nextMacroScope, { st with nextMacroScope := st.nextMacroScope + 1 }))
  withReader (fun ctx => { ctx with currMacroScope := fresh }) x

instance : MonadQuotation CommandElabM where
  getCurrMacroScope   := Command.getCurrMacroScope
  getMainModule       := Command.getMainModule
  withFreshMacroScope := Command.withFreshMacroScope

unsafe def mkCommandElabAttributeUnsafe (ref : Name) : IO (KeyedDeclsAttribute CommandElab) :=
  mkElabAttribute CommandElab `builtin_command_elab `command_elab `Lean.Parser.Command `Lean.Elab.Command.CommandElab "command" ref

@[implemented_by mkCommandElabAttributeUnsafe]
opaque mkCommandElabAttribute (ref : Name) : IO (KeyedDeclsAttribute CommandElab)

builtin_initialize commandElabAttribute : KeyedDeclsAttribute CommandElab ← mkCommandElabAttribute decl_name%

private def mkInfoTree (elaborator : Name) (stx : Syntax) (trees : PersistentArray InfoTree) : CommandElabM InfoTree := do
  let ctx ← read
  let s ← get
  let scope := s.scopes.head!
  let tree := InfoTree.node (Info.ofCommandInfo { elaborator, stx }) trees
  let ctx := PartialContextInfo.commandCtx {
    env := s.env, fileMap := ctx.fileMap, mctx := {}, currNamespace := scope.currNamespace,
    openDecls := scope.openDecls, options := scope.opts, ngen := s.ngen
  }
  return InfoTree.context ctx tree

private def elabCommandUsing (s : State) (stx : Syntax) : List (KeyedDeclsAttribute.AttributeEntry CommandElab) → CommandElabM Unit
  | []                => withInfoTreeContext (mkInfoTree := mkInfoTree `no_elab stx) <| throwError "unexpected syntax{indentD stx}"
  | (elabFn::elabFns) =>
    catchInternalId unsupportedSyntaxExceptionId
      (withInfoTreeContext (mkInfoTree := mkInfoTree elabFn.declName stx) <| elabFn.value stx)
      (fun _ => do set s; elabCommandUsing s stx elabFns)

/-- Elaborate `x` with `stx` on the macro stack -/
def withMacroExpansion (beforeStx afterStx : Syntax) (x : CommandElabM α) : CommandElabM α :=
  withInfoContext (mkInfo := pure <| .ofMacroExpansionInfo { stx := beforeStx, output := afterStx, lctx := .empty }) do
    withReader (fun ctx => { ctx with macroStack := { before := beforeStx, after := afterStx } :: ctx.macroStack }) x

instance : MonadMacroAdapter CommandElabM where
  getCurrMacroScope := getCurrMacroScope
  getNextMacroScope := return (← get).nextMacroScope
  setNextMacroScope next := modify fun s => { s with nextMacroScope := next }

instance : MonadRecDepth CommandElabM where
  withRecDepth d x := withReader (fun ctx => { ctx with currRecDepth := d }) x
  getRecDepth      := return (← read).currRecDepth
  getMaxRecDepth   := return (← get).maxRecDepth

builtin_initialize registerTraceClass `Elab.command

partial def elabCommand (stx : Syntax) : CommandElabM Unit := do
  withLogging <| withRef stx <| withIncRecDepth <| withFreshMacroScope do
    match stx with
    | Syntax.node _ k args =>
      if k == nullKind then
        -- list of commands => elaborate in order
        -- The parser will only ever return a single command at a time, but syntax quotations can return multiple ones
        args.forM elabCommand
      else withTraceNode `Elab.command (fun _ => return stx) (tag :=
        -- special case: show actual declaration kind for `declaration` commands
        (if stx.isOfKind ``Parser.Command.declaration then stx[1] else stx).getKind.toString) do
        let s ← get
        match (← liftMacroM <| expandMacroImpl? s.env stx) with
        | some (decl, stxNew?) =>
          withInfoTreeContext (mkInfoTree := mkInfoTree decl stx) do
            let stxNew ← liftMacroM <| liftExcept stxNew?
            withMacroExpansion stx stxNew do
              elabCommand stxNew
        | _ =>
          match commandElabAttribute.getEntries s.env k with
          | []      =>
            withInfoTreeContext (mkInfoTree := mkInfoTree `no_elab stx) <|
              throwError "elaboration function for '{k}' has not been implemented"
          | elabFns => elabCommandUsing s stx elabFns
    | _ =>
      withInfoTreeContext (mkInfoTree := mkInfoTree `no_elab stx) <|
        throwError "unexpected command"

builtin_initialize registerTraceClass `Elab.input

/--
`elabCommand` wrapper that should be used for the initial invocation, not for recursive calls after
macro expansion etc.
-/
def elabCommandTopLevel (stx : Syntax) : CommandElabM Unit := withRef stx do profileitM Exception "elaboration" (← getOptions) do
  let initMsgs ← modifyGet fun st => (st.messages, { st with messages := {} })
  let initInfoTrees ← getResetInfoTrees
  try
    -- We should *not* factor out `elabCommand`'s `withLogging` to here since it would make its error
    -- recovery more coarse. In particular, If `c` in `set_option ... in $c` fails, the remaining
    -- `end` command of the `in` macro would be skipped and the option would be leaked to the outside!
    elabCommand stx
    withLogging do
      runLinters stx
  finally
    -- note the order: first process current messages & info trees, then add back old messages & trees,
    -- then convert new traces to messages
    let mut msgs := (← get).messages
    for tree in (← getInfoTrees) do
      trace[Elab.info] (← tree.format)
    modify fun st => { st with
      messages := initMsgs ++ msgs
      infoState := { st.infoState with trees := initInfoTrees ++ st.infoState.trees }
    }
    addTraceAsMessages

/-- Adapt a syntax transformation to a regular, command-producing elaborator. -/
def adaptExpander (exp : Syntax → CommandElabM Syntax) : CommandElab := fun stx => do
  let stx' ← exp stx
  withMacroExpansion stx stx' <| elabCommand stx'

private def getVarDecls (s : State) : Array Syntax :=
  s.scopes.head!.varDecls

instance {α} : Inhabited (CommandElabM α) where
  default := throw default

private def mkMetaContext : Meta.Context := {
  config := { foApprox := true, ctxApprox := true, quasiPatternApprox := true }
}

open Lean.Parser.Term in
/-- Return identifier names in the given bracketed binder. -/
def getBracketedBinderIds : Syntax → Array Name
  | `(bracketedBinderF|($ids* $[: $ty?]? $(_annot?)?)) => ids.map Syntax.getId
  | `(bracketedBinderF|{$ids* $[: $ty?]?})             => ids.map Syntax.getId
  | `(bracketedBinderF|[$id : $_])                     => #[id.getId]
  | `(bracketedBinderF|[$_])                           => #[Name.anonymous]
  | _                                                 => #[]

private def mkTermContext (ctx : Context) (s : State) : Term.Context := Id.run do
  let scope      := s.scopes.head!
  let mut sectionVars := {}
  for id in scope.varDecls.concatMap getBracketedBinderIds, uid in scope.varUIds do
    sectionVars := sectionVars.insert id uid
  { macroStack             := ctx.macroStack
    sectionVars            := sectionVars
    isNoncomputableSection := scope.isNoncomputable
    tacticCache?           := ctx.tacticCache? }

/--
Lift the `TermElabM` monadic action `x` into a `CommandElabM` monadic action.

Note that `x` is executed with an empty message log. Thus, `x` cannot modify/view messages produced by
previous commands.

If you need to access the free variables corresponding to the ones declared using the `variable` command,
consider using `runTermElabM`.

Recall that `TermElabM` actions can automatically lift `MetaM` and `CoreM` actions.
Example:
```
import Lean

open Lean Elab Command Meta

def printExpr (e : Expr) : MetaM Unit := do
  IO.println s!"{← ppExpr e} : {← ppExpr (← inferType e)}"

#eval
  liftTermElabM do
    printExpr (mkConst ``Nat)
```
-/
def liftTermElabM (x : TermElabM α) : CommandElabM α := do
  let ctx ← read
  let s   ← get
  -- dbg_trace "heartbeats: {heartbeats}"
  let scope := s.scopes.head!
  -- We execute `x` with an empty message log. Thus, `x` cannot modify/view messages produced by previous commands.
  -- This is useful for implementing `runTermElabM` where we use `Term.resetMessageLog`
  let x : TermElabM _  := withSaveInfoContext x
  -- make sure `observing` below also catches runtime exceptions (like we do by default in
  -- `CommandElabM`)
  let _ := MonadAlwaysExcept.except (m := TermElabM)
  let x : MetaM _ := (observing (try x finally Meta.reportDiag)).run (mkTermContext ctx s) { levelNames := scope.levelNames }
  let x : CoreM _ := x.run mkMetaContext {}
  let ((ea, _), _) ← runCore x
  MonadExcept.ofExcept ea

/--
Execute the monadic action `elabFn xs` as a `CommandElabM` monadic action, where `xs` are free variables
corresponding to all active scoped variables declared using the `variable` command.

This method is similar to `liftTermElabM`, but it elaborates all scoped variables declared using the `variable`
command.

Example:
```
import Lean

open Lean Elab Command Meta

variable {α : Type u} {f : α → α}
variable (n : Nat)

#eval
  runTermElabM fun xs => do
    for x in xs do
      IO.println s!"{← ppExpr x} : {← ppExpr (← inferType x)}"
```
-/
def runTermElabM (elabFn : Array Expr → TermElabM α) : CommandElabM α := do
  let scope ← getScope
  liftTermElabM <|
    Term.withAutoBoundImplicit <|
      Term.elabBinders scope.varDecls fun xs => do
        -- We need to synthesize postponed terms because this is a checkpoint for the auto-bound implicit feature
        -- If we don't use this checkpoint here, then auto-bound implicits in the postponed terms will not be handled correctly.
        Term.synthesizeSyntheticMVarsNoPostponing
        let mut sectionFVars := {}
        for uid in scope.varUIds, x in xs do
          sectionFVars := sectionFVars.insert uid x
        withReader ({ · with sectionFVars := sectionFVars }) do
          -- We don't want to store messages produced when elaborating `(getVarDecls s)` because they have already been saved when we elaborated the `variable`(s) command.
          -- So, we use `Core.resetMessageLog`.
          Core.resetMessageLog
          let someType := mkSort levelZero
          Term.addAutoBoundImplicits' xs someType fun xs _ =>
            Term.withoutAutoBoundImplicit <| elabFn xs

@[inline] def catchExceptions (x : CommandElabM Unit) : CommandElabCoreM Empty Unit := fun ctx ref =>
  EIO.catchExceptions (withLogging x ctx ref) (fun _ => pure ())

private def liftAttrM {α} (x : AttrM α) : CommandElabM α := do
  liftCoreM x

def getScopes : CommandElabM (List Scope) := do
  pure (← get).scopes

def modifyScope (f : Scope → Scope) : CommandElabM Unit :=
  modify fun s => { s with
    scopes := match s.scopes with
      | h::t => f h :: t
      | []   => unreachable!
  }

def withScope (f : Scope → Scope) (x : CommandElabM α) : CommandElabM α := do
  match (← get).scopes with
  | [] => x
  | h :: t =>
    try
      modify fun s => { s with scopes := f h :: t }
      x
    finally
      modify fun s => { s with scopes := h :: t }

def getLevelNames : CommandElabM (List Name) :=
  return (← getScope).levelNames

def addUnivLevel (idStx : Syntax) : CommandElabM Unit := withRef idStx do
  let id := idStx.getId
  let levelNames ← getLevelNames
  if levelNames.elem id then
    throwAlreadyDeclaredUniverseLevel id
  else
    modifyScope fun scope => { scope with levelNames := id :: scope.levelNames }

def expandDeclId (declId : Syntax) (modifiers : Modifiers) : CommandElabM ExpandDeclIdResult := do
  let currNamespace ← getCurrNamespace
  let currLevelNames ← getLevelNames
  let r ← Elab.expandDeclId currNamespace currLevelNames declId modifiers
  for id in (← getScope).varDecls.concatMap getBracketedBinderIds do
    if id == r.shortName then
      throwError "invalid declaration name '{r.shortName}', there is a section variable with the same name"
  return r

end Elab.Command

open Elab Command MonadRecDepth

/--
Lifts an action in `CommandElabM` into `CoreM`, updating the traces and the environment.

Commands that modify the processing of subsequent commands,
such as `open` and `namespace` commands,
only have an effect for the remainder of the `CommandElabM` computation passed here,
and do not affect subsequent commands.
-/
def liftCommandElabM (cmd : CommandElabM α) : CoreM α := do
  let (a, commandState) ←
    cmd.run {
      fileName := ← getFileName
      fileMap := ← getFileMap
      ref := ← getRef
      tacticCache? := none
      snap? := none
    } |>.run {
      env := ← getEnv
      maxRecDepth := ← getMaxRecDepth
      scopes := [{ header := "", opts := ← getOptions }]
    }
  modify fun coreState => { coreState with
    traceState.traces := coreState.traceState.traces ++ commandState.traceState.traces
    env := commandState.env
  }
  if let some err := commandState.messages.msgs.toArray.find? (·.severity matches .error) then
    throwError err.data
  pure a

/--
Given a command elaborator `cmd`, returns a new command elaborator that
first evaluates any local `set_option ... in ...` clauses and then invokes `cmd` on what remains.
-/
partial def withSetOptionIn (cmd : CommandElab) : CommandElab := fun stx => do
  if stx.getKind == ``Lean.Parser.Command.in &&
     stx[0].getKind == ``Lean.Parser.Command.set_option then
      let opts ← Elab.elabSetOption stx[0][1] stx[0][3]
      Command.withScope (fun scope => { scope with opts }) do
        withSetOptionIn cmd stx[2]
  else
    cmd stx

export Elab.Command (Linter addLinter)

end Lean
