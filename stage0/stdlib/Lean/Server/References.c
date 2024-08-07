// Lean compiler output
// Module: Lean.Server.References
// Imports: Lean.Data.Lsp.Internal Lean.Server.Utils
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_findModuleRefs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_ModuleRefs_addRef___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_RefIdent_toJson(lean_object*);
LEAN_EXPORT lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__8;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_combineIdents_buildIdMap___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_definitionsMatching___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_join___rarg(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__11;
uint64_t l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__21;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__26(size_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Position_0__Lean_fromJsonPosition____x40_Lean_Data_Position___hyg_285____spec__1(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_empty;
lean_object* l_instBEqOfDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__6___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instInhabitedRefIdent;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_ModuleRefs_addRef___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__10;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_fromJsonLeanIleanInfoParams____x40_Lean_Data_Lsp_Internal___hyg_1705____spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at_Lean_Server_RefInfo_toLspRefInfo___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_throwServerError___rarg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Server_References_findAt(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
uint64_t l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefsFor___spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_allRefs___spec__3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__2;
static lean_object* l_Lean_Server_findModuleRefs___closed__2;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_dedupReferences___spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__24(size_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
extern lean_object* l_Lean_declRangeExt;
static lean_object* l_Lean_Server_dedupReferences___closed__11;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__23(size_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Server_dedupReferences(lean_object*, uint8_t);
lean_object* l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__10;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_definitionsMatching___spec__5(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_updateWorkerRefs___spec__6(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_Server_getModuleContainingDecl_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Server_combineIdents_buildIdMap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Server_References_definitionOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__9;
static lean_object* l_Lean_Server_findModuleRefs___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_References_findAt___closed__2;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_DeclarationRange_toLspRange(lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_definitionOf_x3f___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7___boxed(lean_object*, lean_object*);
static lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Server_combineIdents_buildIdMap___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__3;
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_combineIdents_buildIdMap___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_finalizeWorkerRefs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1___boxed(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Lsp_ModuleRefs_findAt___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___closed__1;
uint8_t l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___closed__1;
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__4;
static lean_object* l_Lean_Server_dedupReferences___closed__6;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_combineIdents_buildIdMap___spec__6(lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instOrdPosition;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2(lean_object*);
lean_object* l_Lean_Server_combineIdents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__6(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_dedupReferences___spec__1(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__1(lean_object*, lean_object*);
lean_object* l_System_Uri_pathToUri(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__21(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__18(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_findRange_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Server_References_removeIlean___lambda__1(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_combineIdents_buildIdMap___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableRelLt___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findRange_x3f___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1;
lean_object* l_EStateM_instMonad(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_identOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonRpcCallParams____x40_Lean_Data_Lsp_Extra___hyg_1927____spec__1(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_addRef___spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_allRefs___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__9(lean_object*, size_t, size_t, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__9;
static lean_object* l_Lean_Server_dedupReferences___closed__3;
lean_object* l_instBEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_findReferences(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__18;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__4;
extern lean_object* l_Lean_Lsp_RefInfo_instInhabitedLocation;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__3(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_allRefsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__4;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__16(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__5(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_instToJsonIlean___closed__1;
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_findModuleRefs___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_findAt___lambda__1(lean_object*);
lean_object* l_panic___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Lsp_ModuleRefs_findAt___spec__4(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_definitionsMatching(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_References_empty;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_removeIlean___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Server_findReferences___spec__4___closed__1;
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_buildIdMap___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_finalizeWorkerRefs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__9___boxed(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* l_List_filter___rarg(lean_object*, lean_object*);
static uint64_t l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2;
uint8_t lean_is_aux_recursor(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_definitionsMatching___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instFromJsonIlean;
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__20;
extern lean_object* l_Lean_builtinDeclRanges;
LEAN_EXPORT lean_object* l_Lean_Server_RefInfo_empty;
uint8_t l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__7___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Lsp_instOrdRange;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_combineIdents_insertIdMap(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__7;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__5(lean_object*, size_t, size_t, lean_object*);
lean_object* l_instHashableBool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_instFromJsonIlean___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_definitionOf_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_findModuleRefs___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Lsp_ModuleRefs_findAt___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_removeWorkerRefs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__9(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_removeWorkerRefs(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefsFor___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_instDecidableEqBool___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3(lean_object*);
lean_object* l_Lean_Server_combineIdents_findCanonicalRepresentative(lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___at_Lean_Environment_addExtraName___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_findAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_References_empty___closed__1;
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findRange_x3f(lean_object*, lean_object*, uint8_t);
static uint64_t l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1;
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_Ilean_version___default;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_removeIlean___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_removeIlean___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runCoreM___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__16;
LEAN_EXPORT lean_object* l_Lean_isRec___at_Lean_Server_RefInfo_toLspRefInfo___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_updateWorkerRefs(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Lsp_instToJsonModuleRefs___spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(lean_object*, lean_object*);
static lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_definitionOf_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__3;
lean_object* l_instHashableProd___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_referringTo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_dedupReferences___spec__2(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lean_Server_Ilean_load___closed__2;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RefInfo_addRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_findReferences___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Server_findReferences___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_allRefs___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_dedupReferences___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Ilean_load(lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
static size_t l_Lean_Server_References_allRefsFor___closed__1;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_forInStep_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__14(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__2;
static lean_object* l_Lean_Lsp_RefInfo_empty___closed__1;
static size_t l_Lean_Lsp_ModuleRefs_findAt___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_definitionsMatching___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_combineIdents_buildIdMap___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_ModuleRefs_addRef___spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Server_findReferences___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_forInStep_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_addIlean___spec__2(lean_object*);
lean_object* l_Lean_Server_References_removeIlean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__27(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_SearchPath_findModuleWithExt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_findRange_x3f(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__17(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_getModuleContainingDecl_x3f___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__23;
lean_object* l_Lean_Server_References_referringTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Range_toLspRange(lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12;
lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__17;
extern lean_object* l_Lean_Lsp_instHashableRefIdent;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(size_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_map___at_Lean_Server_References_removeIlean___spec__3(lean_object*);
lean_object* l_Lean_Server_getModuleContainingDecl_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__5;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_allRefs(lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__2;
lean_object* l_IO_FS_readFile(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__6;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_addIlean___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__4(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Server_References_definitionOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472_(lean_object*);
lean_object* l_Lean_Server_combineIdents_useConstRepresentatives(lean_object*);
lean_object* l_Lean_Server_combineIdents_buildIdMap(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___closed__1;
lean_object* l_Lean_Server_References_findAt___lambda__1___boxed(lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_definitionsMatching___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Server_findReferences___spec__4___closed__2;
lean_object* l_StateT_instMonad___rarg(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Server_combineIdents_findCanonicalRepresentative___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Server_References_definitionsMatching___rarg___closed__1;
extern lean_object* l_Lean_Lsp_instBEqRange;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Reference_aliases___default;
static lean_object* l_Lean_Server_Reference_aliases___default___closed__1;
static lean_object* l_Lean_Server_References_definitionsMatching___rarg___closed__2;
lean_object* l_instHashableOption___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__25(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__14;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7(lean_object*, lean_object*);
static lean_object* l_Lean_Server_References_findAt___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_dedupReferences___spec__7(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____at_Lean_PrettyPrinter_delabCore___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RefInfo_toLspRefInfo(lean_object*, lean_object*);
lean_object* l_Lean_Server_ModuleRefs_addRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_getModuleContainingDecl_x3f___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__1;
static lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_Server_References_definitionOf_x3f___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__15;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_merge(lean_object*, lean_object*);
lean_object* lean_io_realpath(lean_object*, lean_object*);
uint64_t l_Lean_Name_hash___override(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_findReferenceLocation_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableRelLe___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_buildIdMap___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2(lean_object*, size_t, size_t, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
extern lean_object* l_Id_instMonad;
static lean_object* l_Lean_Server_dedupReferences___closed__1;
extern lean_object* l_Lean_Lsp_instBEqRefIdent;
lean_object* lean_panic_fn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Lsp_ModuleRefs_findAt___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_definitionsMatching___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefsFor___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
static lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_findReferences___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_ModuleRefs_addRef___spec__3(lean_object*);
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
lean_object* l_Lean_Server_combineIdents_useConstRepresentatives___boxed(lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__7;
extern lean_object* l_Lean_Lsp_instHashableRange;
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRanges;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331_(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Lsp_instFromJsonModuleRefs___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__15(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__2___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_noConfusionExt;
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__2;
static lean_object* l_Lean_Server_Ilean_load___closed__1;
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents___spec__4(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_findReferenceLocation_x3f___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_dedupReferences___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_addIlean___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_allRefsFor(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Ilean_load___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__8;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_addIlean(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents___spec__2(lean_object*);
lean_object* l_Lean_Server_References_finalizeWorkerRefs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_addIlean___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4;
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefsFor___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__2___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__22(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_RBNode_find___at_Lean_NameMap_find_x3f___spec__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__13___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Server_dedupReferences___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__22;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1___closed__1;
lean_object* l_Lean_Json_parse(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Lsp_instFromJsonModuleRefs___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Server_References_allRefs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineIdents_buildIdMap___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__3(uint64_t, uint64_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonIlean;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, uint64_t, uint64_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__10(uint64_t, uint64_t, size_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Server_RefInfo_empty___closed__1;
static lean_object* l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__10(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__13;
size_t lean_usize_land(size_t, size_t);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Server_combineIdents(lean_object*, lean_object*);
static lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__2;
lean_object* l_Array_get_x3f___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Server_dedupReferences___closed__5;
static lean_object* _init_l_Lean_Server_Reference_aliases___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_Reference_aliases___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_Reference_aliases___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Server_RefInfo_empty___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_RefInfo_empty() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_RefInfo_empty___closed__1;
return x_1;
}
}
lean_object* l_Lean_Server_RefInfo_addRef(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_2, sizeof(void*)*6);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 0);
lean_dec(x_7);
x_8 = lean_array_push(x_6, x_2);
lean_ctor_set(x_1, 1, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_array_push(x_9, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_dec(x_13);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
else
{
uint8_t x_18; 
x_18 = lean_ctor_get_uint8(x_2, sizeof(void*)*6);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_1, 0);
lean_dec(x_21);
x_22 = lean_array_push(x_20, x_2);
lean_ctor_set(x_1, 1, x_22);
return x_1;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_array_push(x_23, x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_3);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
}
static lean_object* _init_l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_instMonadBaseIO;
x_2 = l_Lean_Lsp_RefInfo_instInhabitedLocation;
x_3 = l_instInhabitedOfMonad___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1___closed__1;
x_4 = lean_panic_fn(x_3, x_1);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at_Lean_Server_RefInfo_toLspRefInfo___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_isRecCore(x_8, x_1);
x_10 = lean_box(x_9);
lean_ctor_set(x_5, 0, x_10);
return x_5;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_5);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_isRecCore(x_13, x_1);
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
}
}
static lean_object* _init_l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_declRangeExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_instInhabitedDeclarationRanges;
x_10 = l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___closed__1;
x_11 = l_Lean_MapDeclarationExtension_find_x3f___rarg(x_9, x_10, x_8, x_1);
lean_dec(x_8);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_instInhabitedDeclarationRanges;
x_16 = l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___closed__1;
x_17 = l_Lean_MapDeclarationExtension_find_x3f___rarg(x_15, x_16, x_14, x_1);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
}
}
static lean_object* _init_l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_builtinDeclRanges;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1___closed__1;
x_7 = lean_st_ref_get(x_6, x_5);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Lean_RBNode_find___at_Lean_NameMap_find_x3f___spec__1___rarg(x_9, x_1);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = l_Lean_RBNode_find___at_Lean_NameMap_find_x3f___spec__1___rarg(x_11, x_1);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_5);
return x_15;
}
}
}
static lean_object* _init_l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_noConfusionExt;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_1);
x_9 = l_Lean_isRec___at_Lean_Server_RefInfo_toLspRefInfo___spec__4(x_1, x_2, x_3, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_1);
lean_inc(x_8);
x_12 = lean_is_aux_recursor(x_8, x_1);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___closed__1;
lean_inc(x_1);
x_14 = l_Lean_TagDeclarationExtension_isTagged(x_13, x_8, x_1);
lean_dec(x_8);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = lean_unbox(x_10);
lean_dec(x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_1);
x_16 = l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5(x_1, x_2, x_3, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1(x_1, x_17, x_2, x_3, x_18);
lean_dec(x_1);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = l_Lean_Name_getPrefix(x_1);
x_21 = l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5(x_20, x_2, x_3, x_11);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1(x_1, x_22, x_2, x_3, x_23);
lean_dec(x_1);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_10);
x_25 = l_Lean_Name_getPrefix(x_1);
x_26 = l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5(x_25, x_2, x_3, x_11);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1(x_1, x_27, x_2, x_3, x_28);
lean_dec(x_1);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_10);
lean_dec(x_8);
x_30 = l_Lean_Name_getPrefix(x_1);
x_31 = l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5(x_30, x_2, x_3, x_11);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1(x_1, x_32, x_2, x_3, x_33);
lean_dec(x_1);
return x_34;
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Server.References", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Server.RefInfo.toLspRefInfo", 32, 32);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__1;
x_2 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__2;
x_3 = lean_unsigned_to_nat(77u);
x_4 = lean_unsigned_to_nat(8u);
x_5 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_2, x_1);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_array_uget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_3, x_2, x_8);
x_10 = lean_ctor_get(x_7, 4);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_box(0);
x_69 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2___rarg___boxed), 4, 1);
lean_closure_set(x_69, 0, x_68);
x_70 = l_Lean_Elab_ContextInfo_runCoreM___rarg(x_10, x_69, x_4);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_71);
x_12 = x_73;
x_13 = x_72;
goto block_67;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_70, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_dec(x_70);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_74);
x_12 = x_76;
x_13 = x_75;
goto block_67;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_11, 0);
lean_inc(x_77);
x_78 = lean_alloc_closure((void*)(l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___boxed), 4, 1);
lean_closure_set(x_78, 0, x_77);
x_79 = l_Lean_Elab_ContextInfo_runCoreM___rarg(x_10, x_78, x_4);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_82, 0, x_80);
x_12 = x_82;
x_13 = x_81;
goto block_67;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_79, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_79, 1);
lean_inc(x_84);
lean_dec(x_79);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_83);
x_12 = x_85;
x_13 = x_84;
goto block_67;
}
}
block_67:
{
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__4;
x_15 = l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1(x_14, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = lean_usize_add(x_2, x_18);
x_20 = lean_array_uset(x_9, x_2, x_16);
x_2 = x_19;
x_3 = x_20;
x_4 = x_17;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_9);
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; lean_object* x_31; 
lean_dec(x_12);
x_26 = lean_ctor_get(x_7, 2);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = 1;
x_30 = lean_usize_add(x_2, x_29);
x_31 = lean_array_uset(x_9, x_2, x_28);
x_2 = x_30;
x_3 = x_31;
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_12, 0);
lean_inc(x_33);
lean_dec(x_12);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; 
lean_dec(x_11);
x_34 = lean_ctor_get(x_7, 2);
lean_inc(x_34);
lean_dec(x_7);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = 1;
x_38 = lean_usize_add(x_2, x_37);
x_39 = lean_array_uset(x_9, x_2, x_36);
x_2 = x_38;
x_3 = x_39;
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_ctor_get(x_7, 2);
lean_inc(x_41);
lean_dec(x_7);
x_42 = lean_ctor_get(x_11, 0);
lean_inc(x_42);
lean_dec(x_11);
x_43 = !lean_is_exclusive(x_33);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; size_t x_51; size_t x_52; lean_object* x_53; 
x_44 = lean_ctor_get(x_33, 0);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = l_Lean_DeclarationRange_toLspRange(x_45);
lean_dec(x_45);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = l_Lean_DeclarationRange_toLspRange(x_47);
lean_dec(x_47);
x_49 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_49, 0, x_42);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_48);
lean_ctor_set(x_33, 0, x_49);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_41);
lean_ctor_set(x_50, 1, x_33);
x_51 = 1;
x_52 = lean_usize_add(x_2, x_51);
x_53 = lean_array_uset(x_9, x_2, x_50);
x_2 = x_52;
x_3 = x_53;
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; lean_object* x_65; 
x_55 = lean_ctor_get(x_33, 0);
lean_inc(x_55);
lean_dec(x_33);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = l_Lean_DeclarationRange_toLspRange(x_56);
lean_dec(x_56);
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = l_Lean_DeclarationRange_toLspRange(x_58);
lean_dec(x_58);
x_60 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_60, 0, x_42);
lean_ctor_set(x_60, 1, x_57);
lean_ctor_set(x_60, 2, x_59);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_41);
lean_ctor_set(x_62, 1, x_61);
x_63 = 1;
x_64 = lean_usize_add(x_2, x_63);
x_65 = lean_array_uset(x_9, x_2, x_62);
x_2 = x_64;
x_3 = x_65;
x_4 = x_13;
goto _start;
}
}
}
}
}
}
}
}
lean_object* l_Lean_Server_RefInfo_toLspRefInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_21; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_box(0);
x_3 = x_22;
x_4 = x_2;
goto block_20;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 x_24 = x_21;
} else {
 lean_dec_ref(x_21);
 x_24 = lean_box(0);
}
x_25 = lean_ctor_get(x_23, 4);
lean_inc(x_25);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_box(0);
x_85 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2___rarg___boxed), 4, 1);
lean_closure_set(x_85, 0, x_84);
x_86 = l_Lean_Elab_ContextInfo_runCoreM___rarg(x_25, x_85, x_2);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_87);
x_27 = x_89;
x_28 = x_88;
goto block_83;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_86, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_86, 1);
lean_inc(x_91);
lean_dec(x_86);
x_92 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_92, 0, x_90);
x_27 = x_92;
x_28 = x_91;
goto block_83;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_26, 0);
lean_inc(x_93);
x_94 = lean_alloc_closure((void*)(l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___boxed), 4, 1);
lean_closure_set(x_94, 0, x_93);
x_95 = l_Lean_Elab_ContextInfo_runCoreM___rarg(x_25, x_94, x_2);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_96);
x_27 = x_98;
x_28 = x_97;
goto block_83;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_95, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_95, 1);
lean_inc(x_100);
lean_dec(x_95);
x_101 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_101, 0, x_99);
x_27 = x_101;
x_28 = x_100;
goto block_83;
}
}
block_83:
{
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_23);
x_29 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__4;
x_30 = l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1(x_29, x_28);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
if (lean_is_scalar(x_24)) {
 x_33 = lean_alloc_ctor(1, 1, 0);
} else {
 x_33 = x_24;
}
lean_ctor_set(x_33, 0, x_31);
x_3 = x_33;
x_4 = x_32;
goto block_20;
}
else
{
uint8_t x_34; 
lean_dec(x_24);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_30);
if (x_34 == 0)
{
return x_30;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_30, 0);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_30);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_27);
x_38 = lean_ctor_get(x_23, 2);
lean_inc(x_38);
lean_dec(x_23);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
if (lean_is_scalar(x_24)) {
 x_41 = lean_alloc_ctor(1, 1, 0);
} else {
 x_41 = x_24;
}
lean_ctor_set(x_41, 0, x_40);
x_3 = x_41;
x_4 = x_28;
goto block_20;
}
else
{
lean_object* x_42; 
lean_dec(x_24);
x_42 = lean_ctor_get(x_27, 0);
lean_inc(x_42);
lean_dec(x_27);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_26);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_26, 0);
lean_dec(x_44);
x_45 = lean_ctor_get(x_23, 2);
lean_inc(x_45);
lean_dec(x_23);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_26, 0, x_47);
x_3 = x_26;
x_4 = x_28;
goto block_20;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_26);
x_48 = lean_ctor_get(x_23, 2);
lean_inc(x_48);
lean_dec(x_23);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_3 = x_51;
x_4 = x_28;
goto block_20;
}
}
else
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_23, 2);
lean_inc(x_52);
lean_dec(x_23);
x_53 = !lean_is_exclusive(x_26);
if (x_53 == 0)
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_42);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_55 = lean_ctor_get(x_26, 0);
x_56 = lean_ctor_get(x_42, 0);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = l_Lean_DeclarationRange_toLspRange(x_57);
lean_dec(x_57);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = l_Lean_DeclarationRange_toLspRange(x_59);
lean_dec(x_59);
x_61 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_58);
lean_ctor_set(x_61, 2, x_60);
lean_ctor_set(x_42, 0, x_61);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_52);
lean_ctor_set(x_62, 1, x_42);
lean_ctor_set(x_26, 0, x_62);
x_3 = x_26;
x_4 = x_28;
goto block_20;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_63 = lean_ctor_get(x_26, 0);
x_64 = lean_ctor_get(x_42, 0);
lean_inc(x_64);
lean_dec(x_42);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = l_Lean_DeclarationRange_toLspRange(x_65);
lean_dec(x_65);
x_67 = lean_ctor_get(x_64, 1);
lean_inc(x_67);
lean_dec(x_64);
x_68 = l_Lean_DeclarationRange_toLspRange(x_67);
lean_dec(x_67);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_63);
lean_ctor_set(x_69, 1, x_66);
lean_ctor_set(x_69, 2, x_68);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_52);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_26, 0, x_71);
x_3 = x_26;
x_4 = x_28;
goto block_20;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_72 = lean_ctor_get(x_26, 0);
lean_inc(x_72);
lean_dec(x_26);
x_73 = lean_ctor_get(x_42, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 x_74 = x_42;
} else {
 lean_dec_ref(x_42);
 x_74 = lean_box(0);
}
x_75 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
x_76 = l_Lean_DeclarationRange_toLspRange(x_75);
lean_dec(x_75);
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
lean_dec(x_73);
x_78 = l_Lean_DeclarationRange_toLspRange(x_77);
lean_dec(x_77);
x_79 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_79, 0, x_72);
lean_ctor_set(x_79, 1, x_76);
lean_ctor_set(x_79, 2, x_78);
if (lean_is_scalar(x_74)) {
 x_80 = lean_alloc_ctor(1, 1, 0);
} else {
 x_80 = x_74;
}
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_52);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_3 = x_82;
x_4 = x_28;
goto block_20;
}
}
}
}
}
}
block_20:
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_array_size(x_5);
x_7 = 0;
x_8 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6(x_6, x_7, x_5, x_4);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_3);
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_ReaderT_pure___at_Lean_Server_RefInfo_toLspRefInfo___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at_Lean_Server_RefInfo_toLspRefInfo___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_isRec___at_Lean_Server_RefInfo_toLspRefInfo___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6(x_5, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_ModuleRefs_addRef___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 2);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_4, x_1);
if (x_7 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
lean_inc(x_5);
return x_5;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_addRef___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_ModuleRefs_addRef___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_addRef___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_ModuleRefs_addRef___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_ModuleRefs_addRef___spec__4(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__6(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Lean_Server_ModuleRefs_addRef(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_3);
x_9 = 32;
x_10 = lean_uint64_shift_right(x_8, x_9);
x_11 = lean_uint64_xor(x_8, x_10);
x_12 = 16;
x_13 = lean_uint64_shift_right(x_11, x_12);
x_14 = lean_uint64_xor(x_11, x_13);
x_15 = lean_uint64_to_usize(x_14);
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 1;
x_18 = lean_usize_sub(x_16, x_17);
x_19 = lean_usize_land(x_15, x_18);
x_20 = lean_array_uget(x_6, x_19);
x_21 = l_Lean_Server_RefInfo_empty;
x_22 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_ModuleRefs_addRef___spec__1(x_3, x_21, x_20);
x_23 = l_Lean_Server_RefInfo_addRef(x_22, x_2);
x_24 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__2(x_3, x_20);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_5, x_25);
lean_dec(x_5);
x_27 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_27, 0, x_3);
lean_ctor_set(x_27, 1, x_23);
lean_ctor_set(x_27, 2, x_20);
x_28 = lean_array_uset(x_6, x_19, x_27);
x_29 = lean_unsigned_to_nat(4u);
x_30 = lean_nat_mul(x_26, x_29);
x_31 = lean_unsigned_to_nat(3u);
x_32 = lean_nat_div(x_30, x_31);
lean_dec(x_30);
x_33 = lean_array_get_size(x_28);
x_34 = lean_nat_dec_le(x_32, x_33);
lean_dec(x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_ModuleRefs_addRef___spec__3(x_28);
lean_ctor_set(x_1, 1, x_35);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
else
{
lean_ctor_set(x_1, 1, x_28);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_box(0);
x_37 = lean_array_uset(x_6, x_19, x_36);
x_38 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__6(x_3, x_23, x_20);
x_39 = lean_array_uset(x_37, x_19, x_38);
lean_ctor_set(x_1, 1, x_39);
return x_1;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint64_t x_43; uint64_t x_44; uint64_t x_45; uint64_t x_46; uint64_t x_47; uint64_t x_48; uint64_t x_49; size_t x_50; size_t x_51; size_t x_52; size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_40 = lean_ctor_get(x_1, 0);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_1);
x_42 = lean_array_get_size(x_41);
x_43 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_3);
x_44 = 32;
x_45 = lean_uint64_shift_right(x_43, x_44);
x_46 = lean_uint64_xor(x_43, x_45);
x_47 = 16;
x_48 = lean_uint64_shift_right(x_46, x_47);
x_49 = lean_uint64_xor(x_46, x_48);
x_50 = lean_uint64_to_usize(x_49);
x_51 = lean_usize_of_nat(x_42);
lean_dec(x_42);
x_52 = 1;
x_53 = lean_usize_sub(x_51, x_52);
x_54 = lean_usize_land(x_50, x_53);
x_55 = lean_array_uget(x_41, x_54);
x_56 = l_Lean_Server_RefInfo_empty;
x_57 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_ModuleRefs_addRef___spec__1(x_3, x_56, x_55);
x_58 = l_Lean_Server_RefInfo_addRef(x_57, x_2);
x_59 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__2(x_3, x_55);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_nat_add(x_40, x_60);
lean_dec(x_40);
x_62 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_62, 0, x_3);
lean_ctor_set(x_62, 1, x_58);
lean_ctor_set(x_62, 2, x_55);
x_63 = lean_array_uset(x_41, x_54, x_62);
x_64 = lean_unsigned_to_nat(4u);
x_65 = lean_nat_mul(x_61, x_64);
x_66 = lean_unsigned_to_nat(3u);
x_67 = lean_nat_div(x_65, x_66);
lean_dec(x_65);
x_68 = lean_array_get_size(x_63);
x_69 = lean_nat_dec_le(x_67, x_68);
lean_dec(x_68);
lean_dec(x_67);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_ModuleRefs_addRef___spec__3(x_63);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_61);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
else
{
lean_object* x_72; 
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_61);
lean_ctor_set(x_72, 1, x_63);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = lean_box(0);
x_74 = lean_array_uset(x_41, x_54, x_73);
x_75 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_ModuleRefs_addRef___spec__6(x_3, x_58, x_55);
x_76 = lean_array_uset(x_74, x_54, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_40);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_ModuleRefs_addRef___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_ModuleRefs_addRef___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_ModuleRefs_addRef___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_reverse___rarg(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 1);
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 1);
x_12 = l_Lean_Server_RefInfo_toLspRefInfo(x_11, x_3);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_ctor_set(x_7, 1, x_13);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_9;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_2 = x_14;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
uint8_t x_16; 
lean_free_object(x_7);
lean_dec(x_10);
lean_free_object(x_1);
lean_dec(x_9);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
x_23 = l_Lean_Server_RefInfo_toLspRefInfo(x_22, x_3);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_26);
{
lean_object* _tmp_0 = x_20;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_2 = x_25;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_21);
lean_free_object(x_1);
lean_dec(x_20);
lean_dec(x_2);
x_28 = lean_ctor_get(x_23, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_30 = x_23;
} else {
 lean_dec_ref(x_23);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(1, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_1, 0);
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_1);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_36 = x_32;
} else {
 lean_dec_ref(x_32);
 x_36 = lean_box(0);
}
x_37 = l_Lean_Server_RefInfo_toLspRefInfo(x_35, x_3);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
if (lean_is_scalar(x_36)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_36;
}
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_38);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_2);
x_1 = x_33;
x_2 = x_41;
x_3 = x_39;
goto _start;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_2);
x_43 = lean_ctor_get(x_37, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_45 = x_37;
} else {
 lean_dec_ref(x_37);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
x_12 = lean_array_get_size(x_11);
x_13 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_7);
x_14 = 32;
x_15 = lean_uint64_shift_right(x_13, x_14);
x_16 = lean_uint64_xor(x_13, x_15);
x_17 = 16;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = lean_uint64_to_usize(x_19);
x_21 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_22 = 1;
x_23 = lean_usize_sub(x_21, x_22);
x_24 = lean_usize_land(x_20, x_23);
x_25 = lean_array_uget(x_11, x_24);
x_26 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(x_7, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_10, x_27);
lean_dec(x_10);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_8);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_11, x_24, x_29);
x_31 = lean_unsigned_to_nat(4u);
x_32 = lean_nat_mul(x_28, x_31);
x_33 = lean_unsigned_to_nat(3u);
x_34 = lean_nat_div(x_32, x_33);
lean_dec(x_32);
x_35 = lean_array_get_size(x_30);
x_36 = lean_nat_dec_le(x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Lsp_instFromJsonModuleRefs___spec__2(x_30);
lean_ctor_set(x_4, 1, x_37);
lean_ctor_set(x_4, 0, x_28);
x_3 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_4, 1, x_30);
lean_ctor_set(x_4, 0, x_28);
x_3 = x_6;
goto _start;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_inc(x_1);
x_40 = lean_array_uset(x_11, x_24, x_1);
x_41 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Lsp_instFromJsonModuleRefs___spec__5(x_7, x_8, x_25);
x_42 = lean_array_uset(x_40, x_24, x_41);
lean_ctor_set(x_4, 1, x_42);
x_3 = x_6;
goto _start;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint64_t x_47; uint64_t x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; size_t x_54; size_t x_55; size_t x_56; size_t x_57; size_t x_58; lean_object* x_59; uint8_t x_60; 
x_44 = lean_ctor_get(x_4, 0);
x_45 = lean_ctor_get(x_4, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_4);
x_46 = lean_array_get_size(x_45);
x_47 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_7);
x_48 = 32;
x_49 = lean_uint64_shift_right(x_47, x_48);
x_50 = lean_uint64_xor(x_47, x_49);
x_51 = 16;
x_52 = lean_uint64_shift_right(x_50, x_51);
x_53 = lean_uint64_xor(x_50, x_52);
x_54 = lean_uint64_to_usize(x_53);
x_55 = lean_usize_of_nat(x_46);
lean_dec(x_46);
x_56 = 1;
x_57 = lean_usize_sub(x_55, x_56);
x_58 = lean_usize_land(x_54, x_57);
x_59 = lean_array_uget(x_45, x_58);
x_60 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(x_7, x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_add(x_44, x_61);
lean_dec(x_44);
x_63 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_63, 0, x_7);
lean_ctor_set(x_63, 1, x_8);
lean_ctor_set(x_63, 2, x_59);
x_64 = lean_array_uset(x_45, x_58, x_63);
x_65 = lean_unsigned_to_nat(4u);
x_66 = lean_nat_mul(x_62, x_65);
x_67 = lean_unsigned_to_nat(3u);
x_68 = lean_nat_div(x_66, x_67);
lean_dec(x_66);
x_69 = lean_array_get_size(x_64);
x_70 = lean_nat_dec_le(x_68, x_69);
lean_dec(x_69);
lean_dec(x_68);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Lsp_instFromJsonModuleRefs___spec__2(x_64);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_62);
lean_ctor_set(x_72, 1, x_71);
x_3 = x_6;
x_4 = x_72;
goto _start;
}
else
{
lean_object* x_74; 
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_62);
lean_ctor_set(x_74, 1, x_64);
x_3 = x_6;
x_4 = x_74;
goto _start;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_inc(x_1);
x_76 = lean_array_uset(x_45, x_58, x_1);
x_77 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Lsp_instFromJsonModuleRefs___spec__5(x_7, x_8, x_59);
x_78 = lean_array_uset(x_76, x_58, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_44);
lean_ctor_set(x_79, 1, x_78);
x_3 = x_6;
x_4 = x_79;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__1(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_nextPowerOfTwo_go(x_1, x_2, lean_box(0));
return x_3;
}
}
static lean_object* _init_l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__1;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_3 = lean_box(0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
x_8 = x_3;
goto block_25;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_5, x_5);
if (x_26 == 0)
{
lean_dec(x_5);
x_8 = x_3;
goto block_25;
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; 
x_27 = 0;
x_28 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_29 = l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__4(x_4, x_27, x_28, x_3);
x_8 = x_29;
goto block_25;
}
}
block_25:
{
lean_object* x_9; 
x_9 = l_List_mapM_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__2(x_8, x_3, x_2);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_box(0);
x_13 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_14 = l_List_forIn_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__3(x_12, x_13, x_11, x_13);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_box(0);
x_18 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_19 = l_List_forIn_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__3(x_17, x_18, x_15, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
return x_9;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_forIn_loop___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_ModuleRefs_toLspModuleRefs___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_ModuleRefs_toLspModuleRefs___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_ModuleRefs_toLspModuleRefs(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_RefInfo_empty___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_RefInfo_empty() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Lsp_RefInfo_empty___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Array_append___rarg(x_6, x_7);
lean_dec(x_7);
if (lean_obj_tag(x_3) == 0)
{
lean_ctor_set(x_1, 1, x_8);
return x_1;
}
else
{
uint8_t x_9; 
lean_dec(x_5);
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_3);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = l_Array_append___rarg(x_13, x_14);
lean_dec(x_14);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_12);
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 x_18 = x_3;
} else {
 lean_dec_ref(x_3);
 x_18 = lean_box(0);
}
if (lean_is_scalar(x_18)) {
 x_19 = lean_alloc_ctor(1, 1, 0);
} else {
 x_19 = x_18;
}
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_15);
return x_20;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Lean_Lsp_instOrdPosition;
lean_inc(x_3);
x_6 = l_instDecidableRelLe___rarg(x_5, x_4, x_3);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = 0;
return x_7;
}
else
{
if (x_1 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_instDecidableRelLt___rarg(x_5, x_3, x_8);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_instDecidableRelLe___rarg(x_5, x_3, x_10);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(x_4, x_2, x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_findReferenceLocation_x3f___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_6, x_5);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_7);
x_10 = lean_array_uget(x_4, x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_inc(x_1);
x_12 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(x_2, x_11, x_1);
if (x_12 == 0)
{
size_t x_13; size_t x_14; 
lean_dec(x_10);
x_13 = 1;
x_14 = lean_usize_add(x_6, x_13);
lean_inc(x_3);
{
size_t _tmp_5 = x_14;
lean_object* _tmp_6 = x_3;
x_6 = _tmp_5;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
lean_dec(x_1);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_10);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_box(0);
x_7 = lean_array_size(x_5);
x_8 = 0;
x_9 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1;
x_10 = l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_findReferenceLocation_x3f___spec__1(x_2, x_3, x_9, x_5, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
return x_6;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2(x_1, x_2, x_3, x_5);
lean_dec(x_1);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_inc(x_2);
x_10 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(x_3, x_9, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_free_object(x_4);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2(x_1, x_2, x_3, x_11);
lean_dec(x_1);
return x_12;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_inc(x_2);
x_15 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f_contains(x_3, x_14, x_2);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2(x_1, x_2, x_3, x_16);
lean_dec(x_1);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_findReferenceLocation_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Lsp_RefInfo_findReferenceLocation_x3f___spec__1(x_1, x_8, x_3, x_4, x_9, x_10, x_7);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2(x_1, x_2, x_5, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_RefInfo_contains(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_RefInfo_contains___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Lsp_RefInfo_contains(x_1, x_2, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Lsp_ModuleRefs_findAt___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_1);
x_11 = l_Lean_Lsp_RefInfo_contains(x_10, x_1, x_2);
if (x_11 == 0)
{
size_t x_12; size_t x_13; 
lean_dec(x_9);
x_12 = 1;
x_13 = lean_usize_add(x_5, x_12);
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_array_push(x_6, x_9);
x_16 = 1;
x_17 = lean_usize_add(x_5, x_16);
x_5 = x_17;
x_6 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_1);
x_11 = l_Lean_Lsp_RefInfo_contains(x_10, x_1, x_2);
if (x_11 == 0)
{
size_t x_12; size_t x_13; 
lean_dec(x_9);
x_12 = 1;
x_13 = lean_usize_add(x_5, x_12);
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_array_push(x_6, x_9);
x_16 = 1;
x_17 = lean_usize_add(x_5, x_16);
x_5 = x_17;
x_6 = x_15;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Lsp_ModuleRefs_findAt___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Lsp_ModuleRefs_findAt___spec__1(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__5(lean_object* x_1, uint8_t x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_1);
x_11 = l_Lean_Lsp_RefInfo_contains(x_10, x_1, x_2);
if (x_11 == 0)
{
size_t x_12; size_t x_13; 
lean_dec(x_9);
x_12 = 1;
x_13 = lean_usize_add(x_5, x_12);
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_array_push(x_6, x_9);
x_16 = 1;
x_17 = lean_usize_add(x_5, x_16);
x_5 = x_17;
x_6 = x_15;
goto _start;
}
}
}
}
static size_t _init_l_Lean_Lsp_ModuleRefs_findAt___closed__1() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lean_Server_Reference_aliases___default___closed__1;
x_2 = lean_array_size(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; size_t x_8; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
x_8 = 0;
if (x_7 == 0)
{
lean_object* x_9; size_t x_10; lean_object* x_11; 
lean_dec(x_5);
x_9 = l_Lean_Server_Reference_aliases___default___closed__1;
x_10 = l_Lean_Lsp_ModuleRefs_findAt___closed__1;
x_11 = l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__2(x_2, x_3, x_9, x_10, x_8, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_5, x_5);
if (x_12 == 0)
{
lean_object* x_13; size_t x_14; lean_object* x_15; 
lean_dec(x_5);
x_13 = l_Lean_Server_Reference_aliases___default___closed__1;
x_14 = l_Lean_Lsp_ModuleRefs_findAt___closed__1;
x_15 = l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__3(x_2, x_3, x_13, x_14, x_8, x_13);
return x_15;
}
else
{
size_t x_16; lean_object* x_17; lean_object* x_18; size_t x_19; lean_object* x_20; 
x_16 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_17 = l_Lean_Server_Reference_aliases___default___closed__1;
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Lsp_ModuleRefs_findAt___spec__4(x_4, x_8, x_16, x_17);
x_19 = lean_array_size(x_18);
x_20 = l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__5(x_2, x_3, x_18, x_19, x_8, x_17);
lean_dec(x_18);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Lsp_ModuleRefs_findAt___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Lsp_ModuleRefs_findAt___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__2(x_1, x_7, x_3, x_8, x_9, x_6);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__3(x_1, x_7, x_3, x_8, x_9, x_6);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Lsp_ModuleRefs_findAt___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Lsp_ModuleRefs_findAt___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Lsp_ModuleRefs_findAt___spec__5(x_1, x_7, x_3, x_8, x_9, x_6);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findAt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Lsp_ModuleRefs_findAt(x_1, x_2, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(x_9, x_1, x_2);
if (lean_obj_tag(x_10) == 0)
{
lean_inc(x_3);
{
lean_object* _tmp_3 = x_8;
lean_object* _tmp_4 = x_3;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_dec(x_16);
lean_ctor_set(x_10, 0, x_15);
x_17 = lean_box(0);
lean_ctor_set(x_13, 1, x_17);
lean_ctor_set(x_13, 0, x_10);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
lean_dec(x_13);
lean_ctor_set(x_10, 0, x_19);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_10);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_10, 0);
lean_inc(x_23);
lean_dec(x_10);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_25 = x_23;
} else {
 lean_dec_ref(x_23);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_24);
x_27 = lean_box(0);
if (lean_is_scalar(x_25)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_25;
}
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(x_9, x_1, x_2);
if (lean_obj_tag(x_10) == 0)
{
lean_inc(x_3);
{
lean_object* _tmp_3 = x_8;
lean_object* _tmp_4 = x_3;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_dec(x_16);
lean_ctor_set(x_10, 0, x_15);
x_17 = lean_box(0);
lean_ctor_set(x_13, 1, x_17);
lean_ctor_set(x_13, 0, x_10);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
lean_dec(x_13);
lean_ctor_set(x_10, 0, x_19);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_10);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_10, 0);
lean_inc(x_23);
lean_dec(x_10);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_25 = x_23;
} else {
 lean_dec_ref(x_23);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_24);
x_27 = lean_box(0);
if (lean_is_scalar(x_25)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_25;
}
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f(x_9, x_1, x_2);
if (lean_obj_tag(x_10) == 0)
{
lean_inc(x_3);
{
lean_object* _tmp_3 = x_8;
lean_object* _tmp_4 = x_3;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_dec(x_16);
lean_ctor_set(x_10, 0, x_15);
x_17 = lean_box(0);
lean_ctor_set(x_13, 1, x_17);
lean_ctor_set(x_13, 0, x_10);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
lean_dec(x_13);
lean_ctor_set(x_10, 0, x_19);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_10);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_10, 0);
lean_inc(x_23);
lean_dec(x_10);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_25 = x_23;
} else {
 lean_dec_ref(x_23);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_24);
x_27 = lean_box(0);
if (lean_is_scalar(x_25)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_25;
}
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findRange_x3f(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_4 = lean_box(0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
x_9 = lean_box(0);
if (x_8 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
x_10 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1;
x_11 = l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__1(x_2, x_3, x_10, x_4, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
return x_9;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_6, x_6);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_6);
x_18 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1;
x_19 = l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__2(x_2, x_3, x_18, x_4, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
return x_9;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
}
else
{
size_t x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = 0;
x_26 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_27 = l_Array_foldlMUnsafe_fold___at_Lean_Lsp_instToJsonModuleRefs___spec__4(x_5, x_25, x_26, x_4);
x_28 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1;
x_29 = l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__3(x_2, x_3, x_28, x_27, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
if (lean_obj_tag(x_31) == 0)
{
return x_9;
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__1(x_1, x_6, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__2(x_1, x_6, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_List_forIn_loop___at_Lean_Lsp_ModuleRefs_findRange_x3f___spec__3(x_1, x_6, x_3, x_4, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ModuleRefs_findRange_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Lsp_ModuleRefs_findRange_x3f(x_1, x_2, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Server_Ilean_version___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(3u);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("version", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Server", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Ilean", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__2;
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__3;
x_3 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__4;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__5;
x_2 = 1;
x_3 = l_Lean_Name_toString(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(".", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__6;
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__7;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__10() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__9;
x_2 = 1;
x_3 = l_Lean_Name_toString(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__8;
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__10;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(": ", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__11;
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("module", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__16() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__15;
x_2 = 1;
x_3 = l_Lean_Name_toString(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__8;
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__16;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__17;
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("references", 10, 10);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__21() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__20;
x_2 = 1;
x_3 = l_Lean_Name_toString(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__8;
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__21;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__22;
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__1;
lean_inc(x_1);
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Position_0__Lean_fromJsonPosition____x40_Lean_Data_Position___hyg_285____spec__1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__13;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__13;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__14;
lean_inc(x_1);
x_14 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Extra_0__Lean_Lsp_fromJsonRpcCallParams____x40_Lean_Data_Lsp_Extra___hyg_1927____spec__1(x_1, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_12);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__18;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__18;
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
lean_dec(x_14);
x_24 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19;
x_25 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_fromJsonLeanIleanInfoParams____x40_Lean_Data_Lsp_Internal___hyg_1705____spec__1(x_1, x_24);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_23);
lean_dec(x_12);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__23;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_25, 0);
lean_inc(x_30);
lean_dec(x_25);
x_31 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__23;
x_32 = lean_string_append(x_31, x_30);
lean_dec(x_30);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_25);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_25, 0);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_12);
lean_ctor_set(x_36, 1, x_23);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_25, 0, x_36);
return x_25;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_25, 0);
lean_inc(x_37);
lean_dec(x_25);
x_38 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_38, 0, x_12);
lean_ctor_set(x_38, 1, x_23);
lean_ctor_set(x_38, 2, x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonIlean() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_instFromJsonIlean___closed__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(size_t x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; 
x_6 = lean_array_uget(x_4, x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_4, x_3, x_7);
x_9 = l_List_redLength___rarg(x_6);
x_10 = lean_mk_empty_array_with_capacity(x_9);
lean_dec(x_9);
x_11 = l_List_toArrayAux___rarg(x_6, x_10);
x_12 = lean_array_size(x_11);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_12, x_1, x_11);
x_14 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = 1;
x_16 = lean_usize_add(x_3, x_15);
x_17 = lean_array_uset(x_8, x_3, x_14);
x_3 = x_16;
x_4 = x_17;
goto _start;
}
}
}
static lean_object* _init_l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("usages", 6, 6);
return x_1;
}
}
static lean_object* _init_l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("definition", 10, 10);
return x_1;
}
}
static lean_object* _init_l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2(x_1, x_6);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = l_Lean_Lsp_RefIdent_toJson(x_9);
x_12 = l_Lean_Json_compress(x_11);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_array_size(x_14);
x_16 = 0;
x_17 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_15, x_16, x_14);
x_18 = lean_array_size(x_17);
x_19 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_16, x_18, x_16, x_17);
x_20 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
lean_ctor_set(x_5, 1, x_20);
lean_ctor_set(x_5, 0, x_21);
lean_ctor_set(x_2, 1, x_1);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_2);
x_38 = l_Lean_Json_mkObj(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_12);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_7);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_13, 0);
lean_inc(x_41);
lean_dec(x_13);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_43, 0);
x_48 = lean_ctor_get(x_43, 1);
x_49 = lean_ctor_get(x_44, 0);
x_50 = lean_ctor_get(x_44, 1);
x_51 = lean_box(0);
lean_ctor_set_tag(x_44, 1);
lean_ctor_set(x_44, 1, x_51);
lean_ctor_set(x_44, 0, x_50);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 1, x_44);
lean_ctor_set(x_43, 0, x_49);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_48);
lean_ctor_set(x_52, 1, x_43);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_53);
x_55 = lean_ctor_get(x_41, 1);
lean_inc(x_55);
lean_dec(x_41);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; 
x_56 = l_List_appendTR___rarg(x_54, x_51);
x_22 = x_56;
goto block_35;
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_55);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_58 = lean_ctor_get(x_55, 0);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = 1;
x_61 = l_Lean_Name_toString(x_59, x_60);
lean_ctor_set_tag(x_55, 3);
lean_ctor_set(x_55, 0, x_61);
x_62 = lean_ctor_get(x_58, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = !lean_is_exclusive(x_63);
if (x_65 == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_67 = lean_ctor_get(x_63, 0);
x_68 = lean_ctor_get(x_63, 1);
x_69 = lean_ctor_get(x_64, 0);
x_70 = lean_ctor_get(x_64, 1);
lean_ctor_set_tag(x_64, 1);
lean_ctor_set(x_64, 1, x_51);
lean_ctor_set(x_64, 0, x_70);
lean_ctor_set_tag(x_63, 1);
lean_ctor_set(x_63, 1, x_64);
lean_ctor_set(x_63, 0, x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_63);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_67);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_72);
x_74 = lean_ctor_get(x_58, 2);
lean_inc(x_74);
lean_dec(x_58);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_79 = lean_ctor_get(x_75, 0);
x_80 = lean_ctor_get(x_75, 1);
x_81 = lean_ctor_get(x_76, 0);
x_82 = lean_ctor_get(x_76, 1);
lean_ctor_set_tag(x_76, 1);
lean_ctor_set(x_76, 1, x_51);
lean_ctor_set(x_76, 0, x_82);
lean_ctor_set_tag(x_75, 1);
lean_ctor_set(x_75, 1, x_76);
lean_ctor_set(x_75, 0, x_81);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_75);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_79);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_84);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_55);
lean_ctor_set(x_86, 1, x_51);
x_87 = l_List_appendTR___rarg(x_86, x_73);
x_88 = l_List_appendTR___rarg(x_87, x_85);
x_89 = l_List_appendTR___rarg(x_54, x_88);
x_22 = x_89;
goto block_35;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_90 = lean_ctor_get(x_75, 0);
x_91 = lean_ctor_get(x_75, 1);
x_92 = lean_ctor_get(x_76, 0);
x_93 = lean_ctor_get(x_76, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_76);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_51);
lean_ctor_set_tag(x_75, 1);
lean_ctor_set(x_75, 1, x_94);
lean_ctor_set(x_75, 0, x_92);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_91);
lean_ctor_set(x_95, 1, x_75);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_90);
lean_ctor_set(x_96, 1, x_95);
x_97 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_96);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_55);
lean_ctor_set(x_98, 1, x_51);
x_99 = l_List_appendTR___rarg(x_98, x_73);
x_100 = l_List_appendTR___rarg(x_99, x_97);
x_101 = l_List_appendTR___rarg(x_54, x_100);
x_22 = x_101;
goto block_35;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_102 = lean_ctor_get(x_75, 0);
x_103 = lean_ctor_get(x_75, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_75);
x_104 = lean_ctor_get(x_76, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_76, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_106 = x_76;
} else {
 lean_dec_ref(x_76);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_106;
 lean_ctor_set_tag(x_107, 1);
}
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_51);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_104);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_103);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_102);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_110);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_55);
lean_ctor_set(x_112, 1, x_51);
x_113 = l_List_appendTR___rarg(x_112, x_73);
x_114 = l_List_appendTR___rarg(x_113, x_111);
x_115 = l_List_appendTR___rarg(x_54, x_114);
x_22 = x_115;
goto block_35;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_116 = lean_ctor_get(x_63, 0);
x_117 = lean_ctor_get(x_63, 1);
x_118 = lean_ctor_get(x_64, 0);
x_119 = lean_ctor_get(x_64, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_64);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_51);
lean_ctor_set_tag(x_63, 1);
lean_ctor_set(x_63, 1, x_120);
lean_ctor_set(x_63, 0, x_118);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_117);
lean_ctor_set(x_121, 1, x_63);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_116);
lean_ctor_set(x_122, 1, x_121);
x_123 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_122);
x_124 = lean_ctor_get(x_58, 2);
lean_inc(x_124);
lean_dec(x_58);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_126, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_126, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_132 = x_126;
} else {
 lean_dec_ref(x_126);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
 lean_ctor_set_tag(x_133, 1);
}
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_51);
if (lean_is_scalar(x_129)) {
 x_134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_134 = x_129;
 lean_ctor_set_tag(x_134, 1);
}
lean_ctor_set(x_134, 0, x_130);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_128);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_127);
lean_ctor_set(x_136, 1, x_135);
x_137 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_136);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_55);
lean_ctor_set(x_138, 1, x_51);
x_139 = l_List_appendTR___rarg(x_138, x_123);
x_140 = l_List_appendTR___rarg(x_139, x_137);
x_141 = l_List_appendTR___rarg(x_54, x_140);
x_22 = x_141;
goto block_35;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_142 = lean_ctor_get(x_63, 0);
x_143 = lean_ctor_get(x_63, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_63);
x_144 = lean_ctor_get(x_64, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_64, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_146 = x_64;
} else {
 lean_dec_ref(x_64);
 x_146 = lean_box(0);
}
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_147 = x_146;
 lean_ctor_set_tag(x_147, 1);
}
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_51);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_144);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_143);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_142);
lean_ctor_set(x_150, 1, x_149);
x_151 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_150);
x_152 = lean_ctor_get(x_58, 2);
lean_inc(x_152);
lean_dec(x_58);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_ctor_get(x_153, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_153, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_157 = x_153;
} else {
 lean_dec_ref(x_153);
 x_157 = lean_box(0);
}
x_158 = lean_ctor_get(x_154, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_154, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 x_160 = x_154;
} else {
 lean_dec_ref(x_154);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_160;
 lean_ctor_set_tag(x_161, 1);
}
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_51);
if (lean_is_scalar(x_157)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_157;
 lean_ctor_set_tag(x_162, 1);
}
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_156);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_155);
lean_ctor_set(x_164, 1, x_163);
x_165 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_164);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_55);
lean_ctor_set(x_166, 1, x_51);
x_167 = l_List_appendTR___rarg(x_166, x_151);
x_168 = l_List_appendTR___rarg(x_167, x_165);
x_169 = l_List_appendTR___rarg(x_54, x_168);
x_22 = x_169;
goto block_35;
}
}
else
{
lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_170 = lean_ctor_get(x_55, 0);
lean_inc(x_170);
lean_dec(x_55);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = 1;
x_173 = l_Lean_Name_toString(x_171, x_172);
x_174 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_ctor_get(x_176, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_176, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_180 = x_176;
} else {
 lean_dec_ref(x_176);
 x_180 = lean_box(0);
}
x_181 = lean_ctor_get(x_177, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_177, 1);
lean_inc(x_182);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_183 = x_177;
} else {
 lean_dec_ref(x_177);
 x_183 = lean_box(0);
}
if (lean_is_scalar(x_183)) {
 x_184 = lean_alloc_ctor(1, 2, 0);
} else {
 x_184 = x_183;
 lean_ctor_set_tag(x_184, 1);
}
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_51);
if (lean_is_scalar(x_180)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_180;
 lean_ctor_set_tag(x_185, 1);
}
lean_ctor_set(x_185, 0, x_181);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_179);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_178);
lean_ctor_set(x_187, 1, x_186);
x_188 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_187);
x_189 = lean_ctor_get(x_170, 2);
lean_inc(x_189);
lean_dec(x_170);
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_190, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_194 = x_190;
} else {
 lean_dec_ref(x_190);
 x_194 = lean_box(0);
}
x_195 = lean_ctor_get(x_191, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_191, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_197 = x_191;
} else {
 lean_dec_ref(x_191);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_198 = x_197;
 lean_ctor_set_tag(x_198, 1);
}
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set(x_198, 1, x_51);
if (lean_is_scalar(x_194)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_194;
 lean_ctor_set_tag(x_199, 1);
}
lean_ctor_set(x_199, 0, x_195);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_193);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_192);
lean_ctor_set(x_201, 1, x_200);
x_202 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_201);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_174);
lean_ctor_set(x_203, 1, x_51);
x_204 = l_List_appendTR___rarg(x_203, x_188);
x_205 = l_List_appendTR___rarg(x_204, x_202);
x_206 = l_List_appendTR___rarg(x_54, x_205);
x_22 = x_206;
goto block_35;
}
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_43, 0);
x_208 = lean_ctor_get(x_43, 1);
x_209 = lean_ctor_get(x_44, 0);
x_210 = lean_ctor_get(x_44, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_44);
x_211 = lean_box(0);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 1, x_212);
lean_ctor_set(x_43, 0, x_209);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_208);
lean_ctor_set(x_213, 1, x_43);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_207);
lean_ctor_set(x_214, 1, x_213);
x_215 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_214);
x_216 = lean_ctor_get(x_41, 1);
lean_inc(x_216);
lean_dec(x_41);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; 
x_217 = l_List_appendTR___rarg(x_215, x_211);
x_22 = x_217;
goto block_35;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 x_219 = x_216;
} else {
 lean_dec_ref(x_216);
 x_219 = lean_box(0);
}
x_220 = lean_ctor_get(x_218, 0);
lean_inc(x_220);
x_221 = 1;
x_222 = l_Lean_Name_toString(x_220, x_221);
if (lean_is_scalar(x_219)) {
 x_223 = lean_alloc_ctor(3, 1, 0);
} else {
 x_223 = x_219;
 lean_ctor_set_tag(x_223, 3);
}
lean_ctor_set(x_223, 0, x_222);
x_224 = lean_ctor_get(x_218, 1);
lean_inc(x_224);
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = lean_ctor_get(x_225, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_225, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_229 = x_225;
} else {
 lean_dec_ref(x_225);
 x_229 = lean_box(0);
}
x_230 = lean_ctor_get(x_226, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_226, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_232 = x_226;
} else {
 lean_dec_ref(x_226);
 x_232 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_233 = lean_alloc_ctor(1, 2, 0);
} else {
 x_233 = x_232;
 lean_ctor_set_tag(x_233, 1);
}
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_211);
if (lean_is_scalar(x_229)) {
 x_234 = lean_alloc_ctor(1, 2, 0);
} else {
 x_234 = x_229;
 lean_ctor_set_tag(x_234, 1);
}
lean_ctor_set(x_234, 0, x_230);
lean_ctor_set(x_234, 1, x_233);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_228);
lean_ctor_set(x_235, 1, x_234);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_227);
lean_ctor_set(x_236, 1, x_235);
x_237 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_236);
x_238 = lean_ctor_get(x_218, 2);
lean_inc(x_238);
lean_dec(x_218);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_239, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_243 = x_239;
} else {
 lean_dec_ref(x_239);
 x_243 = lean_box(0);
}
x_244 = lean_ctor_get(x_240, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_240, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_246 = x_240;
} else {
 lean_dec_ref(x_240);
 x_246 = lean_box(0);
}
if (lean_is_scalar(x_246)) {
 x_247 = lean_alloc_ctor(1, 2, 0);
} else {
 x_247 = x_246;
 lean_ctor_set_tag(x_247, 1);
}
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_211);
if (lean_is_scalar(x_243)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_243;
 lean_ctor_set_tag(x_248, 1);
}
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_242);
lean_ctor_set(x_249, 1, x_248);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_241);
lean_ctor_set(x_250, 1, x_249);
x_251 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_250);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_223);
lean_ctor_set(x_252, 1, x_211);
x_253 = l_List_appendTR___rarg(x_252, x_237);
x_254 = l_List_appendTR___rarg(x_253, x_251);
x_255 = l_List_appendTR___rarg(x_215, x_254);
x_22 = x_255;
goto block_35;
}
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_256 = lean_ctor_get(x_43, 0);
x_257 = lean_ctor_get(x_43, 1);
lean_inc(x_257);
lean_inc(x_256);
lean_dec(x_43);
x_258 = lean_ctor_get(x_44, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_44, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_260 = x_44;
} else {
 lean_dec_ref(x_44);
 x_260 = lean_box(0);
}
x_261 = lean_box(0);
if (lean_is_scalar(x_260)) {
 x_262 = lean_alloc_ctor(1, 2, 0);
} else {
 x_262 = x_260;
 lean_ctor_set_tag(x_262, 1);
}
lean_ctor_set(x_262, 0, x_259);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_258);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_257);
lean_ctor_set(x_264, 1, x_263);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_256);
lean_ctor_set(x_265, 1, x_264);
x_266 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_265);
x_267 = lean_ctor_get(x_41, 1);
lean_inc(x_267);
lean_dec(x_41);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; 
x_268 = l_List_appendTR___rarg(x_266, x_261);
x_22 = x_268;
goto block_35;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; uint8_t x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_269 = lean_ctor_get(x_267, 0);
lean_inc(x_269);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 x_270 = x_267;
} else {
 lean_dec_ref(x_267);
 x_270 = lean_box(0);
}
x_271 = lean_ctor_get(x_269, 0);
lean_inc(x_271);
x_272 = 1;
x_273 = l_Lean_Name_toString(x_271, x_272);
if (lean_is_scalar(x_270)) {
 x_274 = lean_alloc_ctor(3, 1, 0);
} else {
 x_274 = x_270;
 lean_ctor_set_tag(x_274, 3);
}
lean_ctor_set(x_274, 0, x_273);
x_275 = lean_ctor_get(x_269, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
lean_dec(x_275);
x_278 = lean_ctor_get(x_276, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_276, 1);
lean_inc(x_279);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_280 = x_276;
} else {
 lean_dec_ref(x_276);
 x_280 = lean_box(0);
}
x_281 = lean_ctor_get(x_277, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_277, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_277)) {
 lean_ctor_release(x_277, 0);
 lean_ctor_release(x_277, 1);
 x_283 = x_277;
} else {
 lean_dec_ref(x_277);
 x_283 = lean_box(0);
}
if (lean_is_scalar(x_283)) {
 x_284 = lean_alloc_ctor(1, 2, 0);
} else {
 x_284 = x_283;
 lean_ctor_set_tag(x_284, 1);
}
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_261);
if (lean_is_scalar(x_280)) {
 x_285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_285 = x_280;
 lean_ctor_set_tag(x_285, 1);
}
lean_ctor_set(x_285, 0, x_281);
lean_ctor_set(x_285, 1, x_284);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_279);
lean_ctor_set(x_286, 1, x_285);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_278);
lean_ctor_set(x_287, 1, x_286);
x_288 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_287);
x_289 = lean_ctor_get(x_269, 2);
lean_inc(x_289);
lean_dec(x_269);
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
lean_dec(x_289);
x_292 = lean_ctor_get(x_290, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_290, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_294 = x_290;
} else {
 lean_dec_ref(x_290);
 x_294 = lean_box(0);
}
x_295 = lean_ctor_get(x_291, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_291, 1);
lean_inc(x_296);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_297 = x_291;
} else {
 lean_dec_ref(x_291);
 x_297 = lean_box(0);
}
if (lean_is_scalar(x_297)) {
 x_298 = lean_alloc_ctor(1, 2, 0);
} else {
 x_298 = x_297;
 lean_ctor_set_tag(x_298, 1);
}
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_261);
if (lean_is_scalar(x_294)) {
 x_299 = lean_alloc_ctor(1, 2, 0);
} else {
 x_299 = x_294;
 lean_ctor_set_tag(x_299, 1);
}
lean_ctor_set(x_299, 0, x_295);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_293);
lean_ctor_set(x_300, 1, x_299);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_292);
lean_ctor_set(x_301, 1, x_300);
x_302 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_301);
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_274);
lean_ctor_set(x_303, 1, x_261);
x_304 = l_List_appendTR___rarg(x_303, x_288);
x_305 = l_List_appendTR___rarg(x_304, x_302);
x_306 = l_List_appendTR___rarg(x_266, x_305);
x_22 = x_306;
goto block_35;
}
}
}
block_35:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = l_List_redLength___rarg(x_22);
x_24 = lean_mk_empty_array_with_capacity(x_23);
lean_dec(x_23);
x_25 = l_List_toArrayAux___rarg(x_22, x_24);
x_26 = lean_array_size(x_25);
x_27 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_26, x_16, x_25);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_2);
x_32 = l_Lean_Json_mkObj(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_7);
return x_34;
}
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; size_t x_313; size_t x_314; lean_object* x_315; size_t x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_307 = lean_ctor_get(x_5, 0);
x_308 = lean_ctor_get(x_5, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_5);
x_309 = l_Lean_Lsp_RefIdent_toJson(x_307);
x_310 = l_Lean_Json_compress(x_309);
x_311 = lean_ctor_get(x_308, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_308, 1);
lean_inc(x_312);
lean_dec(x_308);
x_313 = lean_array_size(x_312);
x_314 = 0;
x_315 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_313, x_314, x_312);
x_316 = lean_array_size(x_315);
x_317 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_314, x_316, x_314, x_315);
x_318 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_318, 0, x_317);
x_319 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
x_320 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_318);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_320);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_335 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_2);
x_337 = l_Lean_Json_mkObj(x_336);
x_338 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_338, 0, x_310);
lean_ctor_set(x_338, 1, x_337);
x_339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_7);
return x_339;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_340 = lean_ctor_get(x_311, 0);
lean_inc(x_340);
lean_dec(x_311);
x_341 = lean_ctor_get(x_340, 0);
lean_inc(x_341);
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_ctor_get(x_342, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_342, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_346 = x_342;
} else {
 lean_dec_ref(x_342);
 x_346 = lean_box(0);
}
x_347 = lean_ctor_get(x_343, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_343, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_349 = x_343;
} else {
 lean_dec_ref(x_343);
 x_349 = lean_box(0);
}
x_350 = lean_box(0);
if (lean_is_scalar(x_349)) {
 x_351 = lean_alloc_ctor(1, 2, 0);
} else {
 x_351 = x_349;
 lean_ctor_set_tag(x_351, 1);
}
lean_ctor_set(x_351, 0, x_348);
lean_ctor_set(x_351, 1, x_350);
if (lean_is_scalar(x_346)) {
 x_352 = lean_alloc_ctor(1, 2, 0);
} else {
 x_352 = x_346;
 lean_ctor_set_tag(x_352, 1);
}
lean_ctor_set(x_352, 0, x_347);
lean_ctor_set(x_352, 1, x_351);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_345);
lean_ctor_set(x_353, 1, x_352);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_344);
lean_ctor_set(x_354, 1, x_353);
x_355 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_354);
x_356 = lean_ctor_get(x_340, 1);
lean_inc(x_356);
lean_dec(x_340);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; 
x_357 = l_List_appendTR___rarg(x_355, x_350);
x_321 = x_357;
goto block_334;
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; uint8_t x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_358 = lean_ctor_get(x_356, 0);
lean_inc(x_358);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 x_359 = x_356;
} else {
 lean_dec_ref(x_356);
 x_359 = lean_box(0);
}
x_360 = lean_ctor_get(x_358, 0);
lean_inc(x_360);
x_361 = 1;
x_362 = l_Lean_Name_toString(x_360, x_361);
if (lean_is_scalar(x_359)) {
 x_363 = lean_alloc_ctor(3, 1, 0);
} else {
 x_363 = x_359;
 lean_ctor_set_tag(x_363, 3);
}
lean_ctor_set(x_363, 0, x_362);
x_364 = lean_ctor_get(x_358, 1);
lean_inc(x_364);
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
lean_dec(x_364);
x_367 = lean_ctor_get(x_365, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_365, 1);
lean_inc(x_368);
if (lean_is_exclusive(x_365)) {
 lean_ctor_release(x_365, 0);
 lean_ctor_release(x_365, 1);
 x_369 = x_365;
} else {
 lean_dec_ref(x_365);
 x_369 = lean_box(0);
}
x_370 = lean_ctor_get(x_366, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_366, 1);
lean_inc(x_371);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 lean_ctor_release(x_366, 1);
 x_372 = x_366;
} else {
 lean_dec_ref(x_366);
 x_372 = lean_box(0);
}
if (lean_is_scalar(x_372)) {
 x_373 = lean_alloc_ctor(1, 2, 0);
} else {
 x_373 = x_372;
 lean_ctor_set_tag(x_373, 1);
}
lean_ctor_set(x_373, 0, x_371);
lean_ctor_set(x_373, 1, x_350);
if (lean_is_scalar(x_369)) {
 x_374 = lean_alloc_ctor(1, 2, 0);
} else {
 x_374 = x_369;
 lean_ctor_set_tag(x_374, 1);
}
lean_ctor_set(x_374, 0, x_370);
lean_ctor_set(x_374, 1, x_373);
x_375 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_375, 0, x_368);
lean_ctor_set(x_375, 1, x_374);
x_376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_376, 0, x_367);
lean_ctor_set(x_376, 1, x_375);
x_377 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_376);
x_378 = lean_ctor_get(x_358, 2);
lean_inc(x_378);
lean_dec(x_358);
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_378, 1);
lean_inc(x_380);
lean_dec(x_378);
x_381 = lean_ctor_get(x_379, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_379, 1);
lean_inc(x_382);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 x_383 = x_379;
} else {
 lean_dec_ref(x_379);
 x_383 = lean_box(0);
}
x_384 = lean_ctor_get(x_380, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_380, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_380)) {
 lean_ctor_release(x_380, 0);
 lean_ctor_release(x_380, 1);
 x_386 = x_380;
} else {
 lean_dec_ref(x_380);
 x_386 = lean_box(0);
}
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(1, 2, 0);
} else {
 x_387 = x_386;
 lean_ctor_set_tag(x_387, 1);
}
lean_ctor_set(x_387, 0, x_385);
lean_ctor_set(x_387, 1, x_350);
if (lean_is_scalar(x_383)) {
 x_388 = lean_alloc_ctor(1, 2, 0);
} else {
 x_388 = x_383;
 lean_ctor_set_tag(x_388, 1);
}
lean_ctor_set(x_388, 0, x_384);
lean_ctor_set(x_388, 1, x_387);
x_389 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_389, 0, x_382);
lean_ctor_set(x_389, 1, x_388);
x_390 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_390, 0, x_381);
lean_ctor_set(x_390, 1, x_389);
x_391 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_390);
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_363);
lean_ctor_set(x_392, 1, x_350);
x_393 = l_List_appendTR___rarg(x_392, x_377);
x_394 = l_List_appendTR___rarg(x_393, x_391);
x_395 = l_List_appendTR___rarg(x_355, x_394);
x_321 = x_395;
goto block_334;
}
}
block_334:
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; size_t x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_322 = l_List_redLength___rarg(x_321);
x_323 = lean_mk_empty_array_with_capacity(x_322);
lean_dec(x_322);
x_324 = l_List_toArrayAux___rarg(x_321, x_323);
x_325 = lean_array_size(x_324);
x_326 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_325, x_314, x_324);
x_327 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_327, 0, x_326);
x_328 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_327);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_2);
x_331 = l_Lean_Json_mkObj(x_330);
x_332 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_332, 0, x_310);
lean_ctor_set(x_332, 1, x_331);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_332);
lean_ctor_set(x_333, 1, x_7);
return x_333;
}
}
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; size_t x_406; size_t x_407; lean_object* x_408; size_t x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_396 = lean_ctor_get(x_2, 0);
x_397 = lean_ctor_get(x_2, 1);
lean_inc(x_397);
lean_inc(x_396);
lean_dec(x_2);
lean_inc(x_1);
x_398 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2(x_1, x_397);
x_399 = lean_ctor_get(x_396, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_396, 1);
lean_inc(x_400);
if (lean_is_exclusive(x_396)) {
 lean_ctor_release(x_396, 0);
 lean_ctor_release(x_396, 1);
 x_401 = x_396;
} else {
 lean_dec_ref(x_396);
 x_401 = lean_box(0);
}
x_402 = l_Lean_Lsp_RefIdent_toJson(x_399);
x_403 = l_Lean_Json_compress(x_402);
x_404 = lean_ctor_get(x_400, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_400, 1);
lean_inc(x_405);
lean_dec(x_400);
x_406 = lean_array_size(x_405);
x_407 = 0;
x_408 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_406, x_407, x_405);
x_409 = lean_array_size(x_408);
x_410 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_407, x_409, x_407, x_408);
x_411 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_411, 0, x_410);
x_412 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
if (lean_is_scalar(x_401)) {
 x_413 = lean_alloc_ctor(0, 2, 0);
} else {
 x_413 = x_401;
}
lean_ctor_set(x_413, 0, x_412);
lean_ctor_set(x_413, 1, x_411);
x_414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_414, 0, x_413);
lean_ctor_set(x_414, 1, x_1);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_429 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_430 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_430, 0, x_429);
lean_ctor_set(x_430, 1, x_414);
x_431 = l_Lean_Json_mkObj(x_430);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_403);
lean_ctor_set(x_432, 1, x_431);
x_433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_398);
return x_433;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_434 = lean_ctor_get(x_404, 0);
lean_inc(x_434);
lean_dec(x_404);
x_435 = lean_ctor_get(x_434, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_435, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 1);
lean_inc(x_437);
lean_dec(x_435);
x_438 = lean_ctor_get(x_436, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_436, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_436)) {
 lean_ctor_release(x_436, 0);
 lean_ctor_release(x_436, 1);
 x_440 = x_436;
} else {
 lean_dec_ref(x_436);
 x_440 = lean_box(0);
}
x_441 = lean_ctor_get(x_437, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_437, 1);
lean_inc(x_442);
if (lean_is_exclusive(x_437)) {
 lean_ctor_release(x_437, 0);
 lean_ctor_release(x_437, 1);
 x_443 = x_437;
} else {
 lean_dec_ref(x_437);
 x_443 = lean_box(0);
}
x_444 = lean_box(0);
if (lean_is_scalar(x_443)) {
 x_445 = lean_alloc_ctor(1, 2, 0);
} else {
 x_445 = x_443;
 lean_ctor_set_tag(x_445, 1);
}
lean_ctor_set(x_445, 0, x_442);
lean_ctor_set(x_445, 1, x_444);
if (lean_is_scalar(x_440)) {
 x_446 = lean_alloc_ctor(1, 2, 0);
} else {
 x_446 = x_440;
 lean_ctor_set_tag(x_446, 1);
}
lean_ctor_set(x_446, 0, x_441);
lean_ctor_set(x_446, 1, x_445);
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_439);
lean_ctor_set(x_447, 1, x_446);
x_448 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_448, 0, x_438);
lean_ctor_set(x_448, 1, x_447);
x_449 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_448);
x_450 = lean_ctor_get(x_434, 1);
lean_inc(x_450);
lean_dec(x_434);
if (lean_obj_tag(x_450) == 0)
{
lean_object* x_451; 
x_451 = l_List_appendTR___rarg(x_449, x_444);
x_415 = x_451;
goto block_428;
}
else
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; 
x_452 = lean_ctor_get(x_450, 0);
lean_inc(x_452);
if (lean_is_exclusive(x_450)) {
 lean_ctor_release(x_450, 0);
 x_453 = x_450;
} else {
 lean_dec_ref(x_450);
 x_453 = lean_box(0);
}
x_454 = lean_ctor_get(x_452, 0);
lean_inc(x_454);
x_455 = 1;
x_456 = l_Lean_Name_toString(x_454, x_455);
if (lean_is_scalar(x_453)) {
 x_457 = lean_alloc_ctor(3, 1, 0);
} else {
 x_457 = x_453;
 lean_ctor_set_tag(x_457, 3);
}
lean_ctor_set(x_457, 0, x_456);
x_458 = lean_ctor_get(x_452, 1);
lean_inc(x_458);
x_459 = lean_ctor_get(x_458, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_458, 1);
lean_inc(x_460);
lean_dec(x_458);
x_461 = lean_ctor_get(x_459, 0);
lean_inc(x_461);
x_462 = lean_ctor_get(x_459, 1);
lean_inc(x_462);
if (lean_is_exclusive(x_459)) {
 lean_ctor_release(x_459, 0);
 lean_ctor_release(x_459, 1);
 x_463 = x_459;
} else {
 lean_dec_ref(x_459);
 x_463 = lean_box(0);
}
x_464 = lean_ctor_get(x_460, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_460, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_460)) {
 lean_ctor_release(x_460, 0);
 lean_ctor_release(x_460, 1);
 x_466 = x_460;
} else {
 lean_dec_ref(x_460);
 x_466 = lean_box(0);
}
if (lean_is_scalar(x_466)) {
 x_467 = lean_alloc_ctor(1, 2, 0);
} else {
 x_467 = x_466;
 lean_ctor_set_tag(x_467, 1);
}
lean_ctor_set(x_467, 0, x_465);
lean_ctor_set(x_467, 1, x_444);
if (lean_is_scalar(x_463)) {
 x_468 = lean_alloc_ctor(1, 2, 0);
} else {
 x_468 = x_463;
 lean_ctor_set_tag(x_468, 1);
}
lean_ctor_set(x_468, 0, x_464);
lean_ctor_set(x_468, 1, x_467);
x_469 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_469, 0, x_462);
lean_ctor_set(x_469, 1, x_468);
x_470 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_470, 0, x_461);
lean_ctor_set(x_470, 1, x_469);
x_471 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_470);
x_472 = lean_ctor_get(x_452, 2);
lean_inc(x_472);
lean_dec(x_452);
x_473 = lean_ctor_get(x_472, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_472, 1);
lean_inc(x_474);
lean_dec(x_472);
x_475 = lean_ctor_get(x_473, 0);
lean_inc(x_475);
x_476 = lean_ctor_get(x_473, 1);
lean_inc(x_476);
if (lean_is_exclusive(x_473)) {
 lean_ctor_release(x_473, 0);
 lean_ctor_release(x_473, 1);
 x_477 = x_473;
} else {
 lean_dec_ref(x_473);
 x_477 = lean_box(0);
}
x_478 = lean_ctor_get(x_474, 0);
lean_inc(x_478);
x_479 = lean_ctor_get(x_474, 1);
lean_inc(x_479);
if (lean_is_exclusive(x_474)) {
 lean_ctor_release(x_474, 0);
 lean_ctor_release(x_474, 1);
 x_480 = x_474;
} else {
 lean_dec_ref(x_474);
 x_480 = lean_box(0);
}
if (lean_is_scalar(x_480)) {
 x_481 = lean_alloc_ctor(1, 2, 0);
} else {
 x_481 = x_480;
 lean_ctor_set_tag(x_481, 1);
}
lean_ctor_set(x_481, 0, x_479);
lean_ctor_set(x_481, 1, x_444);
if (lean_is_scalar(x_477)) {
 x_482 = lean_alloc_ctor(1, 2, 0);
} else {
 x_482 = x_477;
 lean_ctor_set_tag(x_482, 1);
}
lean_ctor_set(x_482, 0, x_478);
lean_ctor_set(x_482, 1, x_481);
x_483 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_483, 0, x_476);
lean_ctor_set(x_483, 1, x_482);
x_484 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_484, 0, x_475);
lean_ctor_set(x_484, 1, x_483);
x_485 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_484);
x_486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_486, 0, x_457);
lean_ctor_set(x_486, 1, x_444);
x_487 = l_List_appendTR___rarg(x_486, x_471);
x_488 = l_List_appendTR___rarg(x_487, x_485);
x_489 = l_List_appendTR___rarg(x_449, x_488);
x_415 = x_489;
goto block_428;
}
}
block_428:
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; size_t x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
x_416 = l_List_redLength___rarg(x_415);
x_417 = lean_mk_empty_array_with_capacity(x_416);
lean_dec(x_416);
x_418 = l_List_toArrayAux___rarg(x_415, x_417);
x_419 = lean_array_size(x_418);
x_420 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_419, x_407, x_418);
x_421 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_421, 0, x_420);
x_422 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_423 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_421);
x_424 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_424, 0, x_423);
lean_ctor_set(x_424, 1, x_414);
x_425 = l_Lean_Json_mkObj(x_424);
x_426 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_426, 0, x_403);
lean_ctor_set(x_426, 1, x_425);
x_427 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_427, 0, x_426);
lean_ctor_set(x_427, 1, x_398);
return x_427;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__3(x_1, x_6);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = l_Lean_Lsp_RefIdent_toJson(x_9);
x_12 = l_Lean_Json_compress(x_11);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_array_size(x_14);
x_16 = 0;
x_17 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_15, x_16, x_14);
x_18 = lean_array_size(x_17);
x_19 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_16, x_18, x_16, x_17);
x_20 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
lean_ctor_set(x_5, 1, x_20);
lean_ctor_set(x_5, 0, x_21);
lean_ctor_set(x_2, 1, x_1);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_2);
x_38 = l_Lean_Json_mkObj(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_12);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_7);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_13, 0);
lean_inc(x_41);
lean_dec(x_13);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_43, 0);
x_48 = lean_ctor_get(x_43, 1);
x_49 = lean_ctor_get(x_44, 0);
x_50 = lean_ctor_get(x_44, 1);
x_51 = lean_box(0);
lean_ctor_set_tag(x_44, 1);
lean_ctor_set(x_44, 1, x_51);
lean_ctor_set(x_44, 0, x_50);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 1, x_44);
lean_ctor_set(x_43, 0, x_49);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_48);
lean_ctor_set(x_52, 1, x_43);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_53);
x_55 = lean_ctor_get(x_41, 1);
lean_inc(x_55);
lean_dec(x_41);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; 
x_56 = l_List_appendTR___rarg(x_54, x_51);
x_22 = x_56;
goto block_35;
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_55);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_58 = lean_ctor_get(x_55, 0);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = 1;
x_61 = l_Lean_Name_toString(x_59, x_60);
lean_ctor_set_tag(x_55, 3);
lean_ctor_set(x_55, 0, x_61);
x_62 = lean_ctor_get(x_58, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = !lean_is_exclusive(x_63);
if (x_65 == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_67 = lean_ctor_get(x_63, 0);
x_68 = lean_ctor_get(x_63, 1);
x_69 = lean_ctor_get(x_64, 0);
x_70 = lean_ctor_get(x_64, 1);
lean_ctor_set_tag(x_64, 1);
lean_ctor_set(x_64, 1, x_51);
lean_ctor_set(x_64, 0, x_70);
lean_ctor_set_tag(x_63, 1);
lean_ctor_set(x_63, 1, x_64);
lean_ctor_set(x_63, 0, x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_63);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_67);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_72);
x_74 = lean_ctor_get(x_58, 2);
lean_inc(x_74);
lean_dec(x_58);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_79 = lean_ctor_get(x_75, 0);
x_80 = lean_ctor_get(x_75, 1);
x_81 = lean_ctor_get(x_76, 0);
x_82 = lean_ctor_get(x_76, 1);
lean_ctor_set_tag(x_76, 1);
lean_ctor_set(x_76, 1, x_51);
lean_ctor_set(x_76, 0, x_82);
lean_ctor_set_tag(x_75, 1);
lean_ctor_set(x_75, 1, x_76);
lean_ctor_set(x_75, 0, x_81);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_75);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_79);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_84);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_55);
lean_ctor_set(x_86, 1, x_51);
x_87 = l_List_appendTR___rarg(x_86, x_73);
x_88 = l_List_appendTR___rarg(x_87, x_85);
x_89 = l_List_appendTR___rarg(x_54, x_88);
x_22 = x_89;
goto block_35;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_90 = lean_ctor_get(x_75, 0);
x_91 = lean_ctor_get(x_75, 1);
x_92 = lean_ctor_get(x_76, 0);
x_93 = lean_ctor_get(x_76, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_76);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_51);
lean_ctor_set_tag(x_75, 1);
lean_ctor_set(x_75, 1, x_94);
lean_ctor_set(x_75, 0, x_92);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_91);
lean_ctor_set(x_95, 1, x_75);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_90);
lean_ctor_set(x_96, 1, x_95);
x_97 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_96);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_55);
lean_ctor_set(x_98, 1, x_51);
x_99 = l_List_appendTR___rarg(x_98, x_73);
x_100 = l_List_appendTR___rarg(x_99, x_97);
x_101 = l_List_appendTR___rarg(x_54, x_100);
x_22 = x_101;
goto block_35;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_102 = lean_ctor_get(x_75, 0);
x_103 = lean_ctor_get(x_75, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_75);
x_104 = lean_ctor_get(x_76, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_76, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_106 = x_76;
} else {
 lean_dec_ref(x_76);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_106;
 lean_ctor_set_tag(x_107, 1);
}
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_51);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_104);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_103);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_102);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_110);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_55);
lean_ctor_set(x_112, 1, x_51);
x_113 = l_List_appendTR___rarg(x_112, x_73);
x_114 = l_List_appendTR___rarg(x_113, x_111);
x_115 = l_List_appendTR___rarg(x_54, x_114);
x_22 = x_115;
goto block_35;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_116 = lean_ctor_get(x_63, 0);
x_117 = lean_ctor_get(x_63, 1);
x_118 = lean_ctor_get(x_64, 0);
x_119 = lean_ctor_get(x_64, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_64);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_51);
lean_ctor_set_tag(x_63, 1);
lean_ctor_set(x_63, 1, x_120);
lean_ctor_set(x_63, 0, x_118);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_117);
lean_ctor_set(x_121, 1, x_63);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_116);
lean_ctor_set(x_122, 1, x_121);
x_123 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_122);
x_124 = lean_ctor_get(x_58, 2);
lean_inc(x_124);
lean_dec(x_58);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_126, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_126, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_132 = x_126;
} else {
 lean_dec_ref(x_126);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
 lean_ctor_set_tag(x_133, 1);
}
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_51);
if (lean_is_scalar(x_129)) {
 x_134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_134 = x_129;
 lean_ctor_set_tag(x_134, 1);
}
lean_ctor_set(x_134, 0, x_130);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_128);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_127);
lean_ctor_set(x_136, 1, x_135);
x_137 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_136);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_55);
lean_ctor_set(x_138, 1, x_51);
x_139 = l_List_appendTR___rarg(x_138, x_123);
x_140 = l_List_appendTR___rarg(x_139, x_137);
x_141 = l_List_appendTR___rarg(x_54, x_140);
x_22 = x_141;
goto block_35;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_142 = lean_ctor_get(x_63, 0);
x_143 = lean_ctor_get(x_63, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_63);
x_144 = lean_ctor_get(x_64, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_64, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_146 = x_64;
} else {
 lean_dec_ref(x_64);
 x_146 = lean_box(0);
}
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_147 = x_146;
 lean_ctor_set_tag(x_147, 1);
}
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_51);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_144);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_143);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_142);
lean_ctor_set(x_150, 1, x_149);
x_151 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_150);
x_152 = lean_ctor_get(x_58, 2);
lean_inc(x_152);
lean_dec(x_58);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_ctor_get(x_153, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_153, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_157 = x_153;
} else {
 lean_dec_ref(x_153);
 x_157 = lean_box(0);
}
x_158 = lean_ctor_get(x_154, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_154, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 x_160 = x_154;
} else {
 lean_dec_ref(x_154);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_160;
 lean_ctor_set_tag(x_161, 1);
}
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_51);
if (lean_is_scalar(x_157)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_157;
 lean_ctor_set_tag(x_162, 1);
}
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_156);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_155);
lean_ctor_set(x_164, 1, x_163);
x_165 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_164);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_55);
lean_ctor_set(x_166, 1, x_51);
x_167 = l_List_appendTR___rarg(x_166, x_151);
x_168 = l_List_appendTR___rarg(x_167, x_165);
x_169 = l_List_appendTR___rarg(x_54, x_168);
x_22 = x_169;
goto block_35;
}
}
else
{
lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_170 = lean_ctor_get(x_55, 0);
lean_inc(x_170);
lean_dec(x_55);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = 1;
x_173 = l_Lean_Name_toString(x_171, x_172);
x_174 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_ctor_get(x_176, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_176, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_180 = x_176;
} else {
 lean_dec_ref(x_176);
 x_180 = lean_box(0);
}
x_181 = lean_ctor_get(x_177, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_177, 1);
lean_inc(x_182);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_183 = x_177;
} else {
 lean_dec_ref(x_177);
 x_183 = lean_box(0);
}
if (lean_is_scalar(x_183)) {
 x_184 = lean_alloc_ctor(1, 2, 0);
} else {
 x_184 = x_183;
 lean_ctor_set_tag(x_184, 1);
}
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_51);
if (lean_is_scalar(x_180)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_180;
 lean_ctor_set_tag(x_185, 1);
}
lean_ctor_set(x_185, 0, x_181);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_179);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_178);
lean_ctor_set(x_187, 1, x_186);
x_188 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_187);
x_189 = lean_ctor_get(x_170, 2);
lean_inc(x_189);
lean_dec(x_170);
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_190, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_194 = x_190;
} else {
 lean_dec_ref(x_190);
 x_194 = lean_box(0);
}
x_195 = lean_ctor_get(x_191, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_191, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_197 = x_191;
} else {
 lean_dec_ref(x_191);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_198 = x_197;
 lean_ctor_set_tag(x_198, 1);
}
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set(x_198, 1, x_51);
if (lean_is_scalar(x_194)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_194;
 lean_ctor_set_tag(x_199, 1);
}
lean_ctor_set(x_199, 0, x_195);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_193);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_192);
lean_ctor_set(x_201, 1, x_200);
x_202 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_201);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_174);
lean_ctor_set(x_203, 1, x_51);
x_204 = l_List_appendTR___rarg(x_203, x_188);
x_205 = l_List_appendTR___rarg(x_204, x_202);
x_206 = l_List_appendTR___rarg(x_54, x_205);
x_22 = x_206;
goto block_35;
}
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_43, 0);
x_208 = lean_ctor_get(x_43, 1);
x_209 = lean_ctor_get(x_44, 0);
x_210 = lean_ctor_get(x_44, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_44);
x_211 = lean_box(0);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 1, x_212);
lean_ctor_set(x_43, 0, x_209);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_208);
lean_ctor_set(x_213, 1, x_43);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_207);
lean_ctor_set(x_214, 1, x_213);
x_215 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_214);
x_216 = lean_ctor_get(x_41, 1);
lean_inc(x_216);
lean_dec(x_41);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; 
x_217 = l_List_appendTR___rarg(x_215, x_211);
x_22 = x_217;
goto block_35;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 x_219 = x_216;
} else {
 lean_dec_ref(x_216);
 x_219 = lean_box(0);
}
x_220 = lean_ctor_get(x_218, 0);
lean_inc(x_220);
x_221 = 1;
x_222 = l_Lean_Name_toString(x_220, x_221);
if (lean_is_scalar(x_219)) {
 x_223 = lean_alloc_ctor(3, 1, 0);
} else {
 x_223 = x_219;
 lean_ctor_set_tag(x_223, 3);
}
lean_ctor_set(x_223, 0, x_222);
x_224 = lean_ctor_get(x_218, 1);
lean_inc(x_224);
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = lean_ctor_get(x_225, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_225, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_229 = x_225;
} else {
 lean_dec_ref(x_225);
 x_229 = lean_box(0);
}
x_230 = lean_ctor_get(x_226, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_226, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_232 = x_226;
} else {
 lean_dec_ref(x_226);
 x_232 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_233 = lean_alloc_ctor(1, 2, 0);
} else {
 x_233 = x_232;
 lean_ctor_set_tag(x_233, 1);
}
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_211);
if (lean_is_scalar(x_229)) {
 x_234 = lean_alloc_ctor(1, 2, 0);
} else {
 x_234 = x_229;
 lean_ctor_set_tag(x_234, 1);
}
lean_ctor_set(x_234, 0, x_230);
lean_ctor_set(x_234, 1, x_233);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_228);
lean_ctor_set(x_235, 1, x_234);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_227);
lean_ctor_set(x_236, 1, x_235);
x_237 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_236);
x_238 = lean_ctor_get(x_218, 2);
lean_inc(x_238);
lean_dec(x_218);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_239, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_243 = x_239;
} else {
 lean_dec_ref(x_239);
 x_243 = lean_box(0);
}
x_244 = lean_ctor_get(x_240, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_240, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_246 = x_240;
} else {
 lean_dec_ref(x_240);
 x_246 = lean_box(0);
}
if (lean_is_scalar(x_246)) {
 x_247 = lean_alloc_ctor(1, 2, 0);
} else {
 x_247 = x_246;
 lean_ctor_set_tag(x_247, 1);
}
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_211);
if (lean_is_scalar(x_243)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_243;
 lean_ctor_set_tag(x_248, 1);
}
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_242);
lean_ctor_set(x_249, 1, x_248);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_241);
lean_ctor_set(x_250, 1, x_249);
x_251 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_250);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_223);
lean_ctor_set(x_252, 1, x_211);
x_253 = l_List_appendTR___rarg(x_252, x_237);
x_254 = l_List_appendTR___rarg(x_253, x_251);
x_255 = l_List_appendTR___rarg(x_215, x_254);
x_22 = x_255;
goto block_35;
}
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_256 = lean_ctor_get(x_43, 0);
x_257 = lean_ctor_get(x_43, 1);
lean_inc(x_257);
lean_inc(x_256);
lean_dec(x_43);
x_258 = lean_ctor_get(x_44, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_44, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_260 = x_44;
} else {
 lean_dec_ref(x_44);
 x_260 = lean_box(0);
}
x_261 = lean_box(0);
if (lean_is_scalar(x_260)) {
 x_262 = lean_alloc_ctor(1, 2, 0);
} else {
 x_262 = x_260;
 lean_ctor_set_tag(x_262, 1);
}
lean_ctor_set(x_262, 0, x_259);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_258);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_257);
lean_ctor_set(x_264, 1, x_263);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_256);
lean_ctor_set(x_265, 1, x_264);
x_266 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_265);
x_267 = lean_ctor_get(x_41, 1);
lean_inc(x_267);
lean_dec(x_41);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; 
x_268 = l_List_appendTR___rarg(x_266, x_261);
x_22 = x_268;
goto block_35;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; uint8_t x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_269 = lean_ctor_get(x_267, 0);
lean_inc(x_269);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 x_270 = x_267;
} else {
 lean_dec_ref(x_267);
 x_270 = lean_box(0);
}
x_271 = lean_ctor_get(x_269, 0);
lean_inc(x_271);
x_272 = 1;
x_273 = l_Lean_Name_toString(x_271, x_272);
if (lean_is_scalar(x_270)) {
 x_274 = lean_alloc_ctor(3, 1, 0);
} else {
 x_274 = x_270;
 lean_ctor_set_tag(x_274, 3);
}
lean_ctor_set(x_274, 0, x_273);
x_275 = lean_ctor_get(x_269, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
lean_dec(x_275);
x_278 = lean_ctor_get(x_276, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_276, 1);
lean_inc(x_279);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_280 = x_276;
} else {
 lean_dec_ref(x_276);
 x_280 = lean_box(0);
}
x_281 = lean_ctor_get(x_277, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_277, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_277)) {
 lean_ctor_release(x_277, 0);
 lean_ctor_release(x_277, 1);
 x_283 = x_277;
} else {
 lean_dec_ref(x_277);
 x_283 = lean_box(0);
}
if (lean_is_scalar(x_283)) {
 x_284 = lean_alloc_ctor(1, 2, 0);
} else {
 x_284 = x_283;
 lean_ctor_set_tag(x_284, 1);
}
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_261);
if (lean_is_scalar(x_280)) {
 x_285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_285 = x_280;
 lean_ctor_set_tag(x_285, 1);
}
lean_ctor_set(x_285, 0, x_281);
lean_ctor_set(x_285, 1, x_284);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_279);
lean_ctor_set(x_286, 1, x_285);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_278);
lean_ctor_set(x_287, 1, x_286);
x_288 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_287);
x_289 = lean_ctor_get(x_269, 2);
lean_inc(x_289);
lean_dec(x_269);
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
lean_dec(x_289);
x_292 = lean_ctor_get(x_290, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_290, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_294 = x_290;
} else {
 lean_dec_ref(x_290);
 x_294 = lean_box(0);
}
x_295 = lean_ctor_get(x_291, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_291, 1);
lean_inc(x_296);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_297 = x_291;
} else {
 lean_dec_ref(x_291);
 x_297 = lean_box(0);
}
if (lean_is_scalar(x_297)) {
 x_298 = lean_alloc_ctor(1, 2, 0);
} else {
 x_298 = x_297;
 lean_ctor_set_tag(x_298, 1);
}
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_261);
if (lean_is_scalar(x_294)) {
 x_299 = lean_alloc_ctor(1, 2, 0);
} else {
 x_299 = x_294;
 lean_ctor_set_tag(x_299, 1);
}
lean_ctor_set(x_299, 0, x_295);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_293);
lean_ctor_set(x_300, 1, x_299);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_292);
lean_ctor_set(x_301, 1, x_300);
x_302 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_301);
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_274);
lean_ctor_set(x_303, 1, x_261);
x_304 = l_List_appendTR___rarg(x_303, x_288);
x_305 = l_List_appendTR___rarg(x_304, x_302);
x_306 = l_List_appendTR___rarg(x_266, x_305);
x_22 = x_306;
goto block_35;
}
}
}
block_35:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = l_List_redLength___rarg(x_22);
x_24 = lean_mk_empty_array_with_capacity(x_23);
lean_dec(x_23);
x_25 = l_List_toArrayAux___rarg(x_22, x_24);
x_26 = lean_array_size(x_25);
x_27 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_26, x_16, x_25);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_2);
x_32 = l_Lean_Json_mkObj(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_7);
return x_34;
}
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; size_t x_313; size_t x_314; lean_object* x_315; size_t x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_307 = lean_ctor_get(x_5, 0);
x_308 = lean_ctor_get(x_5, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_5);
x_309 = l_Lean_Lsp_RefIdent_toJson(x_307);
x_310 = l_Lean_Json_compress(x_309);
x_311 = lean_ctor_get(x_308, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_308, 1);
lean_inc(x_312);
lean_dec(x_308);
x_313 = lean_array_size(x_312);
x_314 = 0;
x_315 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_313, x_314, x_312);
x_316 = lean_array_size(x_315);
x_317 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_314, x_316, x_314, x_315);
x_318 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_318, 0, x_317);
x_319 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
x_320 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_318);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_320);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_335 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_2);
x_337 = l_Lean_Json_mkObj(x_336);
x_338 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_338, 0, x_310);
lean_ctor_set(x_338, 1, x_337);
x_339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_7);
return x_339;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_340 = lean_ctor_get(x_311, 0);
lean_inc(x_340);
lean_dec(x_311);
x_341 = lean_ctor_get(x_340, 0);
lean_inc(x_341);
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_ctor_get(x_342, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_342, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_346 = x_342;
} else {
 lean_dec_ref(x_342);
 x_346 = lean_box(0);
}
x_347 = lean_ctor_get(x_343, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_343, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_349 = x_343;
} else {
 lean_dec_ref(x_343);
 x_349 = lean_box(0);
}
x_350 = lean_box(0);
if (lean_is_scalar(x_349)) {
 x_351 = lean_alloc_ctor(1, 2, 0);
} else {
 x_351 = x_349;
 lean_ctor_set_tag(x_351, 1);
}
lean_ctor_set(x_351, 0, x_348);
lean_ctor_set(x_351, 1, x_350);
if (lean_is_scalar(x_346)) {
 x_352 = lean_alloc_ctor(1, 2, 0);
} else {
 x_352 = x_346;
 lean_ctor_set_tag(x_352, 1);
}
lean_ctor_set(x_352, 0, x_347);
lean_ctor_set(x_352, 1, x_351);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_345);
lean_ctor_set(x_353, 1, x_352);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_344);
lean_ctor_set(x_354, 1, x_353);
x_355 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_354);
x_356 = lean_ctor_get(x_340, 1);
lean_inc(x_356);
lean_dec(x_340);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; 
x_357 = l_List_appendTR___rarg(x_355, x_350);
x_321 = x_357;
goto block_334;
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; uint8_t x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_358 = lean_ctor_get(x_356, 0);
lean_inc(x_358);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 x_359 = x_356;
} else {
 lean_dec_ref(x_356);
 x_359 = lean_box(0);
}
x_360 = lean_ctor_get(x_358, 0);
lean_inc(x_360);
x_361 = 1;
x_362 = l_Lean_Name_toString(x_360, x_361);
if (lean_is_scalar(x_359)) {
 x_363 = lean_alloc_ctor(3, 1, 0);
} else {
 x_363 = x_359;
 lean_ctor_set_tag(x_363, 3);
}
lean_ctor_set(x_363, 0, x_362);
x_364 = lean_ctor_get(x_358, 1);
lean_inc(x_364);
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
lean_dec(x_364);
x_367 = lean_ctor_get(x_365, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_365, 1);
lean_inc(x_368);
if (lean_is_exclusive(x_365)) {
 lean_ctor_release(x_365, 0);
 lean_ctor_release(x_365, 1);
 x_369 = x_365;
} else {
 lean_dec_ref(x_365);
 x_369 = lean_box(0);
}
x_370 = lean_ctor_get(x_366, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_366, 1);
lean_inc(x_371);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 lean_ctor_release(x_366, 1);
 x_372 = x_366;
} else {
 lean_dec_ref(x_366);
 x_372 = lean_box(0);
}
if (lean_is_scalar(x_372)) {
 x_373 = lean_alloc_ctor(1, 2, 0);
} else {
 x_373 = x_372;
 lean_ctor_set_tag(x_373, 1);
}
lean_ctor_set(x_373, 0, x_371);
lean_ctor_set(x_373, 1, x_350);
if (lean_is_scalar(x_369)) {
 x_374 = lean_alloc_ctor(1, 2, 0);
} else {
 x_374 = x_369;
 lean_ctor_set_tag(x_374, 1);
}
lean_ctor_set(x_374, 0, x_370);
lean_ctor_set(x_374, 1, x_373);
x_375 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_375, 0, x_368);
lean_ctor_set(x_375, 1, x_374);
x_376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_376, 0, x_367);
lean_ctor_set(x_376, 1, x_375);
x_377 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_376);
x_378 = lean_ctor_get(x_358, 2);
lean_inc(x_378);
lean_dec(x_358);
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_378, 1);
lean_inc(x_380);
lean_dec(x_378);
x_381 = lean_ctor_get(x_379, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_379, 1);
lean_inc(x_382);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 x_383 = x_379;
} else {
 lean_dec_ref(x_379);
 x_383 = lean_box(0);
}
x_384 = lean_ctor_get(x_380, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_380, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_380)) {
 lean_ctor_release(x_380, 0);
 lean_ctor_release(x_380, 1);
 x_386 = x_380;
} else {
 lean_dec_ref(x_380);
 x_386 = lean_box(0);
}
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(1, 2, 0);
} else {
 x_387 = x_386;
 lean_ctor_set_tag(x_387, 1);
}
lean_ctor_set(x_387, 0, x_385);
lean_ctor_set(x_387, 1, x_350);
if (lean_is_scalar(x_383)) {
 x_388 = lean_alloc_ctor(1, 2, 0);
} else {
 x_388 = x_383;
 lean_ctor_set_tag(x_388, 1);
}
lean_ctor_set(x_388, 0, x_384);
lean_ctor_set(x_388, 1, x_387);
x_389 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_389, 0, x_382);
lean_ctor_set(x_389, 1, x_388);
x_390 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_390, 0, x_381);
lean_ctor_set(x_390, 1, x_389);
x_391 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_390);
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_363);
lean_ctor_set(x_392, 1, x_350);
x_393 = l_List_appendTR___rarg(x_392, x_377);
x_394 = l_List_appendTR___rarg(x_393, x_391);
x_395 = l_List_appendTR___rarg(x_355, x_394);
x_321 = x_395;
goto block_334;
}
}
block_334:
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; size_t x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_322 = l_List_redLength___rarg(x_321);
x_323 = lean_mk_empty_array_with_capacity(x_322);
lean_dec(x_322);
x_324 = l_List_toArrayAux___rarg(x_321, x_323);
x_325 = lean_array_size(x_324);
x_326 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_325, x_314, x_324);
x_327 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_327, 0, x_326);
x_328 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_327);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_2);
x_331 = l_Lean_Json_mkObj(x_330);
x_332 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_332, 0, x_310);
lean_ctor_set(x_332, 1, x_331);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_332);
lean_ctor_set(x_333, 1, x_7);
return x_333;
}
}
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; size_t x_406; size_t x_407; lean_object* x_408; size_t x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_396 = lean_ctor_get(x_2, 0);
x_397 = lean_ctor_get(x_2, 1);
lean_inc(x_397);
lean_inc(x_396);
lean_dec(x_2);
lean_inc(x_1);
x_398 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__3(x_1, x_397);
x_399 = lean_ctor_get(x_396, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_396, 1);
lean_inc(x_400);
if (lean_is_exclusive(x_396)) {
 lean_ctor_release(x_396, 0);
 lean_ctor_release(x_396, 1);
 x_401 = x_396;
} else {
 lean_dec_ref(x_396);
 x_401 = lean_box(0);
}
x_402 = l_Lean_Lsp_RefIdent_toJson(x_399);
x_403 = l_Lean_Json_compress(x_402);
x_404 = lean_ctor_get(x_400, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_400, 1);
lean_inc(x_405);
lean_dec(x_400);
x_406 = lean_array_size(x_405);
x_407 = 0;
x_408 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_406, x_407, x_405);
x_409 = lean_array_size(x_408);
x_410 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_407, x_409, x_407, x_408);
x_411 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_411, 0, x_410);
x_412 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
if (lean_is_scalar(x_401)) {
 x_413 = lean_alloc_ctor(0, 2, 0);
} else {
 x_413 = x_401;
}
lean_ctor_set(x_413, 0, x_412);
lean_ctor_set(x_413, 1, x_411);
x_414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_414, 0, x_413);
lean_ctor_set(x_414, 1, x_1);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_429 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_430 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_430, 0, x_429);
lean_ctor_set(x_430, 1, x_414);
x_431 = l_Lean_Json_mkObj(x_430);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_403);
lean_ctor_set(x_432, 1, x_431);
x_433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_398);
return x_433;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_434 = lean_ctor_get(x_404, 0);
lean_inc(x_434);
lean_dec(x_404);
x_435 = lean_ctor_get(x_434, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_435, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 1);
lean_inc(x_437);
lean_dec(x_435);
x_438 = lean_ctor_get(x_436, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_436, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_436)) {
 lean_ctor_release(x_436, 0);
 lean_ctor_release(x_436, 1);
 x_440 = x_436;
} else {
 lean_dec_ref(x_436);
 x_440 = lean_box(0);
}
x_441 = lean_ctor_get(x_437, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_437, 1);
lean_inc(x_442);
if (lean_is_exclusive(x_437)) {
 lean_ctor_release(x_437, 0);
 lean_ctor_release(x_437, 1);
 x_443 = x_437;
} else {
 lean_dec_ref(x_437);
 x_443 = lean_box(0);
}
x_444 = lean_box(0);
if (lean_is_scalar(x_443)) {
 x_445 = lean_alloc_ctor(1, 2, 0);
} else {
 x_445 = x_443;
 lean_ctor_set_tag(x_445, 1);
}
lean_ctor_set(x_445, 0, x_442);
lean_ctor_set(x_445, 1, x_444);
if (lean_is_scalar(x_440)) {
 x_446 = lean_alloc_ctor(1, 2, 0);
} else {
 x_446 = x_440;
 lean_ctor_set_tag(x_446, 1);
}
lean_ctor_set(x_446, 0, x_441);
lean_ctor_set(x_446, 1, x_445);
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_439);
lean_ctor_set(x_447, 1, x_446);
x_448 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_448, 0, x_438);
lean_ctor_set(x_448, 1, x_447);
x_449 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_448);
x_450 = lean_ctor_get(x_434, 1);
lean_inc(x_450);
lean_dec(x_434);
if (lean_obj_tag(x_450) == 0)
{
lean_object* x_451; 
x_451 = l_List_appendTR___rarg(x_449, x_444);
x_415 = x_451;
goto block_428;
}
else
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; 
x_452 = lean_ctor_get(x_450, 0);
lean_inc(x_452);
if (lean_is_exclusive(x_450)) {
 lean_ctor_release(x_450, 0);
 x_453 = x_450;
} else {
 lean_dec_ref(x_450);
 x_453 = lean_box(0);
}
x_454 = lean_ctor_get(x_452, 0);
lean_inc(x_454);
x_455 = 1;
x_456 = l_Lean_Name_toString(x_454, x_455);
if (lean_is_scalar(x_453)) {
 x_457 = lean_alloc_ctor(3, 1, 0);
} else {
 x_457 = x_453;
 lean_ctor_set_tag(x_457, 3);
}
lean_ctor_set(x_457, 0, x_456);
x_458 = lean_ctor_get(x_452, 1);
lean_inc(x_458);
x_459 = lean_ctor_get(x_458, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_458, 1);
lean_inc(x_460);
lean_dec(x_458);
x_461 = lean_ctor_get(x_459, 0);
lean_inc(x_461);
x_462 = lean_ctor_get(x_459, 1);
lean_inc(x_462);
if (lean_is_exclusive(x_459)) {
 lean_ctor_release(x_459, 0);
 lean_ctor_release(x_459, 1);
 x_463 = x_459;
} else {
 lean_dec_ref(x_459);
 x_463 = lean_box(0);
}
x_464 = lean_ctor_get(x_460, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_460, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_460)) {
 lean_ctor_release(x_460, 0);
 lean_ctor_release(x_460, 1);
 x_466 = x_460;
} else {
 lean_dec_ref(x_460);
 x_466 = lean_box(0);
}
if (lean_is_scalar(x_466)) {
 x_467 = lean_alloc_ctor(1, 2, 0);
} else {
 x_467 = x_466;
 lean_ctor_set_tag(x_467, 1);
}
lean_ctor_set(x_467, 0, x_465);
lean_ctor_set(x_467, 1, x_444);
if (lean_is_scalar(x_463)) {
 x_468 = lean_alloc_ctor(1, 2, 0);
} else {
 x_468 = x_463;
 lean_ctor_set_tag(x_468, 1);
}
lean_ctor_set(x_468, 0, x_464);
lean_ctor_set(x_468, 1, x_467);
x_469 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_469, 0, x_462);
lean_ctor_set(x_469, 1, x_468);
x_470 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_470, 0, x_461);
lean_ctor_set(x_470, 1, x_469);
x_471 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_470);
x_472 = lean_ctor_get(x_452, 2);
lean_inc(x_472);
lean_dec(x_452);
x_473 = lean_ctor_get(x_472, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_472, 1);
lean_inc(x_474);
lean_dec(x_472);
x_475 = lean_ctor_get(x_473, 0);
lean_inc(x_475);
x_476 = lean_ctor_get(x_473, 1);
lean_inc(x_476);
if (lean_is_exclusive(x_473)) {
 lean_ctor_release(x_473, 0);
 lean_ctor_release(x_473, 1);
 x_477 = x_473;
} else {
 lean_dec_ref(x_473);
 x_477 = lean_box(0);
}
x_478 = lean_ctor_get(x_474, 0);
lean_inc(x_478);
x_479 = lean_ctor_get(x_474, 1);
lean_inc(x_479);
if (lean_is_exclusive(x_474)) {
 lean_ctor_release(x_474, 0);
 lean_ctor_release(x_474, 1);
 x_480 = x_474;
} else {
 lean_dec_ref(x_474);
 x_480 = lean_box(0);
}
if (lean_is_scalar(x_480)) {
 x_481 = lean_alloc_ctor(1, 2, 0);
} else {
 x_481 = x_480;
 lean_ctor_set_tag(x_481, 1);
}
lean_ctor_set(x_481, 0, x_479);
lean_ctor_set(x_481, 1, x_444);
if (lean_is_scalar(x_477)) {
 x_482 = lean_alloc_ctor(1, 2, 0);
} else {
 x_482 = x_477;
 lean_ctor_set_tag(x_482, 1);
}
lean_ctor_set(x_482, 0, x_478);
lean_ctor_set(x_482, 1, x_481);
x_483 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_483, 0, x_476);
lean_ctor_set(x_483, 1, x_482);
x_484 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_484, 0, x_475);
lean_ctor_set(x_484, 1, x_483);
x_485 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_484);
x_486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_486, 0, x_457);
lean_ctor_set(x_486, 1, x_444);
x_487 = l_List_appendTR___rarg(x_486, x_471);
x_488 = l_List_appendTR___rarg(x_487, x_485);
x_489 = l_List_appendTR___rarg(x_449, x_488);
x_415 = x_489;
goto block_428;
}
}
block_428:
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; size_t x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
x_416 = l_List_redLength___rarg(x_415);
x_417 = lean_mk_empty_array_with_capacity(x_416);
lean_dec(x_416);
x_418 = l_List_toArrayAux___rarg(x_415, x_417);
x_419 = lean_array_size(x_418);
x_420 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_419, x_407, x_418);
x_421 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_421, 0, x_420);
x_422 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_423 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_421);
x_424 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_424, 0, x_423);
lean_ctor_set(x_424, 1, x_414);
x_425 = l_Lean_Json_mkObj(x_424);
x_426 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_426, 0, x_403);
lean_ctor_set(x_426, 1, x_425);
x_427 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_427, 0, x_426);
lean_ctor_set(x_427, 1, x_398);
return x_427;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__4(x_1, x_6);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = l_Lean_Lsp_RefIdent_toJson(x_9);
x_12 = l_Lean_Json_compress(x_11);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_array_size(x_14);
x_16 = 0;
x_17 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_15, x_16, x_14);
x_18 = lean_array_size(x_17);
x_19 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_16, x_18, x_16, x_17);
x_20 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
lean_ctor_set(x_5, 1, x_20);
lean_ctor_set(x_5, 0, x_21);
lean_ctor_set(x_2, 1, x_1);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_2);
x_38 = l_Lean_Json_mkObj(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_12);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_7);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_13, 0);
lean_inc(x_41);
lean_dec(x_13);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_43, 0);
x_48 = lean_ctor_get(x_43, 1);
x_49 = lean_ctor_get(x_44, 0);
x_50 = lean_ctor_get(x_44, 1);
x_51 = lean_box(0);
lean_ctor_set_tag(x_44, 1);
lean_ctor_set(x_44, 1, x_51);
lean_ctor_set(x_44, 0, x_50);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 1, x_44);
lean_ctor_set(x_43, 0, x_49);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_48);
lean_ctor_set(x_52, 1, x_43);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_53);
x_55 = lean_ctor_get(x_41, 1);
lean_inc(x_55);
lean_dec(x_41);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; 
x_56 = l_List_appendTR___rarg(x_54, x_51);
x_22 = x_56;
goto block_35;
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_55);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_58 = lean_ctor_get(x_55, 0);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = 1;
x_61 = l_Lean_Name_toString(x_59, x_60);
lean_ctor_set_tag(x_55, 3);
lean_ctor_set(x_55, 0, x_61);
x_62 = lean_ctor_get(x_58, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = !lean_is_exclusive(x_63);
if (x_65 == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_67 = lean_ctor_get(x_63, 0);
x_68 = lean_ctor_get(x_63, 1);
x_69 = lean_ctor_get(x_64, 0);
x_70 = lean_ctor_get(x_64, 1);
lean_ctor_set_tag(x_64, 1);
lean_ctor_set(x_64, 1, x_51);
lean_ctor_set(x_64, 0, x_70);
lean_ctor_set_tag(x_63, 1);
lean_ctor_set(x_63, 1, x_64);
lean_ctor_set(x_63, 0, x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_63);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_67);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_72);
x_74 = lean_ctor_get(x_58, 2);
lean_inc(x_74);
lean_dec(x_58);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_79 = lean_ctor_get(x_75, 0);
x_80 = lean_ctor_get(x_75, 1);
x_81 = lean_ctor_get(x_76, 0);
x_82 = lean_ctor_get(x_76, 1);
lean_ctor_set_tag(x_76, 1);
lean_ctor_set(x_76, 1, x_51);
lean_ctor_set(x_76, 0, x_82);
lean_ctor_set_tag(x_75, 1);
lean_ctor_set(x_75, 1, x_76);
lean_ctor_set(x_75, 0, x_81);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_75);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_79);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_84);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_55);
lean_ctor_set(x_86, 1, x_51);
x_87 = l_List_appendTR___rarg(x_86, x_73);
x_88 = l_List_appendTR___rarg(x_87, x_85);
x_89 = l_List_appendTR___rarg(x_54, x_88);
x_22 = x_89;
goto block_35;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_90 = lean_ctor_get(x_75, 0);
x_91 = lean_ctor_get(x_75, 1);
x_92 = lean_ctor_get(x_76, 0);
x_93 = lean_ctor_get(x_76, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_76);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_51);
lean_ctor_set_tag(x_75, 1);
lean_ctor_set(x_75, 1, x_94);
lean_ctor_set(x_75, 0, x_92);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_91);
lean_ctor_set(x_95, 1, x_75);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_90);
lean_ctor_set(x_96, 1, x_95);
x_97 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_96);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_55);
lean_ctor_set(x_98, 1, x_51);
x_99 = l_List_appendTR___rarg(x_98, x_73);
x_100 = l_List_appendTR___rarg(x_99, x_97);
x_101 = l_List_appendTR___rarg(x_54, x_100);
x_22 = x_101;
goto block_35;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_102 = lean_ctor_get(x_75, 0);
x_103 = lean_ctor_get(x_75, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_75);
x_104 = lean_ctor_get(x_76, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_76, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_106 = x_76;
} else {
 lean_dec_ref(x_76);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_106;
 lean_ctor_set_tag(x_107, 1);
}
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_51);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_104);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_103);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_102);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_110);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_55);
lean_ctor_set(x_112, 1, x_51);
x_113 = l_List_appendTR___rarg(x_112, x_73);
x_114 = l_List_appendTR___rarg(x_113, x_111);
x_115 = l_List_appendTR___rarg(x_54, x_114);
x_22 = x_115;
goto block_35;
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_116 = lean_ctor_get(x_63, 0);
x_117 = lean_ctor_get(x_63, 1);
x_118 = lean_ctor_get(x_64, 0);
x_119 = lean_ctor_get(x_64, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_64);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_51);
lean_ctor_set_tag(x_63, 1);
lean_ctor_set(x_63, 1, x_120);
lean_ctor_set(x_63, 0, x_118);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_117);
lean_ctor_set(x_121, 1, x_63);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_116);
lean_ctor_set(x_122, 1, x_121);
x_123 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_122);
x_124 = lean_ctor_get(x_58, 2);
lean_inc(x_124);
lean_dec(x_58);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_129 = x_125;
} else {
 lean_dec_ref(x_125);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_126, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_126, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_132 = x_126;
} else {
 lean_dec_ref(x_126);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
 lean_ctor_set_tag(x_133, 1);
}
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_51);
if (lean_is_scalar(x_129)) {
 x_134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_134 = x_129;
 lean_ctor_set_tag(x_134, 1);
}
lean_ctor_set(x_134, 0, x_130);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_128);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_127);
lean_ctor_set(x_136, 1, x_135);
x_137 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_136);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_55);
lean_ctor_set(x_138, 1, x_51);
x_139 = l_List_appendTR___rarg(x_138, x_123);
x_140 = l_List_appendTR___rarg(x_139, x_137);
x_141 = l_List_appendTR___rarg(x_54, x_140);
x_22 = x_141;
goto block_35;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_142 = lean_ctor_get(x_63, 0);
x_143 = lean_ctor_get(x_63, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_63);
x_144 = lean_ctor_get(x_64, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_64, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_146 = x_64;
} else {
 lean_dec_ref(x_64);
 x_146 = lean_box(0);
}
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_147 = x_146;
 lean_ctor_set_tag(x_147, 1);
}
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_51);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_144);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_143);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_142);
lean_ctor_set(x_150, 1, x_149);
x_151 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_150);
x_152 = lean_ctor_get(x_58, 2);
lean_inc(x_152);
lean_dec(x_58);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = lean_ctor_get(x_153, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_153, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_157 = x_153;
} else {
 lean_dec_ref(x_153);
 x_157 = lean_box(0);
}
x_158 = lean_ctor_get(x_154, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_154, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 x_160 = x_154;
} else {
 lean_dec_ref(x_154);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_160;
 lean_ctor_set_tag(x_161, 1);
}
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_51);
if (lean_is_scalar(x_157)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_157;
 lean_ctor_set_tag(x_162, 1);
}
lean_ctor_set(x_162, 0, x_158);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_156);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_155);
lean_ctor_set(x_164, 1, x_163);
x_165 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_164);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_55);
lean_ctor_set(x_166, 1, x_51);
x_167 = l_List_appendTR___rarg(x_166, x_151);
x_168 = l_List_appendTR___rarg(x_167, x_165);
x_169 = l_List_appendTR___rarg(x_54, x_168);
x_22 = x_169;
goto block_35;
}
}
else
{
lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_170 = lean_ctor_get(x_55, 0);
lean_inc(x_170);
lean_dec(x_55);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = 1;
x_173 = l_Lean_Name_toString(x_171, x_172);
x_174 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_ctor_get(x_176, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_176, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_180 = x_176;
} else {
 lean_dec_ref(x_176);
 x_180 = lean_box(0);
}
x_181 = lean_ctor_get(x_177, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_177, 1);
lean_inc(x_182);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_183 = x_177;
} else {
 lean_dec_ref(x_177);
 x_183 = lean_box(0);
}
if (lean_is_scalar(x_183)) {
 x_184 = lean_alloc_ctor(1, 2, 0);
} else {
 x_184 = x_183;
 lean_ctor_set_tag(x_184, 1);
}
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_51);
if (lean_is_scalar(x_180)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_180;
 lean_ctor_set_tag(x_185, 1);
}
lean_ctor_set(x_185, 0, x_181);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_179);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_178);
lean_ctor_set(x_187, 1, x_186);
x_188 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_187);
x_189 = lean_ctor_get(x_170, 2);
lean_inc(x_189);
lean_dec(x_170);
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_190, 1);
lean_inc(x_193);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_194 = x_190;
} else {
 lean_dec_ref(x_190);
 x_194 = lean_box(0);
}
x_195 = lean_ctor_get(x_191, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_191, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 lean_ctor_release(x_191, 1);
 x_197 = x_191;
} else {
 lean_dec_ref(x_191);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_198 = x_197;
 lean_ctor_set_tag(x_198, 1);
}
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set(x_198, 1, x_51);
if (lean_is_scalar(x_194)) {
 x_199 = lean_alloc_ctor(1, 2, 0);
} else {
 x_199 = x_194;
 lean_ctor_set_tag(x_199, 1);
}
lean_ctor_set(x_199, 0, x_195);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_193);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_192);
lean_ctor_set(x_201, 1, x_200);
x_202 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_201);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_174);
lean_ctor_set(x_203, 1, x_51);
x_204 = l_List_appendTR___rarg(x_203, x_188);
x_205 = l_List_appendTR___rarg(x_204, x_202);
x_206 = l_List_appendTR___rarg(x_54, x_205);
x_22 = x_206;
goto block_35;
}
}
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_207 = lean_ctor_get(x_43, 0);
x_208 = lean_ctor_get(x_43, 1);
x_209 = lean_ctor_get(x_44, 0);
x_210 = lean_ctor_get(x_44, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_44);
x_211 = lean_box(0);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 1, x_212);
lean_ctor_set(x_43, 0, x_209);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_208);
lean_ctor_set(x_213, 1, x_43);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_207);
lean_ctor_set(x_214, 1, x_213);
x_215 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_214);
x_216 = lean_ctor_get(x_41, 1);
lean_inc(x_216);
lean_dec(x_41);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; 
x_217 = l_List_appendTR___rarg(x_215, x_211);
x_22 = x_217;
goto block_35;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_218 = lean_ctor_get(x_216, 0);
lean_inc(x_218);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 x_219 = x_216;
} else {
 lean_dec_ref(x_216);
 x_219 = lean_box(0);
}
x_220 = lean_ctor_get(x_218, 0);
lean_inc(x_220);
x_221 = 1;
x_222 = l_Lean_Name_toString(x_220, x_221);
if (lean_is_scalar(x_219)) {
 x_223 = lean_alloc_ctor(3, 1, 0);
} else {
 x_223 = x_219;
 lean_ctor_set_tag(x_223, 3);
}
lean_ctor_set(x_223, 0, x_222);
x_224 = lean_ctor_get(x_218, 1);
lean_inc(x_224);
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = lean_ctor_get(x_225, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_225, 1);
lean_inc(x_228);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_229 = x_225;
} else {
 lean_dec_ref(x_225);
 x_229 = lean_box(0);
}
x_230 = lean_ctor_get(x_226, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_226, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_226)) {
 lean_ctor_release(x_226, 0);
 lean_ctor_release(x_226, 1);
 x_232 = x_226;
} else {
 lean_dec_ref(x_226);
 x_232 = lean_box(0);
}
if (lean_is_scalar(x_232)) {
 x_233 = lean_alloc_ctor(1, 2, 0);
} else {
 x_233 = x_232;
 lean_ctor_set_tag(x_233, 1);
}
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_211);
if (lean_is_scalar(x_229)) {
 x_234 = lean_alloc_ctor(1, 2, 0);
} else {
 x_234 = x_229;
 lean_ctor_set_tag(x_234, 1);
}
lean_ctor_set(x_234, 0, x_230);
lean_ctor_set(x_234, 1, x_233);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_228);
lean_ctor_set(x_235, 1, x_234);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_227);
lean_ctor_set(x_236, 1, x_235);
x_237 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_236);
x_238 = lean_ctor_get(x_218, 2);
lean_inc(x_238);
lean_dec(x_218);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_239, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_239)) {
 lean_ctor_release(x_239, 0);
 lean_ctor_release(x_239, 1);
 x_243 = x_239;
} else {
 lean_dec_ref(x_239);
 x_243 = lean_box(0);
}
x_244 = lean_ctor_get(x_240, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_240, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_246 = x_240;
} else {
 lean_dec_ref(x_240);
 x_246 = lean_box(0);
}
if (lean_is_scalar(x_246)) {
 x_247 = lean_alloc_ctor(1, 2, 0);
} else {
 x_247 = x_246;
 lean_ctor_set_tag(x_247, 1);
}
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_211);
if (lean_is_scalar(x_243)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_243;
 lean_ctor_set_tag(x_248, 1);
}
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_242);
lean_ctor_set(x_249, 1, x_248);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_241);
lean_ctor_set(x_250, 1, x_249);
x_251 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_250);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_223);
lean_ctor_set(x_252, 1, x_211);
x_253 = l_List_appendTR___rarg(x_252, x_237);
x_254 = l_List_appendTR___rarg(x_253, x_251);
x_255 = l_List_appendTR___rarg(x_215, x_254);
x_22 = x_255;
goto block_35;
}
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_256 = lean_ctor_get(x_43, 0);
x_257 = lean_ctor_get(x_43, 1);
lean_inc(x_257);
lean_inc(x_256);
lean_dec(x_43);
x_258 = lean_ctor_get(x_44, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_44, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_260 = x_44;
} else {
 lean_dec_ref(x_44);
 x_260 = lean_box(0);
}
x_261 = lean_box(0);
if (lean_is_scalar(x_260)) {
 x_262 = lean_alloc_ctor(1, 2, 0);
} else {
 x_262 = x_260;
 lean_ctor_set_tag(x_262, 1);
}
lean_ctor_set(x_262, 0, x_259);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_258);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_257);
lean_ctor_set(x_264, 1, x_263);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_256);
lean_ctor_set(x_265, 1, x_264);
x_266 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_265);
x_267 = lean_ctor_get(x_41, 1);
lean_inc(x_267);
lean_dec(x_41);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; 
x_268 = l_List_appendTR___rarg(x_266, x_261);
x_22 = x_268;
goto block_35;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; uint8_t x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_269 = lean_ctor_get(x_267, 0);
lean_inc(x_269);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 x_270 = x_267;
} else {
 lean_dec_ref(x_267);
 x_270 = lean_box(0);
}
x_271 = lean_ctor_get(x_269, 0);
lean_inc(x_271);
x_272 = 1;
x_273 = l_Lean_Name_toString(x_271, x_272);
if (lean_is_scalar(x_270)) {
 x_274 = lean_alloc_ctor(3, 1, 0);
} else {
 x_274 = x_270;
 lean_ctor_set_tag(x_274, 3);
}
lean_ctor_set(x_274, 0, x_273);
x_275 = lean_ctor_get(x_269, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
lean_dec(x_275);
x_278 = lean_ctor_get(x_276, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_276, 1);
lean_inc(x_279);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_280 = x_276;
} else {
 lean_dec_ref(x_276);
 x_280 = lean_box(0);
}
x_281 = lean_ctor_get(x_277, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_277, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_277)) {
 lean_ctor_release(x_277, 0);
 lean_ctor_release(x_277, 1);
 x_283 = x_277;
} else {
 lean_dec_ref(x_277);
 x_283 = lean_box(0);
}
if (lean_is_scalar(x_283)) {
 x_284 = lean_alloc_ctor(1, 2, 0);
} else {
 x_284 = x_283;
 lean_ctor_set_tag(x_284, 1);
}
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_261);
if (lean_is_scalar(x_280)) {
 x_285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_285 = x_280;
 lean_ctor_set_tag(x_285, 1);
}
lean_ctor_set(x_285, 0, x_281);
lean_ctor_set(x_285, 1, x_284);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_279);
lean_ctor_set(x_286, 1, x_285);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_278);
lean_ctor_set(x_287, 1, x_286);
x_288 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_287);
x_289 = lean_ctor_get(x_269, 2);
lean_inc(x_289);
lean_dec(x_269);
x_290 = lean_ctor_get(x_289, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_289, 1);
lean_inc(x_291);
lean_dec(x_289);
x_292 = lean_ctor_get(x_290, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_290, 1);
lean_inc(x_293);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_294 = x_290;
} else {
 lean_dec_ref(x_290);
 x_294 = lean_box(0);
}
x_295 = lean_ctor_get(x_291, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_291, 1);
lean_inc(x_296);
if (lean_is_exclusive(x_291)) {
 lean_ctor_release(x_291, 0);
 lean_ctor_release(x_291, 1);
 x_297 = x_291;
} else {
 lean_dec_ref(x_291);
 x_297 = lean_box(0);
}
if (lean_is_scalar(x_297)) {
 x_298 = lean_alloc_ctor(1, 2, 0);
} else {
 x_298 = x_297;
 lean_ctor_set_tag(x_298, 1);
}
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_261);
if (lean_is_scalar(x_294)) {
 x_299 = lean_alloc_ctor(1, 2, 0);
} else {
 x_299 = x_294;
 lean_ctor_set_tag(x_299, 1);
}
lean_ctor_set(x_299, 0, x_295);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_293);
lean_ctor_set(x_300, 1, x_299);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_292);
lean_ctor_set(x_301, 1, x_300);
x_302 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_301);
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_274);
lean_ctor_set(x_303, 1, x_261);
x_304 = l_List_appendTR___rarg(x_303, x_288);
x_305 = l_List_appendTR___rarg(x_304, x_302);
x_306 = l_List_appendTR___rarg(x_266, x_305);
x_22 = x_306;
goto block_35;
}
}
}
block_35:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = l_List_redLength___rarg(x_22);
x_24 = lean_mk_empty_array_with_capacity(x_23);
lean_dec(x_23);
x_25 = l_List_toArrayAux___rarg(x_22, x_24);
x_26 = lean_array_size(x_25);
x_27 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_26, x_16, x_25);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_2);
x_32 = l_Lean_Json_mkObj(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_7);
return x_34;
}
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; size_t x_313; size_t x_314; lean_object* x_315; size_t x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_307 = lean_ctor_get(x_5, 0);
x_308 = lean_ctor_get(x_5, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_5);
x_309 = l_Lean_Lsp_RefIdent_toJson(x_307);
x_310 = l_Lean_Json_compress(x_309);
x_311 = lean_ctor_get(x_308, 0);
lean_inc(x_311);
x_312 = lean_ctor_get(x_308, 1);
lean_inc(x_312);
lean_dec(x_308);
x_313 = lean_array_size(x_312);
x_314 = 0;
x_315 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_313, x_314, x_312);
x_316 = lean_array_size(x_315);
x_317 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_314, x_316, x_314, x_315);
x_318 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_318, 0, x_317);
x_319 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
x_320 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_318);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_320);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_335 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_2);
x_337 = l_Lean_Json_mkObj(x_336);
x_338 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_338, 0, x_310);
lean_ctor_set(x_338, 1, x_337);
x_339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_7);
return x_339;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_340 = lean_ctor_get(x_311, 0);
lean_inc(x_340);
lean_dec(x_311);
x_341 = lean_ctor_get(x_340, 0);
lean_inc(x_341);
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_ctor_get(x_342, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_342, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_346 = x_342;
} else {
 lean_dec_ref(x_342);
 x_346 = lean_box(0);
}
x_347 = lean_ctor_get(x_343, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_343, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_349 = x_343;
} else {
 lean_dec_ref(x_343);
 x_349 = lean_box(0);
}
x_350 = lean_box(0);
if (lean_is_scalar(x_349)) {
 x_351 = lean_alloc_ctor(1, 2, 0);
} else {
 x_351 = x_349;
 lean_ctor_set_tag(x_351, 1);
}
lean_ctor_set(x_351, 0, x_348);
lean_ctor_set(x_351, 1, x_350);
if (lean_is_scalar(x_346)) {
 x_352 = lean_alloc_ctor(1, 2, 0);
} else {
 x_352 = x_346;
 lean_ctor_set_tag(x_352, 1);
}
lean_ctor_set(x_352, 0, x_347);
lean_ctor_set(x_352, 1, x_351);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_345);
lean_ctor_set(x_353, 1, x_352);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_344);
lean_ctor_set(x_354, 1, x_353);
x_355 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_354);
x_356 = lean_ctor_get(x_340, 1);
lean_inc(x_356);
lean_dec(x_340);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; 
x_357 = l_List_appendTR___rarg(x_355, x_350);
x_321 = x_357;
goto block_334;
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; uint8_t x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_358 = lean_ctor_get(x_356, 0);
lean_inc(x_358);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 x_359 = x_356;
} else {
 lean_dec_ref(x_356);
 x_359 = lean_box(0);
}
x_360 = lean_ctor_get(x_358, 0);
lean_inc(x_360);
x_361 = 1;
x_362 = l_Lean_Name_toString(x_360, x_361);
if (lean_is_scalar(x_359)) {
 x_363 = lean_alloc_ctor(3, 1, 0);
} else {
 x_363 = x_359;
 lean_ctor_set_tag(x_363, 3);
}
lean_ctor_set(x_363, 0, x_362);
x_364 = lean_ctor_get(x_358, 1);
lean_inc(x_364);
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
lean_dec(x_364);
x_367 = lean_ctor_get(x_365, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_365, 1);
lean_inc(x_368);
if (lean_is_exclusive(x_365)) {
 lean_ctor_release(x_365, 0);
 lean_ctor_release(x_365, 1);
 x_369 = x_365;
} else {
 lean_dec_ref(x_365);
 x_369 = lean_box(0);
}
x_370 = lean_ctor_get(x_366, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_366, 1);
lean_inc(x_371);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 lean_ctor_release(x_366, 1);
 x_372 = x_366;
} else {
 lean_dec_ref(x_366);
 x_372 = lean_box(0);
}
if (lean_is_scalar(x_372)) {
 x_373 = lean_alloc_ctor(1, 2, 0);
} else {
 x_373 = x_372;
 lean_ctor_set_tag(x_373, 1);
}
lean_ctor_set(x_373, 0, x_371);
lean_ctor_set(x_373, 1, x_350);
if (lean_is_scalar(x_369)) {
 x_374 = lean_alloc_ctor(1, 2, 0);
} else {
 x_374 = x_369;
 lean_ctor_set_tag(x_374, 1);
}
lean_ctor_set(x_374, 0, x_370);
lean_ctor_set(x_374, 1, x_373);
x_375 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_375, 0, x_368);
lean_ctor_set(x_375, 1, x_374);
x_376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_376, 0, x_367);
lean_ctor_set(x_376, 1, x_375);
x_377 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_376);
x_378 = lean_ctor_get(x_358, 2);
lean_inc(x_378);
lean_dec(x_358);
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_378, 1);
lean_inc(x_380);
lean_dec(x_378);
x_381 = lean_ctor_get(x_379, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_379, 1);
lean_inc(x_382);
if (lean_is_exclusive(x_379)) {
 lean_ctor_release(x_379, 0);
 lean_ctor_release(x_379, 1);
 x_383 = x_379;
} else {
 lean_dec_ref(x_379);
 x_383 = lean_box(0);
}
x_384 = lean_ctor_get(x_380, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_380, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_380)) {
 lean_ctor_release(x_380, 0);
 lean_ctor_release(x_380, 1);
 x_386 = x_380;
} else {
 lean_dec_ref(x_380);
 x_386 = lean_box(0);
}
if (lean_is_scalar(x_386)) {
 x_387 = lean_alloc_ctor(1, 2, 0);
} else {
 x_387 = x_386;
 lean_ctor_set_tag(x_387, 1);
}
lean_ctor_set(x_387, 0, x_385);
lean_ctor_set(x_387, 1, x_350);
if (lean_is_scalar(x_383)) {
 x_388 = lean_alloc_ctor(1, 2, 0);
} else {
 x_388 = x_383;
 lean_ctor_set_tag(x_388, 1);
}
lean_ctor_set(x_388, 0, x_384);
lean_ctor_set(x_388, 1, x_387);
x_389 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_389, 0, x_382);
lean_ctor_set(x_389, 1, x_388);
x_390 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_390, 0, x_381);
lean_ctor_set(x_390, 1, x_389);
x_391 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_390);
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_363);
lean_ctor_set(x_392, 1, x_350);
x_393 = l_List_appendTR___rarg(x_392, x_377);
x_394 = l_List_appendTR___rarg(x_393, x_391);
x_395 = l_List_appendTR___rarg(x_355, x_394);
x_321 = x_395;
goto block_334;
}
}
block_334:
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; size_t x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_322 = l_List_redLength___rarg(x_321);
x_323 = lean_mk_empty_array_with_capacity(x_322);
lean_dec(x_322);
x_324 = l_List_toArrayAux___rarg(x_321, x_323);
x_325 = lean_array_size(x_324);
x_326 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_325, x_314, x_324);
x_327 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_327, 0, x_326);
x_328 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_327);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_2);
x_331 = l_Lean_Json_mkObj(x_330);
x_332 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_332, 0, x_310);
lean_ctor_set(x_332, 1, x_331);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_332);
lean_ctor_set(x_333, 1, x_7);
return x_333;
}
}
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; size_t x_406; size_t x_407; lean_object* x_408; size_t x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_396 = lean_ctor_get(x_2, 0);
x_397 = lean_ctor_get(x_2, 1);
lean_inc(x_397);
lean_inc(x_396);
lean_dec(x_2);
lean_inc(x_1);
x_398 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__4(x_1, x_397);
x_399 = lean_ctor_get(x_396, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_396, 1);
lean_inc(x_400);
if (lean_is_exclusive(x_396)) {
 lean_ctor_release(x_396, 0);
 lean_ctor_release(x_396, 1);
 x_401 = x_396;
} else {
 lean_dec_ref(x_396);
 x_401 = lean_box(0);
}
x_402 = l_Lean_Lsp_RefIdent_toJson(x_399);
x_403 = l_Lean_Json_compress(x_402);
x_404 = lean_ctor_get(x_400, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_400, 1);
lean_inc(x_405);
lean_dec(x_400);
x_406 = lean_array_size(x_405);
x_407 = 0;
x_408 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonRefInfo___spec__2(x_406, x_407, x_405);
x_409 = lean_array_size(x_408);
x_410 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_407, x_409, x_407, x_408);
x_411 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_411, 0, x_410);
x_412 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1;
if (lean_is_scalar(x_401)) {
 x_413 = lean_alloc_ctor(0, 2, 0);
} else {
 x_413 = x_401;
}
lean_ctor_set(x_413, 0, x_412);
lean_ctor_set(x_413, 1, x_411);
x_414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_414, 0, x_413);
lean_ctor_set(x_414, 1, x_1);
if (lean_obj_tag(x_404) == 0)
{
lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_429 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3;
x_430 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_430, 0, x_429);
lean_ctor_set(x_430, 1, x_414);
x_431 = l_Lean_Json_mkObj(x_430);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_403);
lean_ctor_set(x_432, 1, x_431);
x_433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_433, 0, x_432);
lean_ctor_set(x_433, 1, x_398);
return x_433;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_434 = lean_ctor_get(x_404, 0);
lean_inc(x_434);
lean_dec(x_404);
x_435 = lean_ctor_get(x_434, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_435, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 1);
lean_inc(x_437);
lean_dec(x_435);
x_438 = lean_ctor_get(x_436, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_436, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_436)) {
 lean_ctor_release(x_436, 0);
 lean_ctor_release(x_436, 1);
 x_440 = x_436;
} else {
 lean_dec_ref(x_436);
 x_440 = lean_box(0);
}
x_441 = lean_ctor_get(x_437, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_437, 1);
lean_inc(x_442);
if (lean_is_exclusive(x_437)) {
 lean_ctor_release(x_437, 0);
 lean_ctor_release(x_437, 1);
 x_443 = x_437;
} else {
 lean_dec_ref(x_437);
 x_443 = lean_box(0);
}
x_444 = lean_box(0);
if (lean_is_scalar(x_443)) {
 x_445 = lean_alloc_ctor(1, 2, 0);
} else {
 x_445 = x_443;
 lean_ctor_set_tag(x_445, 1);
}
lean_ctor_set(x_445, 0, x_442);
lean_ctor_set(x_445, 1, x_444);
if (lean_is_scalar(x_440)) {
 x_446 = lean_alloc_ctor(1, 2, 0);
} else {
 x_446 = x_440;
 lean_ctor_set_tag(x_446, 1);
}
lean_ctor_set(x_446, 0, x_441);
lean_ctor_set(x_446, 1, x_445);
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_439);
lean_ctor_set(x_447, 1, x_446);
x_448 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_448, 0, x_438);
lean_ctor_set(x_448, 1, x_447);
x_449 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_448);
x_450 = lean_ctor_get(x_434, 1);
lean_inc(x_450);
lean_dec(x_434);
if (lean_obj_tag(x_450) == 0)
{
lean_object* x_451; 
x_451 = l_List_appendTR___rarg(x_449, x_444);
x_415 = x_451;
goto block_428;
}
else
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; 
x_452 = lean_ctor_get(x_450, 0);
lean_inc(x_452);
if (lean_is_exclusive(x_450)) {
 lean_ctor_release(x_450, 0);
 x_453 = x_450;
} else {
 lean_dec_ref(x_450);
 x_453 = lean_box(0);
}
x_454 = lean_ctor_get(x_452, 0);
lean_inc(x_454);
x_455 = 1;
x_456 = l_Lean_Name_toString(x_454, x_455);
if (lean_is_scalar(x_453)) {
 x_457 = lean_alloc_ctor(3, 1, 0);
} else {
 x_457 = x_453;
 lean_ctor_set_tag(x_457, 3);
}
lean_ctor_set(x_457, 0, x_456);
x_458 = lean_ctor_get(x_452, 1);
lean_inc(x_458);
x_459 = lean_ctor_get(x_458, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_458, 1);
lean_inc(x_460);
lean_dec(x_458);
x_461 = lean_ctor_get(x_459, 0);
lean_inc(x_461);
x_462 = lean_ctor_get(x_459, 1);
lean_inc(x_462);
if (lean_is_exclusive(x_459)) {
 lean_ctor_release(x_459, 0);
 lean_ctor_release(x_459, 1);
 x_463 = x_459;
} else {
 lean_dec_ref(x_459);
 x_463 = lean_box(0);
}
x_464 = lean_ctor_get(x_460, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_460, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_460)) {
 lean_ctor_release(x_460, 0);
 lean_ctor_release(x_460, 1);
 x_466 = x_460;
} else {
 lean_dec_ref(x_460);
 x_466 = lean_box(0);
}
if (lean_is_scalar(x_466)) {
 x_467 = lean_alloc_ctor(1, 2, 0);
} else {
 x_467 = x_466;
 lean_ctor_set_tag(x_467, 1);
}
lean_ctor_set(x_467, 0, x_465);
lean_ctor_set(x_467, 1, x_444);
if (lean_is_scalar(x_463)) {
 x_468 = lean_alloc_ctor(1, 2, 0);
} else {
 x_468 = x_463;
 lean_ctor_set_tag(x_468, 1);
}
lean_ctor_set(x_468, 0, x_464);
lean_ctor_set(x_468, 1, x_467);
x_469 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_469, 0, x_462);
lean_ctor_set(x_469, 1, x_468);
x_470 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_470, 0, x_461);
lean_ctor_set(x_470, 1, x_469);
x_471 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_470);
x_472 = lean_ctor_get(x_452, 2);
lean_inc(x_472);
lean_dec(x_452);
x_473 = lean_ctor_get(x_472, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_472, 1);
lean_inc(x_474);
lean_dec(x_472);
x_475 = lean_ctor_get(x_473, 0);
lean_inc(x_475);
x_476 = lean_ctor_get(x_473, 1);
lean_inc(x_476);
if (lean_is_exclusive(x_473)) {
 lean_ctor_release(x_473, 0);
 lean_ctor_release(x_473, 1);
 x_477 = x_473;
} else {
 lean_dec_ref(x_473);
 x_477 = lean_box(0);
}
x_478 = lean_ctor_get(x_474, 0);
lean_inc(x_478);
x_479 = lean_ctor_get(x_474, 1);
lean_inc(x_479);
if (lean_is_exclusive(x_474)) {
 lean_ctor_release(x_474, 0);
 lean_ctor_release(x_474, 1);
 x_480 = x_474;
} else {
 lean_dec_ref(x_474);
 x_480 = lean_box(0);
}
if (lean_is_scalar(x_480)) {
 x_481 = lean_alloc_ctor(1, 2, 0);
} else {
 x_481 = x_480;
 lean_ctor_set_tag(x_481, 1);
}
lean_ctor_set(x_481, 0, x_479);
lean_ctor_set(x_481, 1, x_444);
if (lean_is_scalar(x_477)) {
 x_482 = lean_alloc_ctor(1, 2, 0);
} else {
 x_482 = x_477;
 lean_ctor_set_tag(x_482, 1);
}
lean_ctor_set(x_482, 0, x_478);
lean_ctor_set(x_482, 1, x_481);
x_483 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_483, 0, x_476);
lean_ctor_set(x_483, 1, x_482);
x_484 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_484, 0, x_475);
lean_ctor_set(x_484, 1, x_483);
x_485 = l_List_map___at_Lean_Lsp_instToJsonRefInfo___spec__1(x_484);
x_486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_486, 0, x_457);
lean_ctor_set(x_486, 1, x_444);
x_487 = l_List_appendTR___rarg(x_486, x_471);
x_488 = l_List_appendTR___rarg(x_487, x_485);
x_489 = l_List_appendTR___rarg(x_449, x_488);
x_415 = x_489;
goto block_428;
}
}
block_428:
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; size_t x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
x_416 = l_List_redLength___rarg(x_415);
x_417 = lean_mk_empty_array_with_capacity(x_416);
lean_dec(x_416);
x_418 = l_List_toArrayAux___rarg(x_415, x_417);
x_419 = lean_array_size(x_418);
x_420 = l_Array_mapMUnsafe_map___at_Lean_Server_instRpcEncodableArray___spec__2(x_419, x_407, x_418);
x_421 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_421, 0, x_420);
x_422 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2;
x_423 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_421);
x_424 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_424, 0, x_423);
lean_ctor_set(x_424, 1, x_414);
x_425 = l_Lean_Json_mkObj(x_424);
x_426 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_426, 0, x_403);
lean_ctor_set(x_426, 1, x_425);
x_427 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_427, 0, x_426);
lean_ctor_set(x_427, 1, x_398);
return x_427;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_JsonNumber_fromNat(x_2);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = 1;
x_11 = l_Lean_Name_toString(x_9, x_10);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__14;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_18);
lean_dec(x_17);
x_21 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2(x_7, x_7);
x_22 = l_Lean_Json_mkObj(x_21);
x_23 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19;
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_7);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_7);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_15);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_8);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_List_join___rarg(x_28);
x_30 = l_Lean_Json_mkObj(x_29);
return x_30;
}
else
{
uint8_t x_31; 
x_31 = lean_nat_dec_le(x_18, x_18);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_18);
lean_dec(x_17);
x_32 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__3(x_7, x_7);
x_33 = l_Lean_Json_mkObj(x_32);
x_34 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19;
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_7);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_7);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_15);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_8);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_List_join___rarg(x_39);
x_41 = l_Lean_Json_mkObj(x_40);
return x_41;
}
else
{
size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_42 = 0;
x_43 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_44 = l_Array_foldlMUnsafe_fold___at_Lean_Lsp_instToJsonModuleRefs___spec__4(x_17, x_42, x_43, x_7);
lean_dec(x_17);
x_45 = l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__4(x_7, x_44);
x_46 = l_Lean_Json_mkObj(x_45);
x_47 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19;
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_7);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_7);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_15);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_8);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_List_join___rarg(x_52);
x_54 = l_Lean_Json_mkObj(x_53);
return x_54;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__1(x_5, x_6, x_7, x_4);
return x_8;
}
}
static lean_object* _init_l_Lean_Server_instToJsonIlean___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_instToJsonIlean() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_instToJsonIlean___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Ilean_load___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to load ilean at ", 24, 24);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_Ilean_load___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
lean_object* l_Lean_Server_Ilean_load(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_readFile(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = l_Lean_Json_parse(x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_free_object(x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_Server_Ilean_load___closed__1;
x_10 = lean_string_append(x_9, x_1);
x_11 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12;
x_12 = lean_string_append(x_10, x_11);
x_13 = lean_string_append(x_12, x_8);
lean_dec(x_8);
x_14 = l_Lean_Server_Ilean_load___closed__2;
x_15 = lean_string_append(x_13, x_14);
x_16 = l_IO_throwServerError___rarg(x_15, x_6);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_7, 0);
lean_inc(x_17);
lean_dec(x_7);
x_18 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331_(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_free_object(x_3);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_Server_Ilean_load___closed__1;
x_21 = lean_string_append(x_20, x_1);
x_22 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12;
x_23 = lean_string_append(x_21, x_22);
x_24 = lean_string_append(x_23, x_19);
lean_dec(x_19);
x_25 = l_Lean_Server_Ilean_load___closed__2;
x_26 = lean_string_append(x_24, x_25);
x_27 = l_IO_throwServerError___rarg(x_26, x_6);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_18, 0);
lean_inc(x_28);
lean_dec(x_18);
lean_ctor_set(x_3, 0, x_28);
return x_3;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_3, 0);
x_30 = lean_ctor_get(x_3, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_3);
x_31 = l_Lean_Json_parse(x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Server_Ilean_load___closed__1;
x_34 = lean_string_append(x_33, x_1);
x_35 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12;
x_36 = lean_string_append(x_34, x_35);
x_37 = lean_string_append(x_36, x_32);
lean_dec(x_32);
x_38 = l_Lean_Server_Ilean_load___closed__2;
x_39 = lean_string_append(x_37, x_38);
x_40 = l_IO_throwServerError___rarg(x_39, x_30);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_31, 0);
lean_inc(x_41);
lean_dec(x_31);
x_42 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331_(x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_Server_Ilean_load___closed__1;
x_45 = lean_string_append(x_44, x_1);
x_46 = l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12;
x_47 = lean_string_append(x_45, x_46);
x_48 = lean_string_append(x_47, x_43);
lean_dec(x_43);
x_49 = l_Lean_Server_Ilean_load___closed__2;
x_50 = lean_string_append(x_48, x_49);
x_51 = l_IO_throwServerError___rarg(x_50, x_30);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_42, 0);
lean_inc(x_52);
lean_dec(x_42);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_30);
return x_53;
}
}
}
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_3);
if (x_54 == 0)
{
return x_3;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_3, 0);
x_56 = lean_ctor_get(x_3, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_3);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Lean_Server_Ilean_load___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_Ilean_load(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Server_getModuleContainingDecl_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Environment_getModuleIdxFor_x3f(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Environment_allImportedModuleNames(x_1);
x_8 = l_Array_get_x3f___rarg(x_7, x_6);
lean_dec(x_6);
lean_dec(x_7);
return x_8;
}
}
}
lean_object* l_Lean_Server_getModuleContainingDecl_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_PersistentHashMap_contains___at_Lean_Environment_addExtraName___spec__2(x_4, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Lean_Server_getModuleContainingDecl_x3f___lambda__1(x_1, x_2, x_6);
lean_dec(x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Server_getModuleContainingDecl_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_getModuleContainingDecl_x3f___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Server_getModuleContainingDecl_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_getModuleContainingDecl_x3f(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Server_identOf(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
switch (lean_obj_tag(x_5)) {
case 1:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 4);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
lean_dec(x_4);
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
case 4:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_free_object(x_2);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_Server_getModuleContainingDecl_x3f(x_17, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_4);
x_19 = lean_box(0);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_15);
x_23 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
lean_dec(x_4);
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_18, 0, x_25);
return x_18;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_18, 0);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_15);
x_28 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
lean_dec(x_4);
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
return x_31;
}
}
}
default: 
{
lean_object* x_32; 
lean_dec(x_5);
lean_free_object(x_2);
lean_dec(x_4);
lean_dec(x_1);
x_32 = lean_box(0);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
lean_dec(x_2);
x_34 = lean_ctor_get(x_33, 3);
lean_inc(x_34);
switch (lean_obj_tag(x_34)) {
case 1:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_ctor_get(x_37, 4);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_35);
x_41 = lean_ctor_get_uint8(x_33, sizeof(void*)*4);
lean_dec(x_33);
x_42 = lean_box(x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
case 4:
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_34, 0);
lean_inc(x_45);
lean_dec(x_34);
x_46 = lean_ctor_get(x_1, 0);
lean_inc(x_46);
lean_dec(x_1);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
lean_dec(x_46);
x_48 = l_Lean_Server_getModuleContainingDecl_x3f(x_47, x_45);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
lean_dec(x_45);
lean_dec(x_33);
x_49 = lean_box(0);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 x_51 = x_48;
} else {
 lean_dec_ref(x_48);
 x_51 = lean_box(0);
}
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_45);
x_53 = lean_ctor_get_uint8(x_33, sizeof(void*)*4);
lean_dec(x_33);
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
if (lean_is_scalar(x_51)) {
 x_56 = lean_alloc_ctor(1, 1, 0);
} else {
 x_56 = x_51;
}
lean_ctor_set(x_56, 0, x_55);
return x_56;
}
}
default: 
{
lean_object* x_57; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_1);
x_57 = lean_box(0);
return x_57;
}
}
}
}
case 4:
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_2, 0);
lean_inc(x_58);
lean_dec(x_2);
x_59 = lean_ctor_get(x_1, 0);
lean_inc(x_59);
lean_dec(x_1);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_ctor_get(x_58, 2);
lean_inc(x_61);
lean_dec(x_58);
x_62 = l_Lean_Server_getModuleContainingDecl_x3f(x_60, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
lean_dec(x_61);
x_63 = lean_box(0);
return x_63;
}
else
{
uint8_t x_64; 
x_64 = !lean_is_exclusive(x_62);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_62, 0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_61);
x_67 = 0;
x_68 = lean_box(x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_62, 0, x_69);
return x_62;
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_70 = lean_ctor_get(x_62, 0);
lean_inc(x_70);
lean_dec(x_62);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_61);
x_72 = 0;
x_73 = lean_box(x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
return x_75;
}
}
}
case 5:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_76 = lean_ctor_get(x_2, 0);
lean_inc(x_76);
lean_dec(x_2);
x_77 = lean_ctor_get(x_1, 0);
lean_inc(x_77);
lean_dec(x_1);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_ctor_get(x_76, 0);
lean_inc(x_79);
lean_dec(x_76);
x_80 = l_Lean_Server_getModuleContainingDecl_x3f(x_78, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; 
lean_dec(x_79);
x_81 = lean_box(0);
return x_81;
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_80);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_ctor_get(x_80, 0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_79);
x_85 = 0;
x_86 = lean_box(x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
lean_ctor_set(x_80, 0, x_87);
return x_80;
}
else
{
lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_88 = lean_ctor_get(x_80, 0);
lean_inc(x_88);
lean_dec(x_80);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_79);
x_90 = 0;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
return x_93;
}
}
}
default: 
{
lean_object* x_94; 
lean_dec(x_2);
lean_dec(x_1);
x_94 = lean_box(0);
return x_94;
}
}
}
}
static lean_object* _init_l_panic___at_Lean_Server_findReferences___spec__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Id_instMonad;
x_2 = l_StateT_instMonad___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_panic___at_Lean_Server_findReferences___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_panic___at_Lean_Server_findReferences___spec__4___closed__1;
x_3 = l_instInhabitedOfMonad___rarg(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_findReferences___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_panic___at_Lean_Server_findReferences___spec__4___closed__2;
x_4 = lean_panic_fn(x_3, x_1);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_findReferences___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_List_reverse___rarg(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(x_1, x_2, x_3, x_10, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_ctor_set(x_4, 1, x_5);
lean_ctor_set(x_4, 0, x_13);
{
lean_object* _tmp_3 = x_11;
lean_object* _tmp_4 = x_4;
lean_object* _tmp_5 = x_14;
x_4 = _tmp_3;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(x_1, x_2, x_3, x_16, x_6);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_5);
x_4 = x_17;
x_5 = x_21;
x_6 = x_20;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Server.InfoUtils", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Elab.InfoTree.visitM.go", 28, 28);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unexpected context-free info tree node", 38, 38);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1;
x_2 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2;
x_3 = lean_unsigned_to_nat(56u);
x_4 = lean_unsigned_to_nat(21u);
x_5 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(x_6, x_3);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4;
x_11 = l_panic___at_Lean_Server_findReferences___spec__4(x_10, x_5);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
else
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
x_16 = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(x_14, x_3);
x_3 = x_16;
x_4 = x_15;
goto _start;
}
case 1:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_4, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_4, 1);
lean_inc(x_21);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
x_22 = lean_apply_4(x_1, x_19, x_20, x_21, x_5);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_19);
x_24 = l_Lean_Elab_Info_updateContext_x3f(x_3, x_20);
x_25 = l_Lean_PersistentArray_toList___rarg(x_21);
x_26 = lean_box(0);
lean_inc(x_2);
x_27 = l_List_mapM_loop___at_Lean_Server_findReferences___spec__5(x_1, x_2, x_24, x_25, x_26, x_23);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_apply_5(x_2, x_19, x_20, x_21, x_28, x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_30, 0, x_33);
return x_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_30, 0);
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_30);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_38 = lean_ctor_get(x_3, 0);
lean_inc(x_38);
lean_dec(x_3);
x_39 = lean_ctor_get(x_4, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_4, 1);
lean_inc(x_40);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
x_41 = lean_apply_4(x_1, x_38, x_39, x_40, x_5);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
lean_inc(x_38);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_38);
x_44 = l_Lean_Elab_Info_updateContext_x3f(x_43, x_39);
x_45 = l_Lean_PersistentArray_toList___rarg(x_40);
x_46 = lean_box(0);
lean_inc(x_2);
x_47 = l_List_mapM_loop___at_Lean_Server_findReferences___spec__5(x_1, x_2, x_44, x_45, x_46, x_42);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_apply_5(x_2, x_38, x_39, x_40, x_48, x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_53 = x_50;
} else {
 lean_dec_ref(x_50);
 x_53 = lean_box(0);
}
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_51);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
}
default: 
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_5);
return x_57;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Server_findReferences___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_4(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1___boxed), 6, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Lean_Elab_InfoTree_visitM___at_Lean_Server_findReferences___spec__2(x_1, x_5, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_Lean_Server_identOf(x_2, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = l_Lean_Elab_Info_range_x3f(x_3);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Info_stx(x_3);
x_17 = l_Lean_Syntax_getHeadInfo(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_17);
x_18 = l_String_Range_toLspRange(x_1, x_15);
lean_dec(x_15);
x_19 = l_Lean_Server_Reference_aliases___default___closed__1;
x_20 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_20, 0, x_11);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_18);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_2);
lean_ctor_set(x_20, 5, x_3);
x_21 = lean_unbox(x_12);
lean_dec(x_12);
lean_ctor_set_uint8(x_20, sizeof(void*)*6, x_21);
x_22 = lean_array_push(x_5, x_20);
x_23 = lean_box(0);
lean_ctor_set(x_9, 1, x_22);
lean_ctor_set(x_9, 0, x_23);
return x_9;
}
else
{
lean_object* x_24; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_box(0);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 0, x_24);
return x_9;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_9, 0);
x_26 = lean_ctor_get(x_9, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_9);
x_27 = l_Lean_Elab_Info_range_x3f(x_3);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_5);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_27, 0);
lean_inc(x_30);
lean_dec(x_27);
x_31 = l_Lean_Elab_Info_stx(x_3);
x_32 = l_Lean_Syntax_getHeadInfo(x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_32);
x_33 = l_String_Range_toLspRange(x_1, x_30);
lean_dec(x_30);
x_34 = l_Lean_Server_Reference_aliases___default___closed__1;
x_35 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set(x_35, 3, x_31);
lean_ctor_set(x_35, 4, x_2);
lean_ctor_set(x_35, 5, x_3);
x_36 = lean_unbox(x_26);
lean_dec(x_26);
lean_ctor_set_uint8(x_35, sizeof(void*)*6, x_36);
x_37 = lean_array_push(x_5, x_35);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_5);
return x_41;
}
}
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_4);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2___boxed), 5, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1;
x_12 = l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1(x_11, x_10, x_9, x_6);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = 1;
x_15 = lean_usize_add(x_4, x_14);
x_16 = lean_box(0);
x_4 = x_15;
x_5 = x_16;
x_6 = x_13;
goto _start;
}
}
}
lean_object* l_Lean_Server_findReferences(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; size_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_array_size(x_2);
x_4 = 0;
x_5 = lean_box(0);
x_6 = l_Lean_Server_Reference_aliases___default___closed__1;
x_7 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6(x_1, x_2, x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_findReferences___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_findReferences(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Std.Data.DHashMap.Internal.AssocList.Basic", 42, 42);
return x_1;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Std.DHashMap.Internal.AssocList.get!", 36, 36);
return x_1;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("key is not present in hash table", 32, 32);
return x_1;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__1;
x_2 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__2;
x_3 = lean_unsigned_to_nat(112u);
x_4 = lean_unsigned_to_nat(11u);
x_5 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__4;
x_5 = l_panic___rarg(x_1, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_6, x_2);
if (x_9 == 0)
{
x_3 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
lean_inc(x_7);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; uint64_t x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; uint8_t x_18; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_6 = 32;
x_7 = lean_uint64_shift_right(x_5, x_6);
x_8 = lean_uint64_xor(x_5, x_7);
x_9 = 16;
x_10 = lean_uint64_shift_right(x_8, x_9);
x_11 = lean_uint64_xor(x_8, x_10);
x_12 = lean_uint64_to_usize(x_11);
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = 1;
x_15 = lean_usize_sub(x_13, x_14);
x_16 = lean_usize_land(x_12, x_15);
x_17 = lean_array_uget(x_3, x_16);
x_18 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(x_2, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
return x_2;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_Lsp_instInhabitedRefIdent;
x_20 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2(x_19, x_2, x_17);
lean_dec(x_17);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
}
}
lean_object* l_Lean_Server_combineIdents_findCanonicalRepresentative(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Server_combineIdents_findCanonicalRepresentative___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_combineIdents_findCanonicalRepresentative(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 2);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_4, x_1);
if (x_7 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
lean_inc(x_5);
return x_5;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__6(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__5(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__7(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__7(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__11(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__11(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__10(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(x_1, x_7);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(x_1, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_forInStep_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
x_1 = x_4;
goto _start;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_1 = x_4;
x_2 = x_9;
goto _start;
}
}
else
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
x_1 = x_12;
x_2 = x_11;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_1 = x_12;
x_2 = x_17;
goto _start;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_11, 1);
lean_dec(x_20);
x_21 = lean_ctor_get(x_11, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_1, 2);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
lean_ctor_set(x_11, 1, x_24);
lean_ctor_set(x_11, 0, x_23);
x_1 = x_22;
x_2 = x_11;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_11);
x_26 = lean_ctor_get(x_1, 2);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_1 = x_26;
x_2 = x_29;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__15(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_3);
x_7 = l_Std_DHashMap_Internal_AssocList_forInStep_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__14(x_6, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
x_4 = x_8;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__18(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__16(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__17(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_forInStep_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_ctor_get(x_3, 1);
lean_dec(x_9);
x_10 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_7, x_2);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; size_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; lean_object* x_27; uint8_t x_28; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
x_14 = lean_array_get_size(x_13);
x_15 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_7);
x_16 = 32;
x_17 = lean_uint64_shift_right(x_15, x_16);
x_18 = lean_uint64_xor(x_15, x_17);
x_19 = 16;
x_20 = lean_uint64_shift_right(x_18, x_19);
x_21 = lean_uint64_xor(x_18, x_20);
x_22 = lean_uint64_to_usize(x_21);
x_23 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_24 = 1;
x_25 = lean_usize_sub(x_23, x_24);
x_26 = lean_usize_land(x_22, x_25);
x_27 = lean_array_uget(x_13, x_26);
x_28 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(x_7, x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_12, x_29);
lean_dec(x_12);
lean_inc(x_2);
lean_ctor_set(x_3, 2, x_27);
lean_ctor_set(x_3, 1, x_2);
x_31 = lean_array_uset(x_13, x_26, x_3);
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_nat_mul(x_30, x_32);
x_34 = lean_unsigned_to_nat(3u);
x_35 = lean_nat_div(x_33, x_34);
lean_dec(x_33);
x_36 = lean_array_get_size(x_31);
x_37 = lean_nat_dec_le(x_35, x_36);
lean_dec(x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__16(x_31);
lean_ctor_set(x_4, 1, x_38);
lean_ctor_set(x_4, 0, x_30);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_4, 1, x_31);
lean_ctor_set(x_4, 0, x_30);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_3);
lean_inc(x_1);
x_41 = lean_array_uset(x_13, x_26, x_1);
lean_inc(x_2);
x_42 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(x_7, x_2, x_27);
x_43 = lean_array_uset(x_41, x_26, x_42);
lean_ctor_set(x_4, 1, x_43);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint64_t x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; size_t x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; lean_object* x_60; uint8_t x_61; 
x_45 = lean_ctor_get(x_4, 0);
x_46 = lean_ctor_get(x_4, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_4);
x_47 = lean_array_get_size(x_46);
x_48 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_7);
x_49 = 32;
x_50 = lean_uint64_shift_right(x_48, x_49);
x_51 = lean_uint64_xor(x_48, x_50);
x_52 = 16;
x_53 = lean_uint64_shift_right(x_51, x_52);
x_54 = lean_uint64_xor(x_51, x_53);
x_55 = lean_uint64_to_usize(x_54);
x_56 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_57 = 1;
x_58 = lean_usize_sub(x_56, x_57);
x_59 = lean_usize_land(x_55, x_58);
x_60 = lean_array_uget(x_46, x_59);
x_61 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(x_7, x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_62 = lean_unsigned_to_nat(1u);
x_63 = lean_nat_add(x_45, x_62);
lean_dec(x_45);
lean_inc(x_2);
lean_ctor_set(x_3, 2, x_60);
lean_ctor_set(x_3, 1, x_2);
x_64 = lean_array_uset(x_46, x_59, x_3);
x_65 = lean_unsigned_to_nat(4u);
x_66 = lean_nat_mul(x_63, x_65);
x_67 = lean_unsigned_to_nat(3u);
x_68 = lean_nat_div(x_66, x_67);
lean_dec(x_66);
x_69 = lean_array_get_size(x_64);
x_70 = lean_nat_dec_le(x_68, x_69);
lean_dec(x_69);
lean_dec(x_68);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__16(x_64);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_63);
lean_ctor_set(x_72, 1, x_71);
x_3 = x_8;
x_4 = x_72;
goto _start;
}
else
{
lean_object* x_74; 
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_63);
lean_ctor_set(x_74, 1, x_64);
x_3 = x_8;
x_4 = x_74;
goto _start;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_free_object(x_3);
lean_inc(x_1);
x_76 = lean_array_uset(x_46, x_59, x_1);
lean_inc(x_2);
x_77 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(x_7, x_2, x_60);
x_78 = lean_array_uset(x_76, x_59, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_45);
lean_ctor_set(x_79, 1, x_78);
x_3 = x_8;
x_4 = x_79;
goto _start;
}
}
}
else
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
}
else
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_82 = lean_ctor_get(x_3, 0);
x_83 = lean_ctor_get(x_3, 2);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_3);
x_84 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_82, x_2);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint64_t x_89; uint64_t x_90; uint64_t x_91; uint64_t x_92; uint64_t x_93; uint64_t x_94; uint64_t x_95; size_t x_96; size_t x_97; size_t x_98; size_t x_99; size_t x_100; lean_object* x_101; uint8_t x_102; 
x_85 = lean_ctor_get(x_4, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_4, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_87 = x_4;
} else {
 lean_dec_ref(x_4);
 x_87 = lean_box(0);
}
x_88 = lean_array_get_size(x_86);
x_89 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_82);
x_90 = 32;
x_91 = lean_uint64_shift_right(x_89, x_90);
x_92 = lean_uint64_xor(x_89, x_91);
x_93 = 16;
x_94 = lean_uint64_shift_right(x_92, x_93);
x_95 = lean_uint64_xor(x_92, x_94);
x_96 = lean_uint64_to_usize(x_95);
x_97 = lean_usize_of_nat(x_88);
lean_dec(x_88);
x_98 = 1;
x_99 = lean_usize_sub(x_97, x_98);
x_100 = lean_usize_land(x_96, x_99);
x_101 = lean_array_uget(x_86, x_100);
x_102 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(x_82, x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_103 = lean_unsigned_to_nat(1u);
x_104 = lean_nat_add(x_85, x_103);
lean_dec(x_85);
lean_inc(x_2);
x_105 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_105, 0, x_82);
lean_ctor_set(x_105, 1, x_2);
lean_ctor_set(x_105, 2, x_101);
x_106 = lean_array_uset(x_86, x_100, x_105);
x_107 = lean_unsigned_to_nat(4u);
x_108 = lean_nat_mul(x_104, x_107);
x_109 = lean_unsigned_to_nat(3u);
x_110 = lean_nat_div(x_108, x_109);
lean_dec(x_108);
x_111 = lean_array_get_size(x_106);
x_112 = lean_nat_dec_le(x_110, x_111);
lean_dec(x_111);
lean_dec(x_110);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; 
x_113 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__16(x_106);
if (lean_is_scalar(x_87)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_87;
}
lean_ctor_set(x_114, 0, x_104);
lean_ctor_set(x_114, 1, x_113);
x_3 = x_83;
x_4 = x_114;
goto _start;
}
else
{
lean_object* x_116; 
if (lean_is_scalar(x_87)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_87;
}
lean_ctor_set(x_116, 0, x_104);
lean_ctor_set(x_116, 1, x_106);
x_3 = x_83;
x_4 = x_116;
goto _start;
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_inc(x_1);
x_118 = lean_array_uset(x_86, x_100, x_1);
lean_inc(x_2);
x_119 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(x_82, x_2, x_101);
x_120 = lean_array_uset(x_118, x_100, x_119);
if (lean_is_scalar(x_87)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_87;
}
lean_ctor_set(x_121, 0, x_85);
lean_ctor_set(x_121, 1, x_120);
x_3 = x_83;
x_4 = x_121;
goto _start;
}
}
else
{
lean_dec(x_82);
x_3 = x_83;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; 
x_8 = lean_array_uget(x_3, x_5);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Std_DHashMap_Internal_AssocList_forInStep_go___at_Lean_Server_combineIdents_useConstRepresentatives___spec__20(x_1, x_2, x_8, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 1;
x_12 = lean_usize_add(x_5, x_11);
x_5 = x_12;
x_6 = x_10;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_6, x_5);
if (x_8 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_uget(x_4, x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint64_t x_153; uint64_t x_154; uint64_t x_155; uint64_t x_156; uint64_t x_157; uint64_t x_158; uint64_t x_159; size_t x_160; size_t x_161; size_t x_162; size_t x_163; size_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_264; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_13 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_1, x_11);
x_14 = lean_box(0);
lean_inc(x_2);
x_15 = lean_mk_array(x_2, x_14);
x_16 = lean_unsigned_to_nat(0u);
lean_ctor_set(x_9, 1, x_15);
lean_ctor_set(x_9, 0, x_16);
lean_inc(x_12);
x_17 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_1, x_12);
x_149 = lean_ctor_get(x_7, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_7, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_151 = x_7;
} else {
 lean_dec_ref(x_7);
 x_151 = lean_box(0);
}
x_152 = lean_array_get_size(x_150);
x_153 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_13);
x_154 = 32;
x_155 = lean_uint64_shift_right(x_153, x_154);
x_156 = lean_uint64_xor(x_153, x_155);
x_157 = 16;
x_158 = lean_uint64_shift_right(x_156, x_157);
x_159 = lean_uint64_xor(x_156, x_158);
x_160 = lean_uint64_to_usize(x_159);
x_161 = lean_usize_of_nat(x_152);
lean_dec(x_152);
x_162 = 1;
x_163 = lean_usize_sub(x_161, x_162);
x_164 = lean_usize_land(x_160, x_163);
x_165 = lean_array_uget(x_150, x_164);
x_166 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2(x_13, x_9, x_165);
x_264 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_13, x_165);
if (x_264 == 0)
{
lean_object* x_265; 
lean_dec(x_165);
x_265 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_265, 0, x_149);
lean_ctor_set(x_265, 1, x_150);
x_167 = x_265;
goto block_263;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_inc(x_3);
x_266 = lean_array_uset(x_150, x_164, x_3);
x_267 = lean_unsigned_to_nat(1u);
x_268 = lean_nat_sub(x_149, x_267);
lean_dec(x_149);
x_269 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(x_13, x_165);
x_270 = lean_array_uset(x_266, x_164, x_269);
x_271 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_271, 0, x_268);
lean_ctor_set(x_271, 1, x_270);
x_167 = x_271;
goto block_263;
}
block_148:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; size_t x_30; size_t x_31; size_t x_32; size_t x_33; size_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_140; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_21 = x_18;
} else {
 lean_dec_ref(x_18);
 x_21 = lean_box(0);
}
x_22 = lean_array_get_size(x_20);
x_23 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_17);
x_24 = 32;
x_25 = lean_uint64_shift_right(x_23, x_24);
x_26 = lean_uint64_xor(x_23, x_25);
x_27 = 16;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = lean_uint64_to_usize(x_29);
x_31 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_32 = 1;
x_33 = lean_usize_sub(x_31, x_32);
x_34 = lean_usize_land(x_30, x_33);
x_35 = lean_array_uget(x_20, x_34);
x_36 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2(x_17, x_9, x_35);
lean_dec(x_9);
x_140 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_17, x_35);
if (x_140 == 0)
{
lean_object* x_141; 
lean_dec(x_35);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_19);
lean_ctor_set(x_141, 1, x_20);
x_37 = x_141;
goto block_139;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_inc(x_3);
x_142 = lean_array_uset(x_20, x_34, x_3);
x_143 = lean_unsigned_to_nat(1u);
x_144 = lean_nat_sub(x_19, x_143);
lean_dec(x_19);
x_145 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(x_17, x_35);
x_146 = lean_array_uset(x_142, x_34, x_145);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_144);
lean_ctor_set(x_147, 1, x_146);
x_37 = x_147;
goto block_139;
}
block_139:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_71; 
x_71 = !lean_is_exclusive(x_36);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; uint64_t x_75; uint64_t x_76; uint64_t x_77; uint64_t x_78; uint64_t x_79; size_t x_80; size_t x_81; size_t x_82; size_t x_83; lean_object* x_84; uint8_t x_85; 
x_72 = lean_ctor_get(x_36, 0);
x_73 = lean_ctor_get(x_36, 1);
x_74 = lean_array_get_size(x_73);
x_75 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_12);
x_76 = lean_uint64_shift_right(x_75, x_24);
x_77 = lean_uint64_xor(x_75, x_76);
x_78 = lean_uint64_shift_right(x_77, x_27);
x_79 = lean_uint64_xor(x_77, x_78);
x_80 = lean_uint64_to_usize(x_79);
x_81 = lean_usize_of_nat(x_74);
lean_dec(x_74);
x_82 = lean_usize_sub(x_81, x_32);
x_83 = lean_usize_land(x_80, x_82);
x_84 = lean_array_uget(x_73, x_83);
x_85 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(x_12, x_84);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_86 = lean_unsigned_to_nat(1u);
x_87 = lean_nat_add(x_72, x_86);
lean_dec(x_72);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_89, 0, x_12);
lean_ctor_set(x_89, 1, x_88);
lean_ctor_set(x_89, 2, x_84);
x_90 = lean_array_uset(x_73, x_83, x_89);
x_91 = lean_unsigned_to_nat(4u);
x_92 = lean_nat_mul(x_87, x_91);
x_93 = lean_unsigned_to_nat(3u);
x_94 = lean_nat_div(x_92, x_93);
lean_dec(x_92);
x_95 = lean_array_get_size(x_90);
x_96 = lean_nat_dec_le(x_94, x_95);
lean_dec(x_95);
lean_dec(x_94);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__9(x_90);
lean_ctor_set(x_36, 1, x_97);
lean_ctor_set(x_36, 0, x_87);
x_98 = lean_ctor_get(x_37, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_37, 1);
lean_inc(x_99);
lean_dec(x_37);
x_38 = x_36;
x_39 = x_98;
x_40 = x_99;
goto block_70;
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_ctor_set(x_36, 1, x_90);
lean_ctor_set(x_36, 0, x_87);
x_100 = lean_ctor_get(x_37, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_37, 1);
lean_inc(x_101);
lean_dec(x_37);
x_38 = x_36;
x_39 = x_100;
x_40 = x_101;
goto block_70;
}
}
else
{
lean_object* x_102; lean_object* x_103; 
lean_dec(x_84);
lean_dec(x_12);
x_102 = lean_ctor_get(x_37, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_37, 1);
lean_inc(x_103);
lean_dec(x_37);
x_38 = x_36;
x_39 = x_102;
x_40 = x_103;
goto block_70;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint64_t x_107; uint64_t x_108; uint64_t x_109; uint64_t x_110; uint64_t x_111; size_t x_112; size_t x_113; size_t x_114; size_t x_115; lean_object* x_116; uint8_t x_117; 
x_104 = lean_ctor_get(x_36, 0);
x_105 = lean_ctor_get(x_36, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_36);
x_106 = lean_array_get_size(x_105);
x_107 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_12);
x_108 = lean_uint64_shift_right(x_107, x_24);
x_109 = lean_uint64_xor(x_107, x_108);
x_110 = lean_uint64_shift_right(x_109, x_27);
x_111 = lean_uint64_xor(x_109, x_110);
x_112 = lean_uint64_to_usize(x_111);
x_113 = lean_usize_of_nat(x_106);
lean_dec(x_106);
x_114 = lean_usize_sub(x_113, x_32);
x_115 = lean_usize_land(x_112, x_114);
x_116 = lean_array_uget(x_105, x_115);
x_117 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(x_12, x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_118 = lean_unsigned_to_nat(1u);
x_119 = lean_nat_add(x_104, x_118);
lean_dec(x_104);
x_120 = lean_box(0);
x_121 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_121, 0, x_12);
lean_ctor_set(x_121, 1, x_120);
lean_ctor_set(x_121, 2, x_116);
x_122 = lean_array_uset(x_105, x_115, x_121);
x_123 = lean_unsigned_to_nat(4u);
x_124 = lean_nat_mul(x_119, x_123);
x_125 = lean_unsigned_to_nat(3u);
x_126 = lean_nat_div(x_124, x_125);
lean_dec(x_124);
x_127 = lean_array_get_size(x_122);
x_128 = lean_nat_dec_le(x_126, x_127);
lean_dec(x_127);
lean_dec(x_126);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_129 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__9(x_122);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_119);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_ctor_get(x_37, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_37, 1);
lean_inc(x_132);
lean_dec(x_37);
x_38 = x_130;
x_39 = x_131;
x_40 = x_132;
goto block_70;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_119);
lean_ctor_set(x_133, 1, x_122);
x_134 = lean_ctor_get(x_37, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_37, 1);
lean_inc(x_135);
lean_dec(x_37);
x_38 = x_133;
x_39 = x_134;
x_40 = x_135;
goto block_70;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_116);
lean_dec(x_12);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_104);
lean_ctor_set(x_136, 1, x_105);
x_137 = lean_ctor_get(x_37, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_37, 1);
lean_inc(x_138);
lean_dec(x_37);
x_38 = x_136;
x_39 = x_137;
x_40 = x_138;
goto block_70;
}
}
block_70:
{
lean_object* x_41; size_t x_42; size_t x_43; size_t x_44; lean_object* x_45; uint8_t x_46; 
x_41 = lean_array_get_size(x_40);
x_42 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_43 = lean_usize_sub(x_42, x_32);
x_44 = lean_usize_land(x_30, x_43);
x_45 = lean_array_uget(x_40, x_44);
x_46 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_17, x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_add(x_39, x_47);
lean_dec(x_39);
x_49 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_49, 0, x_17);
lean_ctor_set(x_49, 1, x_38);
lean_ctor_set(x_49, 2, x_45);
x_50 = lean_array_uset(x_40, x_44, x_49);
x_51 = lean_unsigned_to_nat(4u);
x_52 = lean_nat_mul(x_48, x_51);
x_53 = lean_unsigned_to_nat(3u);
x_54 = lean_nat_div(x_52, x_53);
lean_dec(x_52);
x_55 = lean_array_get_size(x_50);
x_56 = lean_nat_dec_le(x_54, x_55);
lean_dec(x_55);
lean_dec(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; size_t x_59; 
x_57 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__4(x_50);
if (lean_is_scalar(x_21)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_21;
}
lean_ctor_set(x_58, 0, x_48);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_usize_add(x_6, x_32);
x_6 = x_59;
x_7 = x_58;
goto _start;
}
else
{
lean_object* x_61; size_t x_62; 
if (lean_is_scalar(x_21)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_21;
}
lean_ctor_set(x_61, 0, x_48);
lean_ctor_set(x_61, 1, x_50);
x_62 = lean_usize_add(x_6, x_32);
x_6 = x_62;
x_7 = x_61;
goto _start;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; size_t x_68; 
lean_inc(x_3);
x_64 = lean_array_uset(x_40, x_44, x_3);
x_65 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__7(x_17, x_38, x_45);
x_66 = lean_array_uset(x_64, x_44, x_65);
if (lean_is_scalar(x_21)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_21;
}
lean_ctor_set(x_67, 0, x_39);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_usize_add(x_6, x_32);
x_6 = x_68;
x_7 = x_67;
goto _start;
}
}
}
}
block_263:
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_195; 
x_195 = !lean_is_exclusive(x_166);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; uint64_t x_199; uint64_t x_200; uint64_t x_201; uint64_t x_202; uint64_t x_203; size_t x_204; size_t x_205; size_t x_206; size_t x_207; lean_object* x_208; uint8_t x_209; 
x_196 = lean_ctor_get(x_166, 0);
x_197 = lean_ctor_get(x_166, 1);
x_198 = lean_array_get_size(x_197);
x_199 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_11);
x_200 = lean_uint64_shift_right(x_199, x_154);
x_201 = lean_uint64_xor(x_199, x_200);
x_202 = lean_uint64_shift_right(x_201, x_157);
x_203 = lean_uint64_xor(x_201, x_202);
x_204 = lean_uint64_to_usize(x_203);
x_205 = lean_usize_of_nat(x_198);
lean_dec(x_198);
x_206 = lean_usize_sub(x_205, x_162);
x_207 = lean_usize_land(x_204, x_206);
x_208 = lean_array_uget(x_197, x_207);
x_209 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(x_11, x_208);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; 
x_210 = lean_unsigned_to_nat(1u);
x_211 = lean_nat_add(x_196, x_210);
lean_dec(x_196);
x_212 = lean_box(0);
x_213 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_213, 0, x_11);
lean_ctor_set(x_213, 1, x_212);
lean_ctor_set(x_213, 2, x_208);
x_214 = lean_array_uset(x_197, x_207, x_213);
x_215 = lean_unsigned_to_nat(4u);
x_216 = lean_nat_mul(x_211, x_215);
x_217 = lean_unsigned_to_nat(3u);
x_218 = lean_nat_div(x_216, x_217);
lean_dec(x_216);
x_219 = lean_array_get_size(x_214);
x_220 = lean_nat_dec_le(x_218, x_219);
lean_dec(x_219);
lean_dec(x_218);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__9(x_214);
lean_ctor_set(x_166, 1, x_221);
lean_ctor_set(x_166, 0, x_211);
x_222 = lean_ctor_get(x_167, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_167, 1);
lean_inc(x_223);
lean_dec(x_167);
x_168 = x_166;
x_169 = x_222;
x_170 = x_223;
goto block_194;
}
else
{
lean_object* x_224; lean_object* x_225; 
lean_ctor_set(x_166, 1, x_214);
lean_ctor_set(x_166, 0, x_211);
x_224 = lean_ctor_get(x_167, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_167, 1);
lean_inc(x_225);
lean_dec(x_167);
x_168 = x_166;
x_169 = x_224;
x_170 = x_225;
goto block_194;
}
}
else
{
lean_object* x_226; lean_object* x_227; 
lean_dec(x_208);
lean_dec(x_11);
x_226 = lean_ctor_get(x_167, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_167, 1);
lean_inc(x_227);
lean_dec(x_167);
x_168 = x_166;
x_169 = x_226;
x_170 = x_227;
goto block_194;
}
}
else
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; uint64_t x_231; uint64_t x_232; uint64_t x_233; uint64_t x_234; uint64_t x_235; size_t x_236; size_t x_237; size_t x_238; size_t x_239; lean_object* x_240; uint8_t x_241; 
x_228 = lean_ctor_get(x_166, 0);
x_229 = lean_ctor_get(x_166, 1);
lean_inc(x_229);
lean_inc(x_228);
lean_dec(x_166);
x_230 = lean_array_get_size(x_229);
x_231 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_11);
x_232 = lean_uint64_shift_right(x_231, x_154);
x_233 = lean_uint64_xor(x_231, x_232);
x_234 = lean_uint64_shift_right(x_233, x_157);
x_235 = lean_uint64_xor(x_233, x_234);
x_236 = lean_uint64_to_usize(x_235);
x_237 = lean_usize_of_nat(x_230);
lean_dec(x_230);
x_238 = lean_usize_sub(x_237, x_162);
x_239 = lean_usize_land(x_236, x_238);
x_240 = lean_array_uget(x_229, x_239);
x_241 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(x_11, x_240);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; uint8_t x_252; 
x_242 = lean_unsigned_to_nat(1u);
x_243 = lean_nat_add(x_228, x_242);
lean_dec(x_228);
x_244 = lean_box(0);
x_245 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_245, 0, x_11);
lean_ctor_set(x_245, 1, x_244);
lean_ctor_set(x_245, 2, x_240);
x_246 = lean_array_uset(x_229, x_239, x_245);
x_247 = lean_unsigned_to_nat(4u);
x_248 = lean_nat_mul(x_243, x_247);
x_249 = lean_unsigned_to_nat(3u);
x_250 = lean_nat_div(x_248, x_249);
lean_dec(x_248);
x_251 = lean_array_get_size(x_246);
x_252 = lean_nat_dec_le(x_250, x_251);
lean_dec(x_251);
lean_dec(x_250);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_253 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__9(x_246);
x_254 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_254, 0, x_243);
lean_ctor_set(x_254, 1, x_253);
x_255 = lean_ctor_get(x_167, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_167, 1);
lean_inc(x_256);
lean_dec(x_167);
x_168 = x_254;
x_169 = x_255;
x_170 = x_256;
goto block_194;
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_257 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_257, 0, x_243);
lean_ctor_set(x_257, 1, x_246);
x_258 = lean_ctor_get(x_167, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_167, 1);
lean_inc(x_259);
lean_dec(x_167);
x_168 = x_257;
x_169 = x_258;
x_170 = x_259;
goto block_194;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
lean_dec(x_240);
lean_dec(x_11);
x_260 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_260, 0, x_228);
lean_ctor_set(x_260, 1, x_229);
x_261 = lean_ctor_get(x_167, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_167, 1);
lean_inc(x_262);
lean_dec(x_167);
x_168 = x_260;
x_169 = x_261;
x_170 = x_262;
goto block_194;
}
}
block_194:
{
lean_object* x_171; size_t x_172; size_t x_173; size_t x_174; lean_object* x_175; uint8_t x_176; 
x_171 = lean_array_get_size(x_170);
x_172 = lean_usize_of_nat(x_171);
lean_dec(x_171);
x_173 = lean_usize_sub(x_172, x_162);
x_174 = lean_usize_land(x_160, x_173);
x_175 = lean_array_uget(x_170, x_174);
x_176 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_13, x_175);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; 
x_177 = lean_unsigned_to_nat(1u);
x_178 = lean_nat_add(x_169, x_177);
lean_dec(x_169);
x_179 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_179, 0, x_13);
lean_ctor_set(x_179, 1, x_168);
lean_ctor_set(x_179, 2, x_175);
x_180 = lean_array_uset(x_170, x_174, x_179);
x_181 = lean_unsigned_to_nat(4u);
x_182 = lean_nat_mul(x_178, x_181);
x_183 = lean_unsigned_to_nat(3u);
x_184 = lean_nat_div(x_182, x_183);
lean_dec(x_182);
x_185 = lean_array_get_size(x_180);
x_186 = lean_nat_dec_le(x_184, x_185);
lean_dec(x_185);
lean_dec(x_184);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; 
x_187 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__4(x_180);
if (lean_is_scalar(x_151)) {
 x_188 = lean_alloc_ctor(0, 2, 0);
} else {
 x_188 = x_151;
}
lean_ctor_set(x_188, 0, x_178);
lean_ctor_set(x_188, 1, x_187);
x_18 = x_188;
goto block_148;
}
else
{
lean_object* x_189; 
if (lean_is_scalar(x_151)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_151;
}
lean_ctor_set(x_189, 0, x_178);
lean_ctor_set(x_189, 1, x_180);
x_18 = x_189;
goto block_148;
}
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
lean_inc(x_3);
x_190 = lean_array_uset(x_170, x_174, x_3);
x_191 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__7(x_13, x_168, x_175);
x_192 = lean_array_uset(x_190, x_174, x_191);
if (lean_is_scalar(x_151)) {
 x_193 = lean_alloc_ctor(0, 2, 0);
} else {
 x_193 = x_151;
}
lean_ctor_set(x_193, 0, x_169);
lean_ctor_set(x_193, 1, x_192);
x_18 = x_193;
goto block_148;
}
}
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; uint64_t x_383; uint64_t x_384; uint64_t x_385; uint64_t x_386; uint64_t x_387; uint64_t x_388; uint64_t x_389; size_t x_390; size_t x_391; size_t x_392; size_t x_393; size_t x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; uint8_t x_462; 
x_272 = lean_ctor_get(x_9, 0);
x_273 = lean_ctor_get(x_9, 1);
lean_inc(x_273);
lean_inc(x_272);
lean_dec(x_9);
lean_inc(x_272);
x_274 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_1, x_272);
x_275 = lean_box(0);
lean_inc(x_2);
x_276 = lean_mk_array(x_2, x_275);
x_277 = lean_unsigned_to_nat(0u);
x_278 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_276);
lean_inc(x_273);
x_279 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_1, x_273);
x_379 = lean_ctor_get(x_7, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_7, 1);
lean_inc(x_380);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_381 = x_7;
} else {
 lean_dec_ref(x_7);
 x_381 = lean_box(0);
}
x_382 = lean_array_get_size(x_380);
x_383 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_274);
x_384 = 32;
x_385 = lean_uint64_shift_right(x_383, x_384);
x_386 = lean_uint64_xor(x_383, x_385);
x_387 = 16;
x_388 = lean_uint64_shift_right(x_386, x_387);
x_389 = lean_uint64_xor(x_386, x_388);
x_390 = lean_uint64_to_usize(x_389);
x_391 = lean_usize_of_nat(x_382);
lean_dec(x_382);
x_392 = 1;
x_393 = lean_usize_sub(x_391, x_392);
x_394 = lean_usize_land(x_390, x_393);
x_395 = lean_array_uget(x_380, x_394);
x_396 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2(x_274, x_278, x_395);
x_462 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_274, x_395);
if (x_462 == 0)
{
lean_object* x_463; 
lean_dec(x_395);
x_463 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_463, 0, x_379);
lean_ctor_set(x_463, 1, x_380);
x_397 = x_463;
goto block_461;
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; 
lean_inc(x_3);
x_464 = lean_array_uset(x_380, x_394, x_3);
x_465 = lean_unsigned_to_nat(1u);
x_466 = lean_nat_sub(x_379, x_465);
lean_dec(x_379);
x_467 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(x_274, x_395);
x_468 = lean_array_uset(x_464, x_394, x_467);
x_469 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_469, 0, x_466);
lean_ctor_set(x_469, 1, x_468);
x_397 = x_469;
goto block_461;
}
block_378:
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; uint64_t x_285; uint64_t x_286; uint64_t x_287; uint64_t x_288; uint64_t x_289; uint64_t x_290; uint64_t x_291; size_t x_292; size_t x_293; size_t x_294; size_t x_295; size_t x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; uint8_t x_370; 
x_281 = lean_ctor_get(x_280, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_280, 1);
lean_inc(x_282);
if (lean_is_exclusive(x_280)) {
 lean_ctor_release(x_280, 0);
 lean_ctor_release(x_280, 1);
 x_283 = x_280;
} else {
 lean_dec_ref(x_280);
 x_283 = lean_box(0);
}
x_284 = lean_array_get_size(x_282);
x_285 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_279);
x_286 = 32;
x_287 = lean_uint64_shift_right(x_285, x_286);
x_288 = lean_uint64_xor(x_285, x_287);
x_289 = 16;
x_290 = lean_uint64_shift_right(x_288, x_289);
x_291 = lean_uint64_xor(x_288, x_290);
x_292 = lean_uint64_to_usize(x_291);
x_293 = lean_usize_of_nat(x_284);
lean_dec(x_284);
x_294 = 1;
x_295 = lean_usize_sub(x_293, x_294);
x_296 = lean_usize_land(x_292, x_295);
x_297 = lean_array_uget(x_282, x_296);
x_298 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2(x_279, x_278, x_297);
lean_dec(x_278);
x_370 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_279, x_297);
if (x_370 == 0)
{
lean_object* x_371; 
lean_dec(x_297);
x_371 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_371, 0, x_281);
lean_ctor_set(x_371, 1, x_282);
x_299 = x_371;
goto block_369;
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
lean_inc(x_3);
x_372 = lean_array_uset(x_282, x_296, x_3);
x_373 = lean_unsigned_to_nat(1u);
x_374 = lean_nat_sub(x_281, x_373);
lean_dec(x_281);
x_375 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(x_279, x_297);
x_376 = lean_array_uset(x_372, x_296, x_375);
x_377 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_377, 0, x_374);
lean_ctor_set(x_377, 1, x_376);
x_299 = x_377;
goto block_369;
}
block_369:
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint64_t x_337; uint64_t x_338; uint64_t x_339; uint64_t x_340; uint64_t x_341; size_t x_342; size_t x_343; size_t x_344; size_t x_345; lean_object* x_346; uint8_t x_347; 
x_333 = lean_ctor_get(x_298, 0);
lean_inc(x_333);
x_334 = lean_ctor_get(x_298, 1);
lean_inc(x_334);
if (lean_is_exclusive(x_298)) {
 lean_ctor_release(x_298, 0);
 lean_ctor_release(x_298, 1);
 x_335 = x_298;
} else {
 lean_dec_ref(x_298);
 x_335 = lean_box(0);
}
x_336 = lean_array_get_size(x_334);
x_337 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_273);
x_338 = lean_uint64_shift_right(x_337, x_286);
x_339 = lean_uint64_xor(x_337, x_338);
x_340 = lean_uint64_shift_right(x_339, x_289);
x_341 = lean_uint64_xor(x_339, x_340);
x_342 = lean_uint64_to_usize(x_341);
x_343 = lean_usize_of_nat(x_336);
lean_dec(x_336);
x_344 = lean_usize_sub(x_343, x_294);
x_345 = lean_usize_land(x_342, x_344);
x_346 = lean_array_uget(x_334, x_345);
x_347 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(x_273, x_346);
if (x_347 == 0)
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; uint8_t x_358; 
x_348 = lean_unsigned_to_nat(1u);
x_349 = lean_nat_add(x_333, x_348);
lean_dec(x_333);
x_350 = lean_box(0);
x_351 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_351, 0, x_273);
lean_ctor_set(x_351, 1, x_350);
lean_ctor_set(x_351, 2, x_346);
x_352 = lean_array_uset(x_334, x_345, x_351);
x_353 = lean_unsigned_to_nat(4u);
x_354 = lean_nat_mul(x_349, x_353);
x_355 = lean_unsigned_to_nat(3u);
x_356 = lean_nat_div(x_354, x_355);
lean_dec(x_354);
x_357 = lean_array_get_size(x_352);
x_358 = lean_nat_dec_le(x_356, x_357);
lean_dec(x_357);
lean_dec(x_356);
if (x_358 == 0)
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_359 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__9(x_352);
if (lean_is_scalar(x_335)) {
 x_360 = lean_alloc_ctor(0, 2, 0);
} else {
 x_360 = x_335;
}
lean_ctor_set(x_360, 0, x_349);
lean_ctor_set(x_360, 1, x_359);
x_361 = lean_ctor_get(x_299, 0);
lean_inc(x_361);
x_362 = lean_ctor_get(x_299, 1);
lean_inc(x_362);
lean_dec(x_299);
x_300 = x_360;
x_301 = x_361;
x_302 = x_362;
goto block_332;
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; 
if (lean_is_scalar(x_335)) {
 x_363 = lean_alloc_ctor(0, 2, 0);
} else {
 x_363 = x_335;
}
lean_ctor_set(x_363, 0, x_349);
lean_ctor_set(x_363, 1, x_352);
x_364 = lean_ctor_get(x_299, 0);
lean_inc(x_364);
x_365 = lean_ctor_get(x_299, 1);
lean_inc(x_365);
lean_dec(x_299);
x_300 = x_363;
x_301 = x_364;
x_302 = x_365;
goto block_332;
}
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; 
lean_dec(x_346);
lean_dec(x_273);
if (lean_is_scalar(x_335)) {
 x_366 = lean_alloc_ctor(0, 2, 0);
} else {
 x_366 = x_335;
}
lean_ctor_set(x_366, 0, x_333);
lean_ctor_set(x_366, 1, x_334);
x_367 = lean_ctor_get(x_299, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_299, 1);
lean_inc(x_368);
lean_dec(x_299);
x_300 = x_366;
x_301 = x_367;
x_302 = x_368;
goto block_332;
}
block_332:
{
lean_object* x_303; size_t x_304; size_t x_305; size_t x_306; lean_object* x_307; uint8_t x_308; 
x_303 = lean_array_get_size(x_302);
x_304 = lean_usize_of_nat(x_303);
lean_dec(x_303);
x_305 = lean_usize_sub(x_304, x_294);
x_306 = lean_usize_land(x_292, x_305);
x_307 = lean_array_uget(x_302, x_306);
x_308 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_279, x_307);
if (x_308 == 0)
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; uint8_t x_318; 
x_309 = lean_unsigned_to_nat(1u);
x_310 = lean_nat_add(x_301, x_309);
lean_dec(x_301);
x_311 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_311, 0, x_279);
lean_ctor_set(x_311, 1, x_300);
lean_ctor_set(x_311, 2, x_307);
x_312 = lean_array_uset(x_302, x_306, x_311);
x_313 = lean_unsigned_to_nat(4u);
x_314 = lean_nat_mul(x_310, x_313);
x_315 = lean_unsigned_to_nat(3u);
x_316 = lean_nat_div(x_314, x_315);
lean_dec(x_314);
x_317 = lean_array_get_size(x_312);
x_318 = lean_nat_dec_le(x_316, x_317);
lean_dec(x_317);
lean_dec(x_316);
if (x_318 == 0)
{
lean_object* x_319; lean_object* x_320; size_t x_321; 
x_319 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__4(x_312);
if (lean_is_scalar(x_283)) {
 x_320 = lean_alloc_ctor(0, 2, 0);
} else {
 x_320 = x_283;
}
lean_ctor_set(x_320, 0, x_310);
lean_ctor_set(x_320, 1, x_319);
x_321 = lean_usize_add(x_6, x_294);
x_6 = x_321;
x_7 = x_320;
goto _start;
}
else
{
lean_object* x_323; size_t x_324; 
if (lean_is_scalar(x_283)) {
 x_323 = lean_alloc_ctor(0, 2, 0);
} else {
 x_323 = x_283;
}
lean_ctor_set(x_323, 0, x_310);
lean_ctor_set(x_323, 1, x_312);
x_324 = lean_usize_add(x_6, x_294);
x_6 = x_324;
x_7 = x_323;
goto _start;
}
}
else
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; size_t x_330; 
lean_inc(x_3);
x_326 = lean_array_uset(x_302, x_306, x_3);
x_327 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__7(x_279, x_300, x_307);
x_328 = lean_array_uset(x_326, x_306, x_327);
if (lean_is_scalar(x_283)) {
 x_329 = lean_alloc_ctor(0, 2, 0);
} else {
 x_329 = x_283;
}
lean_ctor_set(x_329, 0, x_301);
lean_ctor_set(x_329, 1, x_328);
x_330 = lean_usize_add(x_6, x_294);
x_6 = x_330;
x_7 = x_329;
goto _start;
}
}
}
}
block_461:
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; uint64_t x_429; uint64_t x_430; uint64_t x_431; uint64_t x_432; uint64_t x_433; size_t x_434; size_t x_435; size_t x_436; size_t x_437; lean_object* x_438; uint8_t x_439; 
x_425 = lean_ctor_get(x_396, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_396, 1);
lean_inc(x_426);
if (lean_is_exclusive(x_396)) {
 lean_ctor_release(x_396, 0);
 lean_ctor_release(x_396, 1);
 x_427 = x_396;
} else {
 lean_dec_ref(x_396);
 x_427 = lean_box(0);
}
x_428 = lean_array_get_size(x_426);
x_429 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_272);
x_430 = lean_uint64_shift_right(x_429, x_384);
x_431 = lean_uint64_xor(x_429, x_430);
x_432 = lean_uint64_shift_right(x_431, x_387);
x_433 = lean_uint64_xor(x_431, x_432);
x_434 = lean_uint64_to_usize(x_433);
x_435 = lean_usize_of_nat(x_428);
lean_dec(x_428);
x_436 = lean_usize_sub(x_435, x_392);
x_437 = lean_usize_land(x_434, x_436);
x_438 = lean_array_uget(x_426, x_437);
x_439 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(x_272, x_438);
if (x_439 == 0)
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; uint8_t x_450; 
x_440 = lean_unsigned_to_nat(1u);
x_441 = lean_nat_add(x_425, x_440);
lean_dec(x_425);
x_442 = lean_box(0);
x_443 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_443, 0, x_272);
lean_ctor_set(x_443, 1, x_442);
lean_ctor_set(x_443, 2, x_438);
x_444 = lean_array_uset(x_426, x_437, x_443);
x_445 = lean_unsigned_to_nat(4u);
x_446 = lean_nat_mul(x_441, x_445);
x_447 = lean_unsigned_to_nat(3u);
x_448 = lean_nat_div(x_446, x_447);
lean_dec(x_446);
x_449 = lean_array_get_size(x_444);
x_450 = lean_nat_dec_le(x_448, x_449);
lean_dec(x_449);
lean_dec(x_448);
if (x_450 == 0)
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_451 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__9(x_444);
if (lean_is_scalar(x_427)) {
 x_452 = lean_alloc_ctor(0, 2, 0);
} else {
 x_452 = x_427;
}
lean_ctor_set(x_452, 0, x_441);
lean_ctor_set(x_452, 1, x_451);
x_453 = lean_ctor_get(x_397, 0);
lean_inc(x_453);
x_454 = lean_ctor_get(x_397, 1);
lean_inc(x_454);
lean_dec(x_397);
x_398 = x_452;
x_399 = x_453;
x_400 = x_454;
goto block_424;
}
else
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; 
if (lean_is_scalar(x_427)) {
 x_455 = lean_alloc_ctor(0, 2, 0);
} else {
 x_455 = x_427;
}
lean_ctor_set(x_455, 0, x_441);
lean_ctor_set(x_455, 1, x_444);
x_456 = lean_ctor_get(x_397, 0);
lean_inc(x_456);
x_457 = lean_ctor_get(x_397, 1);
lean_inc(x_457);
lean_dec(x_397);
x_398 = x_455;
x_399 = x_456;
x_400 = x_457;
goto block_424;
}
}
else
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; 
lean_dec(x_438);
lean_dec(x_272);
if (lean_is_scalar(x_427)) {
 x_458 = lean_alloc_ctor(0, 2, 0);
} else {
 x_458 = x_427;
}
lean_ctor_set(x_458, 0, x_425);
lean_ctor_set(x_458, 1, x_426);
x_459 = lean_ctor_get(x_397, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_397, 1);
lean_inc(x_460);
lean_dec(x_397);
x_398 = x_458;
x_399 = x_459;
x_400 = x_460;
goto block_424;
}
block_424:
{
lean_object* x_401; size_t x_402; size_t x_403; size_t x_404; lean_object* x_405; uint8_t x_406; 
x_401 = lean_array_get_size(x_400);
x_402 = lean_usize_of_nat(x_401);
lean_dec(x_401);
x_403 = lean_usize_sub(x_402, x_392);
x_404 = lean_usize_land(x_390, x_403);
x_405 = lean_array_uget(x_400, x_404);
x_406 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_274, x_405);
if (x_406 == 0)
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; uint8_t x_416; 
x_407 = lean_unsigned_to_nat(1u);
x_408 = lean_nat_add(x_399, x_407);
lean_dec(x_399);
x_409 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_409, 0, x_274);
lean_ctor_set(x_409, 1, x_398);
lean_ctor_set(x_409, 2, x_405);
x_410 = lean_array_uset(x_400, x_404, x_409);
x_411 = lean_unsigned_to_nat(4u);
x_412 = lean_nat_mul(x_408, x_411);
x_413 = lean_unsigned_to_nat(3u);
x_414 = lean_nat_div(x_412, x_413);
lean_dec(x_412);
x_415 = lean_array_get_size(x_410);
x_416 = lean_nat_dec_le(x_414, x_415);
lean_dec(x_415);
lean_dec(x_414);
if (x_416 == 0)
{
lean_object* x_417; lean_object* x_418; 
x_417 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__4(x_410);
if (lean_is_scalar(x_381)) {
 x_418 = lean_alloc_ctor(0, 2, 0);
} else {
 x_418 = x_381;
}
lean_ctor_set(x_418, 0, x_408);
lean_ctor_set(x_418, 1, x_417);
x_280 = x_418;
goto block_378;
}
else
{
lean_object* x_419; 
if (lean_is_scalar(x_381)) {
 x_419 = lean_alloc_ctor(0, 2, 0);
} else {
 x_419 = x_381;
}
lean_ctor_set(x_419, 0, x_408);
lean_ctor_set(x_419, 1, x_410);
x_280 = x_419;
goto block_378;
}
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
lean_inc(x_3);
x_420 = lean_array_uset(x_400, x_404, x_3);
x_421 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__7(x_274, x_398, x_405);
x_422 = lean_array_uset(x_420, x_404, x_421);
if (lean_is_scalar(x_381)) {
 x_423 = lean_alloc_ctor(0, 2, 0);
} else {
 x_423 = x_381;
}
lean_ctor_set(x_423, 0, x_399);
lean_ctor_set(x_423, 1, x_422);
x_280 = x_423;
goto block_378;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__23(size_t x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_2);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_array_size(x_11);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__15(x_11, x_12, x_1, x_9);
lean_inc(x_2);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__21(x_2, x_13, x_11, x_12, x_1, x_6);
lean_dec(x_11);
x_15 = 1;
x_16 = lean_usize_add(x_5, x_15);
x_5 = x_16;
x_6 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__24(size_t x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_2);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_array_size(x_11);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__15(x_11, x_12, x_1, x_9);
lean_inc(x_2);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__21(x_2, x_13, x_11, x_12, x_1, x_6);
lean_dec(x_11);
x_15 = 1;
x_16 = lean_usize_add(x_5, x_15);
x_5 = x_16;
x_6 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__25(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__13(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__26(size_t x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_2);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_array_size(x_11);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__15(x_11, x_12, x_1, x_9);
lean_inc(x_2);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__21(x_2, x_13, x_11, x_12, x_1, x_6);
lean_dec(x_11);
x_15 = 1;
x_16 = lean_usize_add(x_5, x_15);
x_5 = x_16;
x_6 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__27(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__1(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_Server_combineIdents_useConstRepresentatives(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; size_t x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
x_7 = 0;
if (x_6 == 0)
{
lean_object* x_29; 
lean_dec(x_4);
x_29 = l_Lean_Server_Reference_aliases___default___closed__1;
x_8 = x_29;
goto block_28;
}
else
{
uint8_t x_30; 
x_30 = lean_nat_dec_le(x_4, x_4);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_4);
x_31 = l_Lean_Server_Reference_aliases___default___closed__1;
x_8 = x_31;
goto block_28;
}
else
{
size_t x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_33 = l_Lean_Server_Reference_aliases___default___closed__1;
x_34 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__27(x_3, x_7, x_32, x_33);
x_8 = x_34;
goto block_28;
}
}
block_28:
{
size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_array_size(x_8);
x_10 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__1;
x_11 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_12 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__22(x_1, x_10, x_2, x_8, x_9, x_7, x_11);
lean_dec(x_8);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_array_get_size(x_13);
x_15 = lean_nat_dec_lt(x_5, x_14);
if (x_15 == 0)
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_13);
x_16 = l_Lean_Server_Reference_aliases___default___closed__1;
x_17 = l_Lean_Lsp_ModuleRefs_findAt___closed__1;
x_18 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__23(x_7, x_2, x_16, x_17, x_7, x_11);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_14, x_14);
if (x_19 == 0)
{
lean_object* x_20; size_t x_21; lean_object* x_22; 
lean_dec(x_14);
lean_dec(x_13);
x_20 = l_Lean_Server_Reference_aliases___default___closed__1;
x_21 = l_Lean_Lsp_ModuleRefs_findAt___closed__1;
x_22 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__24(x_7, x_2, x_20, x_21, x_7, x_11);
return x_22;
}
else
{
size_t x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; 
x_23 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_24 = l_Lean_Server_Reference_aliases___default___closed__1;
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__25(x_13, x_7, x_23, x_24);
lean_dec(x_13);
x_26 = lean_array_size(x_25);
x_27 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__26(x_7, x_2, x_25, x_26, x_7, x_11);
lean_dec(x_25);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_combineIdents_useConstRepresentatives___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_useConstRepresentatives___spec__8(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_combineIdents_useConstRepresentatives___spec__12(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents_useConstRepresentatives___spec__13(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__15(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__21(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__22(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__23(x_7, x_2, x_3, x_8, x_9, x_6);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__24(x_7, x_2, x_3, x_8, x_9, x_6);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__25(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_useConstRepresentatives___spec__26(x_7, x_2, x_3, x_8, x_9, x_6);
lean_dec(x_3);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_useConstRepresentatives___spec__27(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_combineIdents_useConstRepresentatives___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_combineIdents_useConstRepresentatives(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Server_combineIdents_insertIdMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_3, x_1);
x_5 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_3, x_2);
x_6 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; size_t x_18; size_t x_19; size_t x_20; size_t x_21; size_t x_22; lean_object* x_23; uint8_t x_24; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
x_10 = lean_array_get_size(x_9);
x_11 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_4);
x_12 = 32;
x_13 = lean_uint64_shift_right(x_11, x_12);
x_14 = lean_uint64_xor(x_11, x_13);
x_15 = 16;
x_16 = lean_uint64_shift_right(x_14, x_15);
x_17 = lean_uint64_xor(x_14, x_16);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_20 = 1;
x_21 = lean_usize_sub(x_19, x_20);
x_22 = lean_usize_land(x_18, x_21);
x_23 = lean_array_uget(x_9, x_22);
x_24 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(x_4, x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_8, x_25);
lean_dec(x_8);
x_27 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_27, 0, x_4);
lean_ctor_set(x_27, 1, x_5);
lean_ctor_set(x_27, 2, x_23);
x_28 = lean_array_uset(x_9, x_22, x_27);
x_29 = lean_unsigned_to_nat(4u);
x_30 = lean_nat_mul(x_26, x_29);
x_31 = lean_unsigned_to_nat(3u);
x_32 = lean_nat_div(x_30, x_31);
lean_dec(x_30);
x_33 = lean_array_get_size(x_28);
x_34 = lean_nat_dec_le(x_32, x_33);
lean_dec(x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__16(x_28);
lean_ctor_set(x_3, 1, x_35);
lean_ctor_set(x_3, 0, x_26);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; 
lean_ctor_set(x_3, 1, x_28);
lean_ctor_set(x_3, 0, x_26);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_3);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_box(0);
x_41 = lean_array_uset(x_9, x_22, x_40);
x_42 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(x_4, x_5, x_23);
x_43 = lean_array_uset(x_41, x_22, x_42);
lean_ctor_set(x_3, 1, x_43);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_3);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; size_t x_60; lean_object* x_61; uint8_t x_62; 
x_46 = lean_ctor_get(x_3, 0);
x_47 = lean_ctor_get(x_3, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_3);
x_48 = lean_array_get_size(x_47);
x_49 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_4);
x_50 = 32;
x_51 = lean_uint64_shift_right(x_49, x_50);
x_52 = lean_uint64_xor(x_49, x_51);
x_53 = 16;
x_54 = lean_uint64_shift_right(x_52, x_53);
x_55 = lean_uint64_xor(x_52, x_54);
x_56 = lean_uint64_to_usize(x_55);
x_57 = lean_usize_of_nat(x_48);
lean_dec(x_48);
x_58 = 1;
x_59 = lean_usize_sub(x_57, x_58);
x_60 = lean_usize_land(x_56, x_59);
x_61 = lean_array_uget(x_47, x_60);
x_62 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(x_4, x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_63 = lean_unsigned_to_nat(1u);
x_64 = lean_nat_add(x_46, x_63);
lean_dec(x_46);
x_65 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_65, 0, x_4);
lean_ctor_set(x_65, 1, x_5);
lean_ctor_set(x_65, 2, x_61);
x_66 = lean_array_uset(x_47, x_60, x_65);
x_67 = lean_unsigned_to_nat(4u);
x_68 = lean_nat_mul(x_64, x_67);
x_69 = lean_unsigned_to_nat(3u);
x_70 = lean_nat_div(x_68, x_69);
lean_dec(x_68);
x_71 = lean_array_get_size(x_66);
x_72 = lean_nat_dec_le(x_70, x_71);
lean_dec(x_71);
lean_dec(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents_useConstRepresentatives___spec__16(x_66);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_64);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_64);
lean_ctor_set(x_77, 1, x_66);
x_78 = lean_box(0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_80 = lean_box(0);
x_81 = lean_array_uset(x_47, x_60, x_80);
x_82 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents_useConstRepresentatives___spec__19(x_4, x_5, x_61);
x_83 = lean_array_uset(x_81, x_60, x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_46);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_box(0);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_5);
lean_dec(x_4);
x_87 = lean_box(0);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_3);
return x_88;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_combineIdents_buildIdMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_buildIdMap___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 2);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_array_get_size(x_12);
x_14 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_11);
x_15 = 32;
x_16 = lean_uint64_shift_right(x_14, x_15);
x_17 = lean_uint64_xor(x_14, x_16);
x_18 = 16;
x_19 = lean_uint64_shift_right(x_17, x_18);
x_20 = lean_uint64_xor(x_17, x_19);
x_21 = lean_uint64_to_usize(x_20);
x_22 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_23 = 1;
x_24 = lean_usize_sub(x_22, x_23);
x_25 = lean_usize_land(x_21, x_24);
x_26 = lean_array_uget(x_12, x_25);
x_27 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_combineIdents_buildIdMap___spec__1(x_11, x_26);
lean_dec(x_26);
lean_dec(x_11);
if (lean_obj_tag(x_27) == 0)
{
size_t x_28; lean_object* x_29; 
lean_dec(x_10);
x_28 = lean_usize_add(x_4, x_23);
x_29 = lean_box(0);
x_4 = x_28;
x_5 = x_29;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; size_t x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
lean_dec(x_27);
x_32 = l_Lean_Server_combineIdents_insertIdMap(x_31, x_10, x_6);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_usize_add(x_4, x_23);
x_35 = lean_box(0);
x_4 = x_34;
x_5 = x_35;
x_6 = x_33;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at_Lean_Server_combineIdents_buildIdMap___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_panic___at_Lean_Server_findReferences___spec__4___closed__2;
x_4 = lean_panic_fn(x_3, x_1);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_Lean_Server_combineIdents_buildIdMap___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_List_reverse___rarg(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineIdents_buildIdMap___spec__5(x_1, x_2, x_3, x_10, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_ctor_set(x_4, 1, x_5);
lean_ctor_set(x_4, 0, x_13);
{
lean_object* _tmp_3 = x_11;
lean_object* _tmp_4 = x_4;
lean_object* _tmp_5 = x_14;
x_4 = _tmp_3;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_18 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineIdents_buildIdMap___spec__5(x_1, x_2, x_3, x_16, x_6);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_5);
x_4 = x_17;
x_5 = x_21;
x_6 = x_20;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineIdents_buildIdMap___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(x_6, x_3);
x_3 = x_8;
x_4 = x_7;
goto _start;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4;
x_11 = l_panic___at_Lean_Server_combineIdents_buildIdMap___spec__6(x_10, x_5);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
else
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
x_16 = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(x_14, x_3);
x_3 = x_16;
x_4 = x_15;
goto _start;
}
case 1:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_4, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_4, 1);
lean_inc(x_21);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
x_22 = lean_apply_4(x_1, x_19, x_20, x_21, x_5);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_19);
x_24 = l_Lean_Elab_Info_updateContext_x3f(x_3, x_20);
x_25 = l_Lean_PersistentArray_toList___rarg(x_21);
x_26 = lean_box(0);
lean_inc(x_2);
x_27 = l_List_mapM_loop___at_Lean_Server_combineIdents_buildIdMap___spec__7(x_1, x_2, x_24, x_25, x_26, x_23);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_apply_5(x_2, x_19, x_20, x_21, x_28, x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_30, 0, x_33);
return x_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_30, 0);
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_30);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_38 = lean_ctor_get(x_3, 0);
lean_inc(x_38);
lean_dec(x_3);
x_39 = lean_ctor_get(x_4, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_4, 1);
lean_inc(x_40);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
x_41 = lean_apply_4(x_1, x_38, x_39, x_40, x_5);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
lean_inc(x_38);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_38);
x_44 = l_Lean_Elab_Info_updateContext_x3f(x_43, x_39);
x_45 = l_Lean_PersistentArray_toList___rarg(x_40);
x_46 = lean_box(0);
lean_inc(x_2);
x_47 = l_List_mapM_loop___at_Lean_Server_combineIdents_buildIdMap___spec__7(x_1, x_2, x_44, x_45, x_46, x_42);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_apply_5(x_2, x_38, x_39, x_40, x_48, x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_53 = x_50;
} else {
 lean_dec_ref(x_50);
 x_53 = lean_box(0);
}
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_51);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
}
default: 
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_5);
return x_57;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Server_combineIdents_buildIdMap___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_combineIdents_buildIdMap___spec__5(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_combineIdents_buildIdMap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_findReferences___spec__1___lambda__1___boxed), 6, 1);
lean_closure_set(x_5, 0, x_2);
x_6 = l_Lean_Elab_InfoTree_visitM___at_Lean_Server_combineIdents_buildIdMap___spec__4(x_1, x_5, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 9)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_6, 0);
x_8 = lean_ctor_get(x_7, 4);
x_9 = lean_ctor_get(x_8, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_5, 2);
lean_inc(x_10);
lean_inc(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_10);
lean_inc(x_11);
lean_inc(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Server_combineIdents_insertIdMap(x_12, x_13, x_4);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_4);
return x_16;
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___lambda__1___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
lean_dec(x_4);
x_7 = lean_array_uget(x_1, x_2);
x_8 = l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___closed__1;
x_10 = l_Lean_Elab_InfoTree_visitM_x27___at_Lean_Server_combineIdents_buildIdMap___spec__3(x_8, x_9, x_7, x_5);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 1;
x_14 = lean_usize_add(x_2, x_13);
x_2 = x_14;
x_4 = x_11;
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_5);
return x_16;
}
}
}
lean_object* l_Lean_Server_combineIdents_buildIdMap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_4 = lean_array_size(x_2);
x_5 = 0;
x_6 = lean_box(0);
x_7 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_8 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_buildIdMap___spec__2(x_3, x_2, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
return x_9;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_10, x_10);
if (x_13 == 0)
{
lean_dec(x_10);
return x_9;
}
else
{
size_t x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8(x_1, x_5, x_14, x_6, x_9);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_combineIdents_buildIdMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_combineIdents_buildIdMap___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_buildIdMap___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents_buildIdMap___spec__2(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Server_combineIdents_buildIdMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_combineIdents_buildIdMap(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_combineIdents___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_combineIdents___spec__3(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents___spec__5(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents___spec__5(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_uget(x_2, x_4);
x_8 = lean_ctor_get_uint8(x_7, sizeof(void*)*6);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
lean_dec(x_7);
x_9 = 1;
x_10 = lean_usize_add(x_4, x_9);
x_4 = x_10;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_7, 2);
lean_inc(x_13);
lean_dec(x_7);
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; size_t x_25; size_t x_26; size_t x_27; size_t x_28; size_t x_29; lean_object* x_30; uint8_t x_31; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
x_17 = lean_array_get_size(x_16);
x_18 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_13);
x_19 = 32;
x_20 = lean_uint64_shift_right(x_18, x_19);
x_21 = lean_uint64_xor(x_18, x_20);
x_22 = 16;
x_23 = lean_uint64_shift_right(x_21, x_22);
x_24 = lean_uint64_xor(x_21, x_23);
x_25 = lean_uint64_to_usize(x_24);
x_26 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_27 = 1;
x_28 = lean_usize_sub(x_26, x_27);
x_29 = lean_usize_land(x_25, x_28);
x_30 = lean_array_uget(x_16, x_29);
x_31 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents___spec__1(x_13, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_15, x_32);
lean_dec(x_15);
x_34 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_34, 0, x_13);
lean_ctor_set(x_34, 1, x_12);
lean_ctor_set(x_34, 2, x_30);
x_35 = lean_array_uset(x_16, x_29, x_34);
x_36 = lean_unsigned_to_nat(4u);
x_37 = lean_nat_mul(x_33, x_36);
x_38 = lean_unsigned_to_nat(3u);
x_39 = lean_nat_div(x_37, x_38);
lean_dec(x_37);
x_40 = lean_array_get_size(x_35);
x_41 = lean_nat_dec_le(x_39, x_40);
lean_dec(x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_object* x_42; size_t x_43; 
x_42 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents___spec__2(x_35);
lean_ctor_set(x_5, 1, x_42);
lean_ctor_set(x_5, 0, x_33);
x_43 = lean_usize_add(x_4, x_27);
x_4 = x_43;
goto _start;
}
else
{
size_t x_45; 
lean_ctor_set(x_5, 1, x_35);
lean_ctor_set(x_5, 0, x_33);
x_45 = lean_usize_add(x_4, x_27);
x_4 = x_45;
goto _start;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; size_t x_50; 
lean_inc(x_1);
x_47 = lean_array_uset(x_16, x_29, x_1);
x_48 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents___spec__5(x_13, x_12, x_30);
x_49 = lean_array_uset(x_47, x_29, x_48);
lean_ctor_set(x_5, 1, x_49);
x_50 = lean_usize_add(x_4, x_27);
x_4 = x_50;
goto _start;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint64_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; size_t x_62; size_t x_63; size_t x_64; size_t x_65; size_t x_66; lean_object* x_67; uint8_t x_68; 
x_52 = lean_ctor_get(x_5, 0);
x_53 = lean_ctor_get(x_5, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_5);
x_54 = lean_array_get_size(x_53);
x_55 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_13);
x_56 = 32;
x_57 = lean_uint64_shift_right(x_55, x_56);
x_58 = lean_uint64_xor(x_55, x_57);
x_59 = 16;
x_60 = lean_uint64_shift_right(x_58, x_59);
x_61 = lean_uint64_xor(x_58, x_60);
x_62 = lean_uint64_to_usize(x_61);
x_63 = lean_usize_of_nat(x_54);
lean_dec(x_54);
x_64 = 1;
x_65 = lean_usize_sub(x_63, x_64);
x_66 = lean_usize_land(x_62, x_65);
x_67 = lean_array_uget(x_53, x_66);
x_68 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents___spec__1(x_13, x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_52, x_69);
lean_dec(x_52);
x_71 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_71, 0, x_13);
lean_ctor_set(x_71, 1, x_12);
lean_ctor_set(x_71, 2, x_67);
x_72 = lean_array_uset(x_53, x_66, x_71);
x_73 = lean_unsigned_to_nat(4u);
x_74 = lean_nat_mul(x_70, x_73);
x_75 = lean_unsigned_to_nat(3u);
x_76 = lean_nat_div(x_74, x_75);
lean_dec(x_74);
x_77 = lean_array_get_size(x_72);
x_78 = lean_nat_dec_le(x_76, x_77);
lean_dec(x_77);
lean_dec(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; size_t x_81; 
x_79 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_combineIdents___spec__2(x_72);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_70);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_usize_add(x_4, x_64);
x_4 = x_81;
x_5 = x_80;
goto _start;
}
else
{
lean_object* x_83; size_t x_84; 
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_70);
lean_ctor_set(x_83, 1, x_72);
x_84 = lean_usize_add(x_4, x_64);
x_4 = x_84;
x_5 = x_83;
goto _start;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; size_t x_90; 
lean_inc(x_1);
x_86 = lean_array_uset(x_53, x_66, x_1);
x_87 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_combineIdents___spec__5(x_13, x_12, x_67);
x_88 = lean_array_uset(x_86, x_66, x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_52);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_usize_add(x_4, x_64);
x_4 = x_90;
x_5 = x_89;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_7 = lean_array_uget(x_2, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 5);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_7, sizeof(void*)*6);
x_14 = lean_ctor_get(x_1, 1);
x_15 = lean_array_get_size(x_14);
x_16 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_8);
x_17 = 32;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = 16;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_25 = 1;
x_26 = lean_usize_sub(x_24, x_25);
x_27 = lean_usize_land(x_23, x_26);
x_28 = lean_array_uget(x_14, x_27);
x_29 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__1(x_8, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; size_t x_31; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_30 = lean_array_push(x_5, x_7);
x_31 = lean_usize_add(x_4, x_25);
x_4 = x_31;
x_5 = x_30;
goto _start;
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_7);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; size_t x_44; 
x_34 = lean_ctor_get(x_7, 5);
lean_dec(x_34);
x_35 = lean_ctor_get(x_7, 4);
lean_dec(x_35);
x_36 = lean_ctor_get(x_7, 3);
lean_dec(x_36);
x_37 = lean_ctor_get(x_7, 2);
lean_dec(x_37);
x_38 = lean_ctor_get(x_7, 1);
lean_dec(x_38);
x_39 = lean_ctor_get(x_7, 0);
lean_dec(x_39);
lean_inc(x_8);
x_40 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_1, x_8);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1;
x_42 = lean_array_push(x_41, x_8);
lean_ctor_set(x_7, 1, x_42);
lean_ctor_set(x_7, 0, x_40);
x_43 = lean_array_push(x_5, x_7);
x_44 = lean_usize_add(x_4, x_25);
x_4 = x_44;
x_5 = x_43;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; size_t x_51; 
lean_dec(x_7);
lean_inc(x_8);
x_46 = l_Lean_Loop_forIn_loop___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__3(x_1, x_8);
x_47 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1;
x_48 = lean_array_push(x_47, x_8);
x_49 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
lean_ctor_set(x_49, 2, x_9);
lean_ctor_set(x_49, 3, x_10);
lean_ctor_set(x_49, 4, x_11);
lean_ctor_set(x_49, 5, x_12);
lean_ctor_set_uint8(x_49, sizeof(void*)*6, x_13);
x_50 = lean_array_push(x_5, x_49);
x_51 = lean_usize_add(x_4, x_25);
x_4 = x_51;
x_5 = x_50;
goto _start;
}
}
}
}
}
lean_object* l_Lean_Server_combineIdents(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_box(0);
x_4 = lean_array_size(x_2);
x_5 = 0;
x_6 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_7 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__6(x_3, x_2, x_4, x_5, x_6);
x_8 = l_Lean_Server_combineIdents_buildIdMap(x_1, x_2, x_7);
lean_dec(x_7);
x_9 = l_Lean_Server_combineIdents_useConstRepresentatives(x_8);
lean_dec(x_8);
x_10 = l_Lean_Server_Reference_aliases___default___closed__1;
x_11 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7(x_9, x_2, x_4, x_5, x_10);
lean_dec(x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_combineIdents___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__6(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Server_combineIdents___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_combineIdents(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_dedupReferences___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
x_10 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_6, x_8);
if (x_10 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
x_16 = l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____at_Lean_PrettyPrinter_delabCore___spec__3(x_12, x_14);
if (x_16 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_18; 
x_18 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(x_13, x_15);
if (x_18 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_20; 
x_20 = 1;
return x_20;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 2);
x_7 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_8 = lean_apply_1(x_1, x_5);
x_9 = lean_unbox_uint64(x_8);
lean_dec(x_8);
x_10 = 32;
x_11 = lean_uint64_shift_right(x_9, x_10);
x_12 = lean_uint64_xor(x_9, x_11);
x_13 = 16;
x_14 = lean_uint64_shift_right(x_12, x_13);
x_15 = lean_uint64_xor(x_12, x_14);
x_16 = lean_uint64_to_usize(x_15);
x_17 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_18 = 1;
x_19 = lean_usize_sub(x_17, x_18);
x_20 = lean_usize_land(x_16, x_19);
x_21 = lean_array_uget(x_2, x_20);
lean_ctor_set(x_3, 2, x_21);
x_22 = lean_array_uset(x_2, x_20, x_3);
x_2 = x_22;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; uint64_t x_33; uint64_t x_34; uint64_t x_35; size_t x_36; size_t x_37; size_t x_38; size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_24 = lean_ctor_get(x_3, 0);
x_25 = lean_ctor_get(x_3, 1);
x_26 = lean_ctor_get(x_3, 2);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_3);
x_27 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_24);
x_28 = lean_apply_1(x_1, x_24);
x_29 = lean_unbox_uint64(x_28);
lean_dec(x_28);
x_30 = 32;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = 16;
x_34 = lean_uint64_shift_right(x_32, x_33);
x_35 = lean_uint64_xor(x_32, x_34);
x_36 = lean_uint64_to_usize(x_35);
x_37 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_38 = 1;
x_39 = lean_usize_sub(x_37, x_38);
x_40 = lean_usize_land(x_36, x_39);
x_41 = lean_array_uget(x_2, x_40);
x_42 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_42, 0, x_24);
lean_ctor_set(x_42, 1, x_25);
lean_ctor_set(x_42, 2, x_41);
x_43 = lean_array_uset(x_2, x_40, x_42);
x_2 = x_43;
x_3 = x_26;
goto _start;
}
}
}
}
static uint64_t _init_l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1() {
_start:
{
uint64_t x_1; uint64_t x_2; 
x_1 = 13;
x_2 = lean_uint64_mix_hash(x_1, x_1);
return x_2;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2() {
_start:
{
uint64_t x_1; uint64_t x_2; uint64_t x_3; 
x_1 = 13;
x_2 = 11;
x_3 = lean_uint64_mix_hash(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint64_t x_9; size_t x_10; size_t x_11; size_t x_12; uint64_t x_13; lean_object* x_25; lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; uint64_t x_30; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 x_6 = x_2;
} else {
 lean_dec_ref(x_2);
 x_6 = lean_box(0);
}
x_7 = lean_array_get_size(x_1);
x_8 = 32;
x_9 = 16;
x_10 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_11 = 1;
x_12 = lean_usize_sub(x_10, x_11);
x_25 = lean_ctor_get(x_3, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
x_27 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_25);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_29);
lean_dec(x_29);
if (lean_obj_tag(x_28) == 0)
{
uint64_t x_31; uint64_t x_32; uint64_t x_33; 
x_31 = 11;
x_32 = lean_uint64_mix_hash(x_31, x_30);
x_33 = lean_uint64_mix_hash(x_27, x_32);
x_13 = x_33;
goto block_24;
}
else
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
uint64_t x_36; uint64_t x_37; uint64_t x_38; 
x_36 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1;
x_37 = lean_uint64_mix_hash(x_36, x_30);
x_38 = lean_uint64_mix_hash(x_27, x_37);
x_13 = x_38;
goto block_24;
}
else
{
uint64_t x_39; uint64_t x_40; uint64_t x_41; 
x_39 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2;
x_40 = lean_uint64_mix_hash(x_39, x_30);
x_41 = lean_uint64_mix_hash(x_27, x_40);
x_13 = x_41;
goto block_24;
}
}
block_24:
{
uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_uint64_shift_right(x_13, x_8);
x_15 = lean_uint64_xor(x_13, x_14);
x_16 = lean_uint64_shift_right(x_15, x_9);
x_17 = lean_uint64_xor(x_15, x_16);
x_18 = lean_uint64_to_usize(x_17);
x_19 = lean_usize_land(x_18, x_12);
x_20 = lean_array_uget(x_1, x_19);
if (lean_is_scalar(x_6)) {
 x_21 = lean_alloc_ctor(1, 3, 0);
} else {
 x_21 = x_6;
}
lean_ctor_set(x_21, 0, x_3);
lean_ctor_set(x_21, 1, x_4);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_5;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_dedupReferences___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_dedupReferences___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_dedupReferences___spec__3(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_9, x_11);
lean_dec(x_11);
lean_dec(x_9);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_10);
x_14 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_14);
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_12, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____at_Lean_PrettyPrinter_delabCore___spec__3(x_15, x_17);
lean_dec(x_17);
lean_dec(x_15);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
lean_dec(x_16);
x_20 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_20);
return x_3;
}
else
{
uint8_t x_21; 
x_21 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(x_16, x_18);
lean_dec(x_18);
lean_dec(x_16);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_22);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = lean_ctor_get(x_3, 1);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_3);
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
x_30 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_26, x_28);
lean_dec(x_28);
lean_dec(x_26);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_27);
x_31 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_1, x_2, x_25);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_23);
lean_ctor_set(x_32, 1, x_24);
lean_ctor_set(x_32, 2, x_31);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_dec(x_27);
x_35 = lean_ctor_get(x_29, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_dec(x_29);
x_37 = l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____at_Lean_PrettyPrinter_delabCore___spec__3(x_33, x_35);
lean_dec(x_35);
lean_dec(x_33);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_36);
lean_dec(x_34);
x_38 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_1, x_2, x_25);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_23);
lean_ctor_set(x_39, 1, x_24);
lean_ctor_set(x_39, 2, x_38);
return x_39;
}
else
{
uint8_t x_40; 
x_40 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(x_34, x_36);
lean_dec(x_36);
lean_dec(x_34);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_1, x_2, x_25);
x_42 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_42, 0, x_23);
lean_ctor_set(x_42, 1, x_24);
lean_ctor_set(x_42, 2, x_41);
return x_42;
}
else
{
lean_object* x_43; 
lean_dec(x_24);
lean_dec(x_23);
x_43 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_2);
lean_ctor_set(x_43, 2, x_25);
return x_43;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_dedupReferences___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_7, x_9);
if (x_11 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
x_17 = l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____at_Lean_PrettyPrinter_delabCore___spec__3(x_13, x_15);
if (x_17 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_19; 
x_19 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_611_(x_14, x_16);
if (x_19 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_21; 
lean_inc(x_5);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_5);
return x_21;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__8(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_7, x_6);
if (x_9 == 0)
{
lean_dec(x_4);
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_10 = lean_array_uget(x_5, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_10, sizeof(void*)*6);
if (x_1 == 0)
{
lean_object* x_239; 
x_239 = lean_box(0);
x_14 = x_239;
goto block_238;
}
else
{
lean_object* x_240; lean_object* x_241; 
x_240 = lean_box(x_13);
x_241 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_241, 0, x_240);
x_14 = x_241;
goto block_238;
}
block_238:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_70; lean_object* x_188; lean_object* x_189; uint64_t x_190; uint64_t x_191; uint64_t x_192; uint64_t x_193; size_t x_194; size_t x_195; size_t x_196; 
lean_inc(x_12);
lean_inc(x_14);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
lean_inc(x_11);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_188 = lean_ctor_get(x_8, 1);
lean_inc(x_188);
x_189 = lean_array_get_size(x_188);
x_190 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_11);
x_191 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_12);
x_192 = 32;
x_193 = 16;
x_194 = lean_usize_of_nat(x_189);
lean_dec(x_189);
x_195 = 1;
x_196 = lean_usize_sub(x_194, x_195);
if (lean_obj_tag(x_14) == 0)
{
uint64_t x_197; uint64_t x_198; uint64_t x_199; uint64_t x_200; uint64_t x_201; uint64_t x_202; uint64_t x_203; size_t x_204; size_t x_205; lean_object* x_206; lean_object* x_207; 
x_197 = 11;
x_198 = lean_uint64_mix_hash(x_197, x_191);
x_199 = lean_uint64_mix_hash(x_190, x_198);
x_200 = lean_uint64_shift_right(x_199, x_192);
x_201 = lean_uint64_xor(x_199, x_200);
x_202 = lean_uint64_shift_right(x_201, x_193);
x_203 = lean_uint64_xor(x_201, x_202);
x_204 = lean_uint64_to_usize(x_203);
x_205 = lean_usize_land(x_204, x_196);
x_206 = lean_array_uget(x_188, x_205);
lean_dec(x_188);
x_207 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_dedupReferences___spec__7(x_16, x_206);
lean_dec(x_206);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; 
x_208 = lean_box(0);
x_17 = x_208;
goto block_69;
}
else
{
lean_object* x_209; 
x_209 = lean_ctor_get(x_207, 0);
lean_inc(x_209);
lean_dec(x_207);
x_70 = x_209;
goto block_187;
}
}
else
{
lean_object* x_210; uint8_t x_211; 
x_210 = lean_ctor_get(x_14, 0);
lean_inc(x_210);
x_211 = lean_unbox(x_210);
lean_dec(x_210);
if (x_211 == 0)
{
uint64_t x_212; uint64_t x_213; uint64_t x_214; uint64_t x_215; uint64_t x_216; uint64_t x_217; uint64_t x_218; size_t x_219; size_t x_220; lean_object* x_221; lean_object* x_222; 
x_212 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1;
x_213 = lean_uint64_mix_hash(x_212, x_191);
x_214 = lean_uint64_mix_hash(x_190, x_213);
x_215 = lean_uint64_shift_right(x_214, x_192);
x_216 = lean_uint64_xor(x_214, x_215);
x_217 = lean_uint64_shift_right(x_216, x_193);
x_218 = lean_uint64_xor(x_216, x_217);
x_219 = lean_uint64_to_usize(x_218);
x_220 = lean_usize_land(x_219, x_196);
x_221 = lean_array_uget(x_188, x_220);
lean_dec(x_188);
x_222 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_dedupReferences___spec__7(x_16, x_221);
lean_dec(x_221);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; 
x_223 = lean_box(0);
x_17 = x_223;
goto block_69;
}
else
{
lean_object* x_224; 
x_224 = lean_ctor_get(x_222, 0);
lean_inc(x_224);
lean_dec(x_222);
x_70 = x_224;
goto block_187;
}
}
else
{
uint64_t x_225; uint64_t x_226; uint64_t x_227; uint64_t x_228; uint64_t x_229; uint64_t x_230; uint64_t x_231; size_t x_232; size_t x_233; lean_object* x_234; lean_object* x_235; 
x_225 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2;
x_226 = lean_uint64_mix_hash(x_225, x_191);
x_227 = lean_uint64_mix_hash(x_190, x_226);
x_228 = lean_uint64_shift_right(x_227, x_192);
x_229 = lean_uint64_xor(x_227, x_228);
x_230 = lean_uint64_shift_right(x_229, x_193);
x_231 = lean_uint64_xor(x_229, x_230);
x_232 = lean_uint64_to_usize(x_231);
x_233 = lean_usize_land(x_232, x_196);
x_234 = lean_array_uget(x_188, x_233);
lean_dec(x_188);
x_235 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_dedupReferences___spec__7(x_16, x_234);
lean_dec(x_234);
if (lean_obj_tag(x_235) == 0)
{
lean_object* x_236; 
x_236 = lean_box(0);
x_17 = x_236;
goto block_69;
}
else
{
lean_object* x_237; 
x_237 = lean_ctor_get(x_235, 0);
lean_inc(x_237);
lean_dec(x_235);
x_70 = x_237;
goto block_187;
}
}
}
block_69:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; size_t x_26; size_t x_27; size_t x_28; uint64_t x_29; 
lean_dec(x_17);
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_20 = x_8;
} else {
 lean_dec_ref(x_8);
 x_20 = lean_box(0);
}
x_21 = lean_array_get_size(x_19);
x_22 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_11);
lean_dec(x_11);
x_23 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_12);
lean_dec(x_12);
x_24 = 32;
x_25 = 16;
x_26 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_27 = 1;
x_28 = lean_usize_sub(x_26, x_27);
if (lean_obj_tag(x_14) == 0)
{
uint64_t x_64; 
x_64 = 11;
x_29 = x_64;
goto block_63;
}
else
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_14, 0);
lean_inc(x_65);
lean_dec(x_14);
x_66 = lean_unbox(x_65);
lean_dec(x_65);
if (x_66 == 0)
{
uint64_t x_67; 
x_67 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1;
x_29 = x_67;
goto block_63;
}
else
{
uint64_t x_68; 
x_68 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2;
x_29 = x_68;
goto block_63;
}
}
block_63:
{
uint64_t x_30; uint64_t x_31; uint64_t x_32; uint64_t x_33; uint64_t x_34; uint64_t x_35; size_t x_36; size_t x_37; lean_object* x_38; uint8_t x_39; 
x_30 = lean_uint64_mix_hash(x_29, x_23);
x_31 = lean_uint64_mix_hash(x_22, x_30);
x_32 = lean_uint64_shift_right(x_31, x_24);
x_33 = lean_uint64_xor(x_31, x_32);
x_34 = lean_uint64_shift_right(x_33, x_25);
x_35 = lean_uint64_xor(x_33, x_34);
x_36 = lean_uint64_to_usize(x_35);
x_37 = lean_usize_land(x_36, x_28);
x_38 = lean_array_uget(x_19, x_37);
x_39 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_dedupReferences___spec__1(x_16, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_add(x_18, x_40);
lean_dec(x_18);
x_42 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_42, 0, x_16);
lean_ctor_set(x_42, 1, x_10);
lean_ctor_set(x_42, 2, x_38);
x_43 = lean_array_uset(x_19, x_37, x_42);
x_44 = lean_unsigned_to_nat(4u);
x_45 = lean_nat_mul(x_41, x_44);
x_46 = lean_unsigned_to_nat(3u);
x_47 = lean_nat_div(x_45, x_46);
lean_dec(x_45);
x_48 = lean_array_get_size(x_43);
x_49 = lean_nat_dec_le(x_47, x_48);
lean_dec(x_48);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; size_t x_52; 
x_50 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_dedupReferences___spec__2(x_43);
if (lean_is_scalar(x_20)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_20;
}
lean_ctor_set(x_51, 0, x_41);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_usize_add(x_7, x_27);
x_7 = x_52;
x_8 = x_51;
goto _start;
}
else
{
lean_object* x_54; size_t x_55; 
if (lean_is_scalar(x_20)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_20;
}
lean_ctor_set(x_54, 0, x_41);
lean_ctor_set(x_54, 1, x_43);
x_55 = lean_usize_add(x_7, x_27);
x_7 = x_55;
x_8 = x_54;
goto _start;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; size_t x_61; 
lean_inc(x_4);
x_57 = lean_array_uset(x_19, x_37, x_4);
x_58 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_16, x_10, x_38);
x_59 = lean_array_uset(x_57, x_37, x_58);
if (lean_is_scalar(x_20)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_20;
}
lean_ctor_set(x_60, 0, x_18);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_usize_add(x_7, x_27);
x_7 = x_61;
x_8 = x_60;
goto _start;
}
}
}
block_187:
{
uint8_t x_71; 
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint64_t x_79; uint64_t x_80; uint64_t x_81; uint64_t x_82; size_t x_83; size_t x_84; size_t x_85; uint64_t x_86; 
x_72 = lean_ctor_get(x_70, 1);
x_73 = lean_ctor_get(x_10, 1);
lean_inc(x_73);
lean_dec(x_10);
x_74 = l_Array_append___rarg(x_72, x_73);
lean_dec(x_73);
lean_ctor_set(x_70, 1, x_74);
x_75 = lean_ctor_get(x_8, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_8, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_77 = x_8;
} else {
 lean_dec_ref(x_8);
 x_77 = lean_box(0);
}
x_78 = lean_array_get_size(x_76);
x_79 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_11);
lean_dec(x_11);
x_80 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_12);
lean_dec(x_12);
x_81 = 32;
x_82 = 16;
x_83 = lean_usize_of_nat(x_78);
lean_dec(x_78);
x_84 = 1;
x_85 = lean_usize_sub(x_83, x_84);
if (lean_obj_tag(x_14) == 0)
{
uint64_t x_121; 
x_121 = 11;
x_86 = x_121;
goto block_120;
}
else
{
lean_object* x_122; uint8_t x_123; 
x_122 = lean_ctor_get(x_14, 0);
lean_inc(x_122);
lean_dec(x_14);
x_123 = lean_unbox(x_122);
lean_dec(x_122);
if (x_123 == 0)
{
uint64_t x_124; 
x_124 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1;
x_86 = x_124;
goto block_120;
}
else
{
uint64_t x_125; 
x_125 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2;
x_86 = x_125;
goto block_120;
}
}
block_120:
{
uint64_t x_87; uint64_t x_88; uint64_t x_89; uint64_t x_90; uint64_t x_91; uint64_t x_92; size_t x_93; size_t x_94; lean_object* x_95; uint8_t x_96; 
x_87 = lean_uint64_mix_hash(x_86, x_80);
x_88 = lean_uint64_mix_hash(x_79, x_87);
x_89 = lean_uint64_shift_right(x_88, x_81);
x_90 = lean_uint64_xor(x_88, x_89);
x_91 = lean_uint64_shift_right(x_90, x_82);
x_92 = lean_uint64_xor(x_90, x_91);
x_93 = lean_uint64_to_usize(x_92);
x_94 = lean_usize_land(x_93, x_85);
x_95 = lean_array_uget(x_76, x_94);
x_96 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_dedupReferences___spec__1(x_16, x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_97 = lean_unsigned_to_nat(1u);
x_98 = lean_nat_add(x_75, x_97);
lean_dec(x_75);
x_99 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_99, 0, x_16);
lean_ctor_set(x_99, 1, x_70);
lean_ctor_set(x_99, 2, x_95);
x_100 = lean_array_uset(x_76, x_94, x_99);
x_101 = lean_unsigned_to_nat(4u);
x_102 = lean_nat_mul(x_98, x_101);
x_103 = lean_unsigned_to_nat(3u);
x_104 = lean_nat_div(x_102, x_103);
lean_dec(x_102);
x_105 = lean_array_get_size(x_100);
x_106 = lean_nat_dec_le(x_104, x_105);
lean_dec(x_105);
lean_dec(x_104);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; size_t x_109; 
x_107 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_dedupReferences___spec__2(x_100);
if (lean_is_scalar(x_77)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_77;
}
lean_ctor_set(x_108, 0, x_98);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_usize_add(x_7, x_84);
x_7 = x_109;
x_8 = x_108;
goto _start;
}
else
{
lean_object* x_111; size_t x_112; 
if (lean_is_scalar(x_77)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_77;
}
lean_ctor_set(x_111, 0, x_98);
lean_ctor_set(x_111, 1, x_100);
x_112 = lean_usize_add(x_7, x_84);
x_7 = x_112;
x_8 = x_111;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; size_t x_118; 
lean_inc(x_4);
x_114 = lean_array_uset(x_76, x_94, x_4);
x_115 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_16, x_70, x_95);
x_116 = lean_array_uset(x_114, x_94, x_115);
if (lean_is_scalar(x_77)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_77;
}
lean_ctor_set(x_117, 0, x_75);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_usize_add(x_7, x_84);
x_7 = x_118;
x_8 = x_117;
goto _start;
}
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint64_t x_140; uint64_t x_141; uint64_t x_142; uint64_t x_143; size_t x_144; size_t x_145; size_t x_146; uint64_t x_147; 
x_126 = lean_ctor_get(x_70, 0);
x_127 = lean_ctor_get(x_70, 1);
x_128 = lean_ctor_get(x_70, 2);
x_129 = lean_ctor_get(x_70, 3);
x_130 = lean_ctor_get(x_70, 4);
x_131 = lean_ctor_get(x_70, 5);
x_132 = lean_ctor_get_uint8(x_70, sizeof(void*)*6);
lean_inc(x_131);
lean_inc(x_130);
lean_inc(x_129);
lean_inc(x_128);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_70);
x_133 = lean_ctor_get(x_10, 1);
lean_inc(x_133);
lean_dec(x_10);
x_134 = l_Array_append___rarg(x_127, x_133);
lean_dec(x_133);
x_135 = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(x_135, 0, x_126);
lean_ctor_set(x_135, 1, x_134);
lean_ctor_set(x_135, 2, x_128);
lean_ctor_set(x_135, 3, x_129);
lean_ctor_set(x_135, 4, x_130);
lean_ctor_set(x_135, 5, x_131);
lean_ctor_set_uint8(x_135, sizeof(void*)*6, x_132);
x_136 = lean_ctor_get(x_8, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_8, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_138 = x_8;
} else {
 lean_dec_ref(x_8);
 x_138 = lean_box(0);
}
x_139 = lean_array_get_size(x_137);
x_140 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_11);
lean_dec(x_11);
x_141 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_hashRange____x40_Lean_Data_Lsp_Basic___hyg_685_(x_12);
lean_dec(x_12);
x_142 = 32;
x_143 = 16;
x_144 = lean_usize_of_nat(x_139);
lean_dec(x_139);
x_145 = 1;
x_146 = lean_usize_sub(x_144, x_145);
if (lean_obj_tag(x_14) == 0)
{
uint64_t x_182; 
x_182 = 11;
x_147 = x_182;
goto block_181;
}
else
{
lean_object* x_183; uint8_t x_184; 
x_183 = lean_ctor_get(x_14, 0);
lean_inc(x_183);
lean_dec(x_14);
x_184 = lean_unbox(x_183);
lean_dec(x_183);
if (x_184 == 0)
{
uint64_t x_185; 
x_185 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1;
x_147 = x_185;
goto block_181;
}
else
{
uint64_t x_186; 
x_186 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2;
x_147 = x_186;
goto block_181;
}
}
block_181:
{
uint64_t x_148; uint64_t x_149; uint64_t x_150; uint64_t x_151; uint64_t x_152; uint64_t x_153; size_t x_154; size_t x_155; lean_object* x_156; uint8_t x_157; 
x_148 = lean_uint64_mix_hash(x_147, x_141);
x_149 = lean_uint64_mix_hash(x_140, x_148);
x_150 = lean_uint64_shift_right(x_149, x_142);
x_151 = lean_uint64_xor(x_149, x_150);
x_152 = lean_uint64_shift_right(x_151, x_143);
x_153 = lean_uint64_xor(x_151, x_152);
x_154 = lean_uint64_to_usize(x_153);
x_155 = lean_usize_land(x_154, x_146);
x_156 = lean_array_uget(x_137, x_155);
x_157 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_dedupReferences___spec__1(x_16, x_156);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_158 = lean_unsigned_to_nat(1u);
x_159 = lean_nat_add(x_136, x_158);
lean_dec(x_136);
x_160 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_160, 0, x_16);
lean_ctor_set(x_160, 1, x_135);
lean_ctor_set(x_160, 2, x_156);
x_161 = lean_array_uset(x_137, x_155, x_160);
x_162 = lean_unsigned_to_nat(4u);
x_163 = lean_nat_mul(x_159, x_162);
x_164 = lean_unsigned_to_nat(3u);
x_165 = lean_nat_div(x_163, x_164);
lean_dec(x_163);
x_166 = lean_array_get_size(x_161);
x_167 = lean_nat_dec_le(x_165, x_166);
lean_dec(x_166);
lean_dec(x_165);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; size_t x_170; 
x_168 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_dedupReferences___spec__2(x_161);
if (lean_is_scalar(x_138)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_138;
}
lean_ctor_set(x_169, 0, x_159);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_usize_add(x_7, x_145);
x_7 = x_170;
x_8 = x_169;
goto _start;
}
else
{
lean_object* x_172; size_t x_173; 
if (lean_is_scalar(x_138)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_138;
}
lean_ctor_set(x_172, 0, x_159);
lean_ctor_set(x_172, 1, x_161);
x_173 = lean_usize_add(x_7, x_145);
x_7 = x_173;
x_8 = x_172;
goto _start;
}
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; size_t x_179; 
lean_inc(x_4);
x_175 = lean_array_uset(x_137, x_155, x_4);
x_176 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_dedupReferences___spec__6(x_16, x_135, x_156);
x_177 = lean_array_uset(x_175, x_155, x_176);
if (lean_is_scalar(x_138)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_138;
}
lean_ctor_set(x_178, 0, x_136);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_usize_add(x_7, x_145);
x_7 = x_179;
x_8 = x_178;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_array_push(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_Lsp_instOrdRange;
x_6 = l_instDecidableRelLt___rarg(x_5, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___closed__1;
lean_inc(x_2);
x_6 = l_Array_qpartition___rarg(x_1, x_5, x_2, x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_nat_dec_le(x_3, x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10(x_8, x_2, x_7);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_7, x_11);
lean_dec(x_7);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
else
{
lean_dec(x_7);
lean_dec(x_2);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__11(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__9(x_4, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instDecidableEqBool___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_dedupReferences___closed__1;
x_2 = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_dedupReferences___closed__2;
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Option_Basic_0__Option_beqOption____x40_Init_Data_Option_Basic___hyg_159____rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_dedupReferences___closed__3;
x_2 = l_Lean_Lsp_instBEqRange;
x_3 = lean_alloc_closure((void*)(l_instBEqProd___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_instBEqRefIdent;
x_2 = l_Lean_Server_dedupReferences___closed__4;
x_3 = lean_alloc_closure((void*)(l_instBEqProd___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instHashableBool___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_dedupReferences___closed__6;
x_2 = lean_alloc_closure((void*)(l_instHashableOption___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_dedupReferences___closed__7;
x_2 = l_Lean_Lsp_instHashableRange;
x_3 = lean_alloc_closure((void*)(l_instHashableProd___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Lsp_instHashableRefIdent;
x_2 = l_Lean_Server_dedupReferences___closed__8;
x_3 = lean_alloc_closure((void*)(l_instHashableProd___rarg___boxed), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_Reference_aliases___default___closed__1;
x_2 = lean_array_get_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_dedupReferences___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_dedupReferences___closed__10;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_sub(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Server_dedupReferences(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_3 = lean_box(0);
x_4 = lean_array_size(x_1);
x_5 = 0;
x_6 = l_Lean_Server_dedupReferences___closed__5;
x_7 = l_Lean_Server_dedupReferences___closed__9;
x_8 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__8(x_2, x_6, x_7, x_3, x_1, x_4, x_5, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_14 = l_Lean_Server_Reference_aliases___default___closed__1;
x_15 = l_Lean_Server_dedupReferences___closed__11;
x_16 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10(x_14, x_12, x_15);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_11, x_11);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_10);
x_18 = l_Lean_Server_Reference_aliases___default___closed__1;
x_19 = l_Lean_Server_dedupReferences___closed__11;
x_20 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10(x_18, x_12, x_19);
return x_20;
}
else
{
size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_22 = l_Lean_Server_Reference_aliases___default___closed__1;
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__11(x_10, x_5, x_21, x_22);
lean_dec(x_10);
x_24 = lean_array_get_size(x_23);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_24, x_25);
lean_dec(x_24);
x_27 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10(x_23, x_12, x_26);
lean_dec(x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_dedupReferences___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_dedupReferences___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_dedupReferences___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_dedupReferences___spec__7(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Server_dedupReferences___spec__8(x_9, x_2, x_3, x_4, x_5, x_10, x_11, x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___lambda__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_dedupReferences___spec__11(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_dedupReferences___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Server_dedupReferences(x_1, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Server_ModuleRefs_addRef(x_4, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = lean_usize_add(x_2, x_7);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_9);
x_10 = lean_array_push(x_4, x_6);
x_2 = x_8;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_9);
lean_dec(x_6);
x_2 = x_8;
goto _start;
}
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_Server_findModuleRefs___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
x_8 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
return x_8;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__1(x_1, x_9, x_10, x_11);
return x_12;
}
}
}
}
static lean_object* _init_l_Lean_Server_findModuleRefs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_findModuleRefs___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_findModuleRefs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Server_findModuleRefs___closed__1;
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_box(0);
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_findModuleRefs(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Server_findReferences(x_1, x_2);
x_6 = l_Lean_Server_combineIdents(x_2, x_5);
lean_dec(x_5);
x_7 = l_Lean_Server_dedupReferences(x_6, x_4);
lean_dec(x_6);
x_8 = l_Lean_Server_findModuleRefs___closed__1;
if (x_3 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_get_size(x_7);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_7);
x_12 = l_Lean_Server_findModuleRefs___closed__2;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_9, x_9);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_7);
x_14 = l_Lean_Server_findModuleRefs___closed__2;
return x_14;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = 0;
x_16 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_17 = l_Lean_Server_Reference_aliases___default___closed__1;
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2(x_7, x_15, x_16, x_17);
lean_dec(x_7);
x_19 = lean_box(0);
x_20 = lean_apply_2(x_8, x_18, x_19);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = lean_apply_2(x_8, x_7, x_21);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_findModuleRefs___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_findModuleRefs___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_findModuleRefs___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Server_findModuleRefs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Server_findModuleRefs(x_1, x_2, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_Lean_Server_References_empty___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_References_empty() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Server_References_empty___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_addIlean___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l_Lean_Name_hash___override(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_addIlean___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_addIlean___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_addIlean___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_addIlean___spec__3(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_addIlean___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_addIlean___spec__5(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_addIlean___spec__5(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Lean_Server_References_addIlean(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_array_get_size(x_11);
x_13 = l_Lean_Name_hash___override(x_6);
x_14 = 32;
x_15 = lean_uint64_shift_right(x_13, x_14);
x_16 = lean_uint64_xor(x_13, x_15);
x_17 = 16;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = lean_uint64_to_usize(x_19);
x_21 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_22 = 1;
x_23 = lean_usize_sub(x_21, x_22);
x_24 = lean_usize_land(x_20, x_23);
x_25 = lean_array_uget(x_11, x_24);
x_26 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(x_6, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_10, x_27);
lean_dec(x_10);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_6);
lean_ctor_set(x_29, 1, x_8);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_11, x_24, x_29);
x_31 = lean_unsigned_to_nat(4u);
x_32 = lean_nat_mul(x_28, x_31);
x_33 = lean_unsigned_to_nat(3u);
x_34 = lean_nat_div(x_32, x_33);
lean_dec(x_32);
x_35 = lean_array_get_size(x_30);
x_36 = lean_nat_dec_le(x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_addIlean___spec__2(x_30);
lean_ctor_set(x_5, 1, x_37);
lean_ctor_set(x_5, 0, x_28);
return x_1;
}
else
{
lean_ctor_set(x_5, 1, x_30);
lean_ctor_set(x_5, 0, x_28);
return x_1;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_box(0);
x_39 = lean_array_uset(x_11, x_24, x_38);
x_40 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_addIlean___spec__5(x_6, x_8, x_25);
x_41 = lean_array_uset(x_39, x_24, x_40);
lean_ctor_set(x_5, 1, x_41);
return x_1;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint64_t x_45; uint64_t x_46; uint64_t x_47; uint64_t x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; size_t x_52; size_t x_53; size_t x_54; size_t x_55; size_t x_56; lean_object* x_57; uint8_t x_58; 
x_42 = lean_ctor_get(x_5, 0);
x_43 = lean_ctor_get(x_5, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_5);
x_44 = lean_array_get_size(x_43);
x_45 = l_Lean_Name_hash___override(x_6);
x_46 = 32;
x_47 = lean_uint64_shift_right(x_45, x_46);
x_48 = lean_uint64_xor(x_45, x_47);
x_49 = 16;
x_50 = lean_uint64_shift_right(x_48, x_49);
x_51 = lean_uint64_xor(x_48, x_50);
x_52 = lean_uint64_to_usize(x_51);
x_53 = lean_usize_of_nat(x_44);
lean_dec(x_44);
x_54 = 1;
x_55 = lean_usize_sub(x_53, x_54);
x_56 = lean_usize_land(x_52, x_55);
x_57 = lean_array_uget(x_43, x_56);
x_58 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(x_6, x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_59 = lean_unsigned_to_nat(1u);
x_60 = lean_nat_add(x_42, x_59);
lean_dec(x_42);
x_61 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_61, 0, x_6);
lean_ctor_set(x_61, 1, x_8);
lean_ctor_set(x_61, 2, x_57);
x_62 = lean_array_uset(x_43, x_56, x_61);
x_63 = lean_unsigned_to_nat(4u);
x_64 = lean_nat_mul(x_60, x_63);
x_65 = lean_unsigned_to_nat(3u);
x_66 = lean_nat_div(x_64, x_65);
lean_dec(x_64);
x_67 = lean_array_get_size(x_62);
x_68 = lean_nat_dec_le(x_66, x_67);
lean_dec(x_67);
lean_dec(x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_addIlean___spec__2(x_62);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_60);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_1, 0, x_70);
return x_1;
}
else
{
lean_object* x_71; 
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_60);
lean_ctor_set(x_71, 1, x_62);
lean_ctor_set(x_1, 0, x_71);
return x_1;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_box(0);
x_73 = lean_array_uset(x_43, x_56, x_72);
x_74 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_addIlean___spec__5(x_6, x_8, x_57);
x_75 = lean_array_uset(x_73, x_56, x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_42);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_1, 0, x_76);
return x_1;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint64_t x_86; uint64_t x_87; uint64_t x_88; uint64_t x_89; uint64_t x_90; uint64_t x_91; uint64_t x_92; size_t x_93; size_t x_94; size_t x_95; size_t x_96; size_t x_97; lean_object* x_98; uint8_t x_99; 
x_77 = lean_ctor_get(x_1, 0);
x_78 = lean_ctor_get(x_1, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_1);
x_79 = lean_ctor_get(x_3, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_3, 2);
lean_inc(x_80);
lean_dec(x_3);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_2);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_ctor_get(x_77, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_77, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_84 = x_77;
} else {
 lean_dec_ref(x_77);
 x_84 = lean_box(0);
}
x_85 = lean_array_get_size(x_83);
x_86 = l_Lean_Name_hash___override(x_79);
x_87 = 32;
x_88 = lean_uint64_shift_right(x_86, x_87);
x_89 = lean_uint64_xor(x_86, x_88);
x_90 = 16;
x_91 = lean_uint64_shift_right(x_89, x_90);
x_92 = lean_uint64_xor(x_89, x_91);
x_93 = lean_uint64_to_usize(x_92);
x_94 = lean_usize_of_nat(x_85);
lean_dec(x_85);
x_95 = 1;
x_96 = lean_usize_sub(x_94, x_95);
x_97 = lean_usize_land(x_93, x_96);
x_98 = lean_array_uget(x_83, x_97);
x_99 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(x_79, x_98);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_100 = lean_unsigned_to_nat(1u);
x_101 = lean_nat_add(x_82, x_100);
lean_dec(x_82);
x_102 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_102, 0, x_79);
lean_ctor_set(x_102, 1, x_81);
lean_ctor_set(x_102, 2, x_98);
x_103 = lean_array_uset(x_83, x_97, x_102);
x_104 = lean_unsigned_to_nat(4u);
x_105 = lean_nat_mul(x_101, x_104);
x_106 = lean_unsigned_to_nat(3u);
x_107 = lean_nat_div(x_105, x_106);
lean_dec(x_105);
x_108 = lean_array_get_size(x_103);
x_109 = lean_nat_dec_le(x_107, x_108);
lean_dec(x_108);
lean_dec(x_107);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_addIlean___spec__2(x_103);
if (lean_is_scalar(x_84)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_84;
}
lean_ctor_set(x_111, 0, x_101);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_78);
return x_112;
}
else
{
lean_object* x_113; lean_object* x_114; 
if (lean_is_scalar(x_84)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_84;
}
lean_ctor_set(x_113, 0, x_101);
lean_ctor_set(x_113, 1, x_103);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_78);
return x_114;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_115 = lean_box(0);
x_116 = lean_array_uset(x_83, x_97, x_115);
x_117 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_addIlean___spec__5(x_79, x_81, x_98);
x_118 = lean_array_uset(x_116, x_97, x_117);
if (lean_is_scalar(x_84)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_84;
}
lean_ctor_set(x_119, 0, x_82);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_78);
return x_120;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2(x_1, x_7);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2(x_1, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_map___at_Lean_Server_References_removeIlean___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___at_Lean_Server_References_removeIlean___spec__3(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_List_map___at_Lean_Server_References_removeIlean___spec__3(x_9);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_removeIlean___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_1, 0);
lean_dec(x_7);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; size_t x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; uint8_t x_25; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
x_11 = lean_array_get_size(x_10);
x_12 = l_Lean_Name_hash___override(x_5);
x_13 = 32;
x_14 = lean_uint64_shift_right(x_12, x_13);
x_15 = lean_uint64_xor(x_12, x_14);
x_16 = 16;
x_17 = lean_uint64_shift_right(x_15, x_16);
x_18 = lean_uint64_xor(x_15, x_17);
x_19 = lean_uint64_to_usize(x_18);
x_20 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_21 = 1;
x_22 = lean_usize_sub(x_20, x_21);
x_23 = lean_usize_land(x_19, x_22);
x_24 = lean_array_uget(x_10, x_23);
x_25 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(x_5, x_24);
if (x_25 == 0)
{
lean_dec(x_24);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_box(0);
x_28 = lean_array_uset(x_10, x_23, x_27);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_9, x_29);
lean_dec(x_9);
x_31 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2(x_5, x_24);
x_32 = lean_array_uset(x_28, x_23, x_31);
lean_ctor_set(x_3, 1, x_32);
lean_ctor_set(x_3, 0, x_30);
x_2 = x_6;
goto _start;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint64_t x_37; uint64_t x_38; uint64_t x_39; uint64_t x_40; uint64_t x_41; uint64_t x_42; uint64_t x_43; size_t x_44; size_t x_45; size_t x_46; size_t x_47; size_t x_48; lean_object* x_49; uint8_t x_50; 
x_34 = lean_ctor_get(x_3, 0);
x_35 = lean_ctor_get(x_3, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_3);
x_36 = lean_array_get_size(x_35);
x_37 = l_Lean_Name_hash___override(x_5);
x_38 = 32;
x_39 = lean_uint64_shift_right(x_37, x_38);
x_40 = lean_uint64_xor(x_37, x_39);
x_41 = 16;
x_42 = lean_uint64_shift_right(x_40, x_41);
x_43 = lean_uint64_xor(x_40, x_42);
x_44 = lean_uint64_to_usize(x_43);
x_45 = lean_usize_of_nat(x_36);
lean_dec(x_36);
x_46 = 1;
x_47 = lean_usize_sub(x_45, x_46);
x_48 = lean_usize_land(x_44, x_47);
x_49 = lean_array_uget(x_35, x_48);
x_50 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(x_5, x_49);
if (x_50 == 0)
{
lean_object* x_51; 
lean_dec(x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_34);
lean_ctor_set(x_51, 1, x_35);
lean_ctor_set(x_1, 0, x_51);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_53 = lean_box(0);
x_54 = lean_array_uset(x_35, x_48, x_53);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_nat_sub(x_34, x_55);
lean_dec(x_34);
x_57 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2(x_5, x_49);
x_58 = lean_array_uset(x_54, x_48, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_1, 0, x_59);
x_2 = x_6;
goto _start;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint64_t x_68; uint64_t x_69; uint64_t x_70; uint64_t x_71; uint64_t x_72; uint64_t x_73; uint64_t x_74; size_t x_75; size_t x_76; size_t x_77; size_t x_78; size_t x_79; lean_object* x_80; uint8_t x_81; 
x_61 = lean_ctor_get(x_2, 0);
x_62 = lean_ctor_get(x_2, 1);
x_63 = lean_ctor_get(x_1, 1);
lean_inc(x_63);
lean_dec(x_1);
x_64 = lean_ctor_get(x_3, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_3, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_66 = x_3;
} else {
 lean_dec_ref(x_3);
 x_66 = lean_box(0);
}
x_67 = lean_array_get_size(x_65);
x_68 = l_Lean_Name_hash___override(x_61);
x_69 = 32;
x_70 = lean_uint64_shift_right(x_68, x_69);
x_71 = lean_uint64_xor(x_68, x_70);
x_72 = 16;
x_73 = lean_uint64_shift_right(x_71, x_72);
x_74 = lean_uint64_xor(x_71, x_73);
x_75 = lean_uint64_to_usize(x_74);
x_76 = lean_usize_of_nat(x_67);
lean_dec(x_67);
x_77 = 1;
x_78 = lean_usize_sub(x_76, x_77);
x_79 = lean_usize_land(x_75, x_78);
x_80 = lean_array_uget(x_65, x_79);
x_81 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_addIlean___spec__1(x_61, x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
lean_dec(x_80);
if (lean_is_scalar(x_66)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_66;
}
lean_ctor_set(x_82, 0, x_64);
lean_ctor_set(x_82, 1, x_65);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_63);
x_1 = x_83;
x_2 = x_62;
goto _start;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_85 = lean_box(0);
x_86 = lean_array_uset(x_65, x_79, x_85);
x_87 = lean_unsigned_to_nat(1u);
x_88 = lean_nat_sub(x_64, x_87);
lean_dec(x_64);
x_89 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2(x_61, x_80);
x_90 = lean_array_uset(x_86, x_79, x_89);
if (lean_is_scalar(x_66)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_66;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_63);
x_1 = x_92;
x_2 = x_62;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__1(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
uint8_t l_Lean_Server_References_removeIlean___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_string_dec_eq(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Server_References_removeIlean(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_alloc_closure((void*)(l_Lean_Server_References_removeIlean___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_box(0);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
x_10 = l_List_filter___rarg(x_3, x_5);
x_11 = l_List_map___at_Lean_Server_References_removeIlean___spec__3(x_10);
x_12 = l_List_foldl___at_Lean_Server_References_removeIlean___spec__4(x_1, x_11);
lean_dec(x_11);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_7, x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_6);
x_14 = l_List_filter___rarg(x_3, x_5);
x_15 = l_List_map___at_Lean_Server_References_removeIlean___spec__3(x_14);
x_16 = l_List_foldl___at_Lean_Server_References_removeIlean___spec__4(x_1, x_15);
lean_dec(x_15);
return x_16;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = 0;
x_18 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_19 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__5(x_6, x_17, x_18, x_5);
lean_dec(x_6);
x_20 = l_List_filter___rarg(x_3, x_19);
x_21 = l_List_map___at_Lean_Server_References_removeIlean___spec__3(x_20);
x_22 = l_List_foldl___at_Lean_Server_References_removeIlean___spec__4(x_1, x_21);
lean_dec(x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_removeIlean___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeIlean___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_Lean_Server_References_removeIlean___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Lean_Server_References_removeIlean___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_removeIlean___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_References_removeIlean___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Server_References_removeIlean___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 2);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_4, x_1);
if (x_7 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
lean_inc(x_5);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__3(uint64_t x_1, uint64_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
x_11 = lean_ctor_get(x_6, 2);
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
x_14 = lean_array_get_size(x_13);
x_15 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_9);
x_16 = lean_uint64_shift_right(x_15, x_1);
x_17 = lean_uint64_xor(x_15, x_16);
x_18 = lean_uint64_shift_right(x_17, x_2);
x_19 = lean_uint64_xor(x_17, x_18);
x_20 = lean_uint64_to_usize(x_19);
x_21 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_22 = lean_usize_sub(x_21, x_3);
x_23 = lean_usize_land(x_20, x_22);
x_24 = lean_array_uget(x_13, x_23);
x_25 = l_Lean_Lsp_RefInfo_empty;
x_26 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__2(x_9, x_25, x_24);
x_27 = l_Lean_Lsp_RefInfo_merge(x_26, x_10);
x_28 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(x_9, x_24);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_12, x_29);
lean_dec(x_12);
lean_ctor_set(x_6, 2, x_24);
lean_ctor_set(x_6, 1, x_27);
x_31 = lean_array_uset(x_13, x_23, x_6);
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_nat_mul(x_30, x_32);
x_34 = lean_unsigned_to_nat(3u);
x_35 = lean_nat_div(x_33, x_34);
lean_dec(x_33);
x_36 = lean_array_get_size(x_31);
x_37 = lean_nat_dec_le(x_35, x_36);
lean_dec(x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Lsp_instFromJsonModuleRefs___spec__2(x_31);
lean_ctor_set(x_5, 1, x_38);
lean_ctor_set(x_5, 0, x_30);
x_6 = x_11;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_31);
lean_ctor_set(x_5, 0, x_30);
x_6 = x_11;
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_6);
lean_inc(x_4);
x_41 = lean_array_uset(x_13, x_23, x_4);
x_42 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Lsp_instFromJsonModuleRefs___spec__5(x_9, x_27, x_24);
x_43 = lean_array_uset(x_41, x_23, x_42);
lean_ctor_set(x_5, 1, x_43);
x_6 = x_11;
goto _start;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; size_t x_56; size_t x_57; size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_45 = lean_ctor_get(x_6, 0);
x_46 = lean_ctor_get(x_6, 1);
x_47 = lean_ctor_get(x_6, 2);
x_48 = lean_ctor_get(x_5, 0);
x_49 = lean_ctor_get(x_5, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_5);
x_50 = lean_array_get_size(x_49);
x_51 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_45);
x_52 = lean_uint64_shift_right(x_51, x_1);
x_53 = lean_uint64_xor(x_51, x_52);
x_54 = lean_uint64_shift_right(x_53, x_2);
x_55 = lean_uint64_xor(x_53, x_54);
x_56 = lean_uint64_to_usize(x_55);
x_57 = lean_usize_of_nat(x_50);
lean_dec(x_50);
x_58 = lean_usize_sub(x_57, x_3);
x_59 = lean_usize_land(x_56, x_58);
x_60 = lean_array_uget(x_49, x_59);
x_61 = l_Lean_Lsp_RefInfo_empty;
x_62 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__2(x_45, x_61, x_60);
x_63 = l_Lean_Lsp_RefInfo_merge(x_62, x_46);
x_64 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(x_45, x_60);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_add(x_48, x_65);
lean_dec(x_48);
lean_ctor_set(x_6, 2, x_60);
lean_ctor_set(x_6, 1, x_63);
x_67 = lean_array_uset(x_49, x_59, x_6);
x_68 = lean_unsigned_to_nat(4u);
x_69 = lean_nat_mul(x_66, x_68);
x_70 = lean_unsigned_to_nat(3u);
x_71 = lean_nat_div(x_69, x_70);
lean_dec(x_69);
x_72 = lean_array_get_size(x_67);
x_73 = lean_nat_dec_le(x_71, x_72);
lean_dec(x_72);
lean_dec(x_71);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
x_74 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Lsp_instFromJsonModuleRefs___spec__2(x_67);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_66);
lean_ctor_set(x_75, 1, x_74);
x_5 = x_75;
x_6 = x_47;
goto _start;
}
else
{
lean_object* x_77; 
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_66);
lean_ctor_set(x_77, 1, x_67);
x_5 = x_77;
x_6 = x_47;
goto _start;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_free_object(x_6);
lean_inc(x_4);
x_79 = lean_array_uset(x_49, x_59, x_4);
x_80 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Lsp_instFromJsonModuleRefs___spec__5(x_45, x_63, x_60);
x_81 = lean_array_uset(x_79, x_59, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_48);
lean_ctor_set(x_82, 1, x_81);
x_5 = x_82;
x_6 = x_47;
goto _start;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint64_t x_91; uint64_t x_92; uint64_t x_93; uint64_t x_94; uint64_t x_95; size_t x_96; size_t x_97; size_t x_98; size_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_84 = lean_ctor_get(x_6, 0);
x_85 = lean_ctor_get(x_6, 1);
x_86 = lean_ctor_get(x_6, 2);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_6);
x_87 = lean_ctor_get(x_5, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_5, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_89 = x_5;
} else {
 lean_dec_ref(x_5);
 x_89 = lean_box(0);
}
x_90 = lean_array_get_size(x_88);
x_91 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_84);
x_92 = lean_uint64_shift_right(x_91, x_1);
x_93 = lean_uint64_xor(x_91, x_92);
x_94 = lean_uint64_shift_right(x_93, x_2);
x_95 = lean_uint64_xor(x_93, x_94);
x_96 = lean_uint64_to_usize(x_95);
x_97 = lean_usize_of_nat(x_90);
lean_dec(x_90);
x_98 = lean_usize_sub(x_97, x_3);
x_99 = lean_usize_land(x_96, x_98);
x_100 = lean_array_uget(x_88, x_99);
x_101 = l_Lean_Lsp_RefInfo_empty;
x_102 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__2(x_84, x_101, x_100);
x_103 = l_Lean_Lsp_RefInfo_merge(x_102, x_85);
x_104 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Lsp_instFromJsonModuleRefs___spec__1(x_84, x_100);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_105 = lean_unsigned_to_nat(1u);
x_106 = lean_nat_add(x_87, x_105);
lean_dec(x_87);
x_107 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_107, 0, x_84);
lean_ctor_set(x_107, 1, x_103);
lean_ctor_set(x_107, 2, x_100);
x_108 = lean_array_uset(x_88, x_99, x_107);
x_109 = lean_unsigned_to_nat(4u);
x_110 = lean_nat_mul(x_106, x_109);
x_111 = lean_unsigned_to_nat(3u);
x_112 = lean_nat_div(x_110, x_111);
lean_dec(x_110);
x_113 = lean_array_get_size(x_108);
x_114 = lean_nat_dec_le(x_112, x_113);
lean_dec(x_113);
lean_dec(x_112);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Lsp_instFromJsonModuleRefs___spec__2(x_108);
if (lean_is_scalar(x_89)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_89;
}
lean_ctor_set(x_116, 0, x_106);
lean_ctor_set(x_116, 1, x_115);
x_5 = x_116;
x_6 = x_86;
goto _start;
}
else
{
lean_object* x_118; 
if (lean_is_scalar(x_89)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_89;
}
lean_ctor_set(x_118, 0, x_106);
lean_ctor_set(x_118, 1, x_108);
x_5 = x_118;
x_6 = x_86;
goto _start;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_inc(x_4);
x_120 = lean_array_uset(x_88, x_99, x_4);
x_121 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Lsp_instFromJsonModuleRefs___spec__5(x_84, x_103, x_100);
x_122 = lean_array_uset(x_120, x_99, x_121);
if (lean_is_scalar(x_89)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_89;
}
lean_ctor_set(x_123, 0, x_87);
lean_ctor_set(x_123, 1, x_122);
x_5 = x_123;
x_6 = x_86;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l_Lean_Name_hash___override(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_updateWorkerRefs___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_updateWorkerRefs___spec__6(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
lean_inc(x_5);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__10(uint64_t x_1, uint64_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_eq(x_6, x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_array_uget(x_5, x_6);
lean_inc(x_4);
x_11 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__3(x_1, x_2, x_3, x_4, x_8, x_10);
x_12 = 1;
x_13 = lean_usize_add(x_6, x_12);
x_6 = x_13;
x_8 = x_11;
goto _start;
}
else
{
lean_dec(x_4);
return x_8;
}
}
}
lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, size_t x_9, lean_object* x_10, uint64_t x_11, uint64_t x_12, size_t x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = lean_nat_dec_eq(x_1, x_2);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_16 = lean_box(0);
x_17 = lean_apply_1(x_3, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_49; 
lean_dec(x_3);
x_18 = lean_box(0);
x_19 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
lean_inc(x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_lt(x_23, x_22);
x_49 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__9(x_5, x_20, x_6);
lean_dec(x_20);
if (x_24 == 0)
{
lean_object* x_50; 
lean_dec(x_22);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_25 = x_50;
goto block_48;
}
else
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_nat_dec_le(x_22, x_22);
if (x_52 == 0)
{
lean_dec(x_22);
x_25 = x_51;
goto block_48;
}
else
{
size_t x_53; size_t x_54; lean_object* x_55; 
x_53 = 0;
x_54 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_55 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__10(x_11, x_12, x_13, x_18, x_21, x_53, x_54, x_51);
x_25 = x_55;
goto block_48;
}
}
block_48:
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_5, x_6);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_7, x_28);
lean_dec(x_7);
x_30 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_26);
lean_ctor_set(x_30, 2, x_6);
x_31 = lean_array_uset(x_8, x_9, x_30);
x_32 = lean_unsigned_to_nat(4u);
x_33 = lean_nat_mul(x_29, x_32);
x_34 = lean_unsigned_to_nat(3u);
x_35 = lean_nat_div(x_33, x_34);
lean_dec(x_33);
x_36 = lean_array_get_size(x_31);
x_37 = lean_nat_dec_le(x_35, x_36);
lean_dec(x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(x_31);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_29);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_10);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_29);
lean_ctor_set(x_41, 1, x_31);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_10);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_array_uset(x_8, x_9, x_18);
x_44 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_5, x_26, x_6);
x_45 = lean_array_uset(x_43, x_9, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_7);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_10);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
lean_object* l_Lean_Server_References_updateWorkerRefs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; size_t x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
x_11 = lean_array_get_size(x_10);
x_12 = l_Lean_Name_hash___override(x_2);
x_13 = 32;
x_14 = lean_uint64_shift_right(x_12, x_13);
x_15 = lean_uint64_xor(x_12, x_14);
x_16 = 16;
x_17 = lean_uint64_shift_right(x_15, x_16);
x_18 = lean_uint64_xor(x_15, x_17);
x_19 = lean_uint64_to_usize(x_18);
x_20 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_21 = 1;
x_22 = lean_usize_sub(x_20, x_21);
x_23 = lean_usize_land(x_19, x_22);
x_24 = lean_array_uget(x_10, x_23);
x_25 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(x_2, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_dec(x_24);
lean_free_object(x_6);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_1);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_1, 1);
lean_dec(x_27);
x_28 = lean_ctor_get(x_1, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
lean_dec(x_25);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_dec(x_32);
x_33 = lean_nat_dec_lt(x_31, x_3);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_free_object(x_29);
lean_free_object(x_1);
lean_free_object(x_6);
x_34 = lean_box(0);
x_35 = l_Lean_Server_References_updateWorkerRefs___lambda__1(x_3, x_31, x_5, x_4, x_2, x_24, x_9, x_10, x_23, x_7, x_13, x_16, x_21, x_34);
lean_dec(x_4);
lean_dec(x_31);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_31);
lean_dec(x_5);
lean_ctor_set(x_29, 1, x_4);
lean_ctor_set(x_29, 0, x_3);
x_36 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_2, x_24);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_9, x_37);
lean_dec(x_9);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_2);
lean_ctor_set(x_39, 1, x_29);
lean_ctor_set(x_39, 2, x_24);
x_40 = lean_array_uset(x_10, x_23, x_39);
x_41 = lean_unsigned_to_nat(4u);
x_42 = lean_nat_mul(x_38, x_41);
x_43 = lean_unsigned_to_nat(3u);
x_44 = lean_nat_div(x_42, x_43);
lean_dec(x_42);
x_45 = lean_array_get_size(x_40);
x_46 = lean_nat_dec_le(x_44, x_45);
lean_dec(x_45);
lean_dec(x_44);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(x_40);
lean_ctor_set(x_6, 1, x_47);
lean_ctor_set(x_6, 0, x_38);
return x_1;
}
else
{
lean_ctor_set(x_6, 1, x_40);
lean_ctor_set(x_6, 0, x_38);
return x_1;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_box(0);
x_49 = lean_array_uset(x_10, x_23, x_48);
x_50 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_2, x_29, x_24);
x_51 = lean_array_uset(x_49, x_23, x_50);
lean_ctor_set(x_6, 1, x_51);
return x_1;
}
}
}
else
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_29, 0);
lean_inc(x_52);
lean_dec(x_29);
x_53 = lean_nat_dec_lt(x_52, x_3);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_free_object(x_1);
lean_free_object(x_6);
x_54 = lean_box(0);
x_55 = l_Lean_Server_References_updateWorkerRefs___lambda__1(x_3, x_52, x_5, x_4, x_2, x_24, x_9, x_10, x_23, x_7, x_13, x_16, x_21, x_54);
lean_dec(x_4);
lean_dec(x_52);
return x_55;
}
else
{
lean_object* x_56; uint8_t x_57; 
lean_dec(x_52);
lean_dec(x_5);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_3);
lean_ctor_set(x_56, 1, x_4);
x_57 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_2, x_24);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_nat_add(x_9, x_58);
lean_dec(x_9);
x_60 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_60, 0, x_2);
lean_ctor_set(x_60, 1, x_56);
lean_ctor_set(x_60, 2, x_24);
x_61 = lean_array_uset(x_10, x_23, x_60);
x_62 = lean_unsigned_to_nat(4u);
x_63 = lean_nat_mul(x_59, x_62);
x_64 = lean_unsigned_to_nat(3u);
x_65 = lean_nat_div(x_63, x_64);
lean_dec(x_63);
x_66 = lean_array_get_size(x_61);
x_67 = lean_nat_dec_le(x_65, x_66);
lean_dec(x_66);
lean_dec(x_65);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(x_61);
lean_ctor_set(x_6, 1, x_68);
lean_ctor_set(x_6, 0, x_59);
return x_1;
}
else
{
lean_ctor_set(x_6, 1, x_61);
lean_ctor_set(x_6, 0, x_59);
return x_1;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_box(0);
x_70 = lean_array_uset(x_10, x_23, x_69);
x_71 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_2, x_56, x_24);
x_72 = lean_array_uset(x_70, x_23, x_71);
lean_ctor_set(x_6, 1, x_72);
return x_1;
}
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
lean_dec(x_1);
x_73 = lean_ctor_get(x_25, 0);
lean_inc(x_73);
lean_dec(x_25);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_75 = x_73;
} else {
 lean_dec_ref(x_73);
 x_75 = lean_box(0);
}
x_76 = lean_nat_dec_lt(x_74, x_3);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_75);
lean_free_object(x_6);
x_77 = lean_box(0);
x_78 = l_Lean_Server_References_updateWorkerRefs___lambda__1(x_3, x_74, x_5, x_4, x_2, x_24, x_9, x_10, x_23, x_7, x_13, x_16, x_21, x_77);
lean_dec(x_4);
lean_dec(x_74);
return x_78;
}
else
{
lean_object* x_79; uint8_t x_80; 
lean_dec(x_74);
lean_dec(x_5);
if (lean_is_scalar(x_75)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_75;
}
lean_ctor_set(x_79, 0, x_3);
lean_ctor_set(x_79, 1, x_4);
x_80 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_2, x_24);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_81 = lean_unsigned_to_nat(1u);
x_82 = lean_nat_add(x_9, x_81);
lean_dec(x_9);
x_83 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_83, 0, x_2);
lean_ctor_set(x_83, 1, x_79);
lean_ctor_set(x_83, 2, x_24);
x_84 = lean_array_uset(x_10, x_23, x_83);
x_85 = lean_unsigned_to_nat(4u);
x_86 = lean_nat_mul(x_82, x_85);
x_87 = lean_unsigned_to_nat(3u);
x_88 = lean_nat_div(x_86, x_87);
lean_dec(x_86);
x_89 = lean_array_get_size(x_84);
x_90 = lean_nat_dec_le(x_88, x_89);
lean_dec(x_89);
lean_dec(x_88);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(x_84);
lean_ctor_set(x_6, 1, x_91);
lean_ctor_set(x_6, 0, x_82);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_7);
lean_ctor_set(x_92, 1, x_6);
return x_92;
}
else
{
lean_object* x_93; 
lean_ctor_set(x_6, 1, x_84);
lean_ctor_set(x_6, 0, x_82);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_7);
lean_ctor_set(x_93, 1, x_6);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_94 = lean_box(0);
x_95 = lean_array_uset(x_10, x_23, x_94);
x_96 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_2, x_79, x_24);
x_97 = lean_array_uset(x_95, x_23, x_96);
lean_ctor_set(x_6, 1, x_97);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_7);
lean_ctor_set(x_98, 1, x_6);
return x_98;
}
}
}
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; uint64_t x_102; uint64_t x_103; uint64_t x_104; uint64_t x_105; uint64_t x_106; uint64_t x_107; uint64_t x_108; size_t x_109; size_t x_110; size_t x_111; size_t x_112; size_t x_113; lean_object* x_114; lean_object* x_115; 
x_99 = lean_ctor_get(x_6, 0);
x_100 = lean_ctor_get(x_6, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_6);
x_101 = lean_array_get_size(x_100);
x_102 = l_Lean_Name_hash___override(x_2);
x_103 = 32;
x_104 = lean_uint64_shift_right(x_102, x_103);
x_105 = lean_uint64_xor(x_102, x_104);
x_106 = 16;
x_107 = lean_uint64_shift_right(x_105, x_106);
x_108 = lean_uint64_xor(x_105, x_107);
x_109 = lean_uint64_to_usize(x_108);
x_110 = lean_usize_of_nat(x_101);
lean_dec(x_101);
x_111 = 1;
x_112 = lean_usize_sub(x_110, x_111);
x_113 = lean_usize_land(x_109, x_112);
x_114 = lean_array_uget(x_100, x_113);
x_115 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(x_2, x_114);
if (lean_obj_tag(x_115) == 0)
{
lean_dec(x_114);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_116 = x_1;
} else {
 lean_dec_ref(x_1);
 x_116 = lean_box(0);
}
x_117 = lean_ctor_get(x_115, 0);
lean_inc(x_117);
lean_dec(x_115);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_119 = x_117;
} else {
 lean_dec_ref(x_117);
 x_119 = lean_box(0);
}
x_120 = lean_nat_dec_lt(x_118, x_3);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_119);
lean_dec(x_116);
x_121 = lean_box(0);
x_122 = l_Lean_Server_References_updateWorkerRefs___lambda__1(x_3, x_118, x_5, x_4, x_2, x_114, x_99, x_100, x_113, x_7, x_103, x_106, x_111, x_121);
lean_dec(x_4);
lean_dec(x_118);
return x_122;
}
else
{
lean_object* x_123; uint8_t x_124; 
lean_dec(x_118);
lean_dec(x_5);
if (lean_is_scalar(x_119)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_119;
}
lean_ctor_set(x_123, 0, x_3);
lean_ctor_set(x_123, 1, x_4);
x_124 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_2, x_114);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_125 = lean_unsigned_to_nat(1u);
x_126 = lean_nat_add(x_99, x_125);
lean_dec(x_99);
x_127 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_127, 0, x_2);
lean_ctor_set(x_127, 1, x_123);
lean_ctor_set(x_127, 2, x_114);
x_128 = lean_array_uset(x_100, x_113, x_127);
x_129 = lean_unsigned_to_nat(4u);
x_130 = lean_nat_mul(x_126, x_129);
x_131 = lean_unsigned_to_nat(3u);
x_132 = lean_nat_div(x_130, x_131);
lean_dec(x_130);
x_133 = lean_array_get_size(x_128);
x_134 = lean_nat_dec_le(x_132, x_133);
lean_dec(x_133);
lean_dec(x_132);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(x_128);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_126);
lean_ctor_set(x_136, 1, x_135);
if (lean_is_scalar(x_116)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_116;
}
lean_ctor_set(x_137, 0, x_7);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; 
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_126);
lean_ctor_set(x_138, 1, x_128);
if (lean_is_scalar(x_116)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_116;
}
lean_ctor_set(x_139, 0, x_7);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_140 = lean_box(0);
x_141 = lean_array_uset(x_100, x_113, x_140);
x_142 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_2, x_123, x_114);
x_143 = lean_array_uset(x_141, x_113, x_142);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_99);
lean_ctor_set(x_144, 1, x_143);
if (lean_is_scalar(x_116)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_116;
}
lean_ctor_set(x_145, 0, x_7);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint64_t x_7; uint64_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_8 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_updateWorkerRefs___spec__3(x_7, x_8, x_9, x_4, x_5, x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_DHashMap_Internal_AssocList_getD___at_Lean_Server_References_updateWorkerRefs___spec__9(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint64_t x_9; uint64_t x_10; size_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_9 = lean_unbox_uint64(x_1);
lean_dec(x_1);
x_10 = lean_unbox_uint64(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_13 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_updateWorkerRefs___spec__10(x_9, x_10, x_11, x_4, x_5, x_12, x_13, x_8);
lean_dec(x_5);
return x_14;
}
}
lean_object* l_Lean_Server_References_updateWorkerRefs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
size_t x_15; uint64_t x_16; uint64_t x_17; size_t x_18; lean_object* x_19; 
x_15 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_16 = lean_unbox_uint64(x_11);
lean_dec(x_11);
x_17 = lean_unbox_uint64(x_12);
lean_dec(x_12);
x_18 = lean_unbox_usize(x_13);
lean_dec(x_13);
x_19 = l_Lean_Server_References_updateWorkerRefs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15, x_10, x_16, x_17, x_18, x_14);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_2);
return x_19;
}
}
lean_object* l_Lean_Server_References_finalizeWorkerRefs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; size_t x_20; size_t x_21; size_t x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 1);
x_12 = lean_array_get_size(x_11);
x_13 = l_Lean_Name_hash___override(x_4);
x_14 = 32;
x_15 = lean_uint64_shift_right(x_13, x_14);
x_16 = lean_uint64_xor(x_13, x_15);
x_17 = 16;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = lean_uint64_to_usize(x_19);
x_21 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_22 = 1;
x_23 = lean_usize_sub(x_21, x_22);
x_24 = lean_usize_land(x_20, x_23);
x_25 = lean_array_uget(x_11, x_24);
x_26 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_4, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_10, x_27);
lean_dec(x_10);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_4);
lean_ctor_set(x_29, 1, x_8);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_11, x_24, x_29);
x_31 = lean_unsigned_to_nat(4u);
x_32 = lean_nat_mul(x_28, x_31);
x_33 = lean_unsigned_to_nat(3u);
x_34 = lean_nat_div(x_32, x_33);
lean_dec(x_32);
x_35 = lean_array_get_size(x_30);
x_36 = lean_nat_dec_le(x_34, x_35);
lean_dec(x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(x_30);
lean_ctor_set(x_7, 1, x_37);
lean_ctor_set(x_7, 0, x_28);
return x_1;
}
else
{
lean_ctor_set(x_7, 1, x_30);
lean_ctor_set(x_7, 0, x_28);
return x_1;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_box(0);
x_39 = lean_array_uset(x_11, x_24, x_38);
x_40 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_4, x_8, x_25);
x_41 = lean_array_uset(x_39, x_24, x_40);
lean_ctor_set(x_7, 1, x_41);
return x_1;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint64_t x_45; uint64_t x_46; uint64_t x_47; uint64_t x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; size_t x_52; size_t x_53; size_t x_54; size_t x_55; size_t x_56; lean_object* x_57; uint8_t x_58; 
x_42 = lean_ctor_get(x_7, 0);
x_43 = lean_ctor_get(x_7, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_7);
x_44 = lean_array_get_size(x_43);
x_45 = l_Lean_Name_hash___override(x_4);
x_46 = 32;
x_47 = lean_uint64_shift_right(x_45, x_46);
x_48 = lean_uint64_xor(x_45, x_47);
x_49 = 16;
x_50 = lean_uint64_shift_right(x_48, x_49);
x_51 = lean_uint64_xor(x_48, x_50);
x_52 = lean_uint64_to_usize(x_51);
x_53 = lean_usize_of_nat(x_44);
lean_dec(x_44);
x_54 = 1;
x_55 = lean_usize_sub(x_53, x_54);
x_56 = lean_usize_land(x_52, x_55);
x_57 = lean_array_uget(x_43, x_56);
x_58 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_4, x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_59 = lean_unsigned_to_nat(1u);
x_60 = lean_nat_add(x_42, x_59);
lean_dec(x_42);
x_61 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_61, 0, x_4);
lean_ctor_set(x_61, 1, x_8);
lean_ctor_set(x_61, 2, x_57);
x_62 = lean_array_uset(x_43, x_56, x_61);
x_63 = lean_unsigned_to_nat(4u);
x_64 = lean_nat_mul(x_60, x_63);
x_65 = lean_unsigned_to_nat(3u);
x_66 = lean_nat_div(x_64, x_65);
lean_dec(x_64);
x_67 = lean_array_get_size(x_62);
x_68 = lean_nat_dec_le(x_66, x_67);
lean_dec(x_67);
lean_dec(x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(x_62);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_60);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_1, 1, x_70);
return x_1;
}
else
{
lean_object* x_71; 
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_60);
lean_ctor_set(x_71, 1, x_62);
lean_ctor_set(x_1, 1, x_71);
return x_1;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_box(0);
x_73 = lean_array_uset(x_43, x_56, x_72);
x_74 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_4, x_8, x_57);
x_75 = lean_array_uset(x_73, x_56, x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_42);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_1, 1, x_76);
return x_1;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint64_t x_84; uint64_t x_85; uint64_t x_86; uint64_t x_87; uint64_t x_88; uint64_t x_89; uint64_t x_90; size_t x_91; size_t x_92; size_t x_93; size_t x_94; size_t x_95; lean_object* x_96; uint8_t x_97; 
x_77 = lean_ctor_get(x_1, 0);
x_78 = lean_ctor_get(x_1, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_1);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_2);
lean_ctor_set(x_79, 1, x_3);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_82 = x_78;
} else {
 lean_dec_ref(x_78);
 x_82 = lean_box(0);
}
x_83 = lean_array_get_size(x_81);
x_84 = l_Lean_Name_hash___override(x_4);
x_85 = 32;
x_86 = lean_uint64_shift_right(x_84, x_85);
x_87 = lean_uint64_xor(x_84, x_86);
x_88 = 16;
x_89 = lean_uint64_shift_right(x_87, x_88);
x_90 = lean_uint64_xor(x_87, x_89);
x_91 = lean_uint64_to_usize(x_90);
x_92 = lean_usize_of_nat(x_83);
lean_dec(x_83);
x_93 = 1;
x_94 = lean_usize_sub(x_92, x_93);
x_95 = lean_usize_land(x_91, x_94);
x_96 = lean_array_uget(x_81, x_95);
x_97 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_4, x_96);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_98 = lean_unsigned_to_nat(1u);
x_99 = lean_nat_add(x_80, x_98);
lean_dec(x_80);
x_100 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_100, 0, x_4);
lean_ctor_set(x_100, 1, x_79);
lean_ctor_set(x_100, 2, x_96);
x_101 = lean_array_uset(x_81, x_95, x_100);
x_102 = lean_unsigned_to_nat(4u);
x_103 = lean_nat_mul(x_99, x_102);
x_104 = lean_unsigned_to_nat(3u);
x_105 = lean_nat_div(x_103, x_104);
lean_dec(x_103);
x_106 = lean_array_get_size(x_101);
x_107 = lean_nat_dec_le(x_105, x_106);
lean_dec(x_106);
lean_dec(x_105);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_updateWorkerRefs___spec__5(x_101);
if (lean_is_scalar(x_82)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_82;
}
lean_ctor_set(x_109, 0, x_99);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_77);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; 
if (lean_is_scalar(x_82)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_82;
}
lean_ctor_set(x_111, 0, x_99);
lean_ctor_set(x_111, 1, x_101);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_77);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_113 = lean_box(0);
x_114 = lean_array_uset(x_81, x_95, x_113);
x_115 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_updateWorkerRefs___spec__8(x_4, x_79, x_96);
x_116 = lean_array_uset(x_114, x_95, x_115);
if (lean_is_scalar(x_82)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_82;
}
lean_ctor_set(x_117, 0, x_80);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_77);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
}
lean_object* l_Lean_Server_References_finalizeWorkerRefs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash___override(x_2);
x_9 = 32;
x_10 = lean_uint64_shift_right(x_8, x_9);
x_11 = lean_uint64_xor(x_8, x_10);
x_12 = 16;
x_13 = lean_uint64_shift_right(x_11, x_12);
x_14 = lean_uint64_xor(x_11, x_13);
x_15 = lean_uint64_to_usize(x_14);
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 1;
x_18 = lean_usize_sub(x_16, x_17);
x_19 = lean_usize_land(x_15, x_18);
x_20 = lean_array_uget(x_6, x_19);
lean_dec(x_6);
x_21 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_updateWorkerRefs___spec__1(x_2, x_20);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Server_References_finalizeWorkerRefs___lambda__1(x_1, x_3, x_4, x_2, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_nat_dec_lt(x_3, x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_box(0);
x_28 = l_Lean_Server_References_finalizeWorkerRefs___lambda__1(x_1, x_3, x_4, x_2, x_27);
return x_28;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
}
lean_object* l_Lean_Server_References_finalizeWorkerRefs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Server_References_finalizeWorkerRefs___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_name_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_1, x_7);
lean_ctor_set(x_2, 2, x_9);
return x_2;
}
else
{
lean_free_object(x_2);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = lean_name_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_1, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
return x_12;
}
}
}
}
}
lean_object* l_Lean_Server_References_removeWorkerRefs(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; size_t x_20; lean_object* x_21; uint8_t x_22; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_7);
x_9 = l_Lean_Name_hash___override(x_2);
x_10 = 32;
x_11 = lean_uint64_shift_right(x_9, x_10);
x_12 = lean_uint64_xor(x_9, x_11);
x_13 = 16;
x_14 = lean_uint64_shift_right(x_12, x_13);
x_15 = lean_uint64_xor(x_12, x_14);
x_16 = lean_uint64_to_usize(x_15);
x_17 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_18 = 1;
x_19 = lean_usize_sub(x_17, x_18);
x_20 = lean_usize_land(x_16, x_19);
x_21 = lean_array_uget(x_7, x_20);
x_22 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_2, x_21);
if (x_22 == 0)
{
lean_dec(x_21);
return x_1;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_box(0);
x_24 = lean_array_uset(x_7, x_20, x_23);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_6, x_25);
lean_dec(x_6);
x_27 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_2, x_21);
x_28 = lean_array_uset(x_24, x_20, x_27);
lean_ctor_set(x_4, 1, x_28);
lean_ctor_set(x_4, 0, x_26);
return x_1;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint64_t x_32; uint64_t x_33; uint64_t x_34; uint64_t x_35; uint64_t x_36; uint64_t x_37; uint64_t x_38; size_t x_39; size_t x_40; size_t x_41; size_t x_42; size_t x_43; lean_object* x_44; uint8_t x_45; 
x_29 = lean_ctor_get(x_4, 0);
x_30 = lean_ctor_get(x_4, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_4);
x_31 = lean_array_get_size(x_30);
x_32 = l_Lean_Name_hash___override(x_2);
x_33 = 32;
x_34 = lean_uint64_shift_right(x_32, x_33);
x_35 = lean_uint64_xor(x_32, x_34);
x_36 = 16;
x_37 = lean_uint64_shift_right(x_35, x_36);
x_38 = lean_uint64_xor(x_35, x_37);
x_39 = lean_uint64_to_usize(x_38);
x_40 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_41 = 1;
x_42 = lean_usize_sub(x_40, x_41);
x_43 = lean_usize_land(x_39, x_42);
x_44 = lean_array_uget(x_30, x_43);
x_45 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_2, x_44);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_29);
lean_ctor_set(x_46, 1, x_30);
lean_ctor_set(x_1, 1, x_46);
return x_1;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_box(0);
x_48 = lean_array_uset(x_30, x_43, x_47);
x_49 = lean_unsigned_to_nat(1u);
x_50 = lean_nat_sub(x_29, x_49);
lean_dec(x_29);
x_51 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_2, x_44);
x_52 = lean_array_uset(x_48, x_43, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_1, 1, x_53);
return x_1;
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; size_t x_67; size_t x_68; size_t x_69; size_t x_70; size_t x_71; lean_object* x_72; uint8_t x_73; 
x_54 = lean_ctor_get(x_1, 1);
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
lean_inc(x_55);
lean_dec(x_1);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_58 = x_54;
} else {
 lean_dec_ref(x_54);
 x_58 = lean_box(0);
}
x_59 = lean_array_get_size(x_57);
x_60 = l_Lean_Name_hash___override(x_2);
x_61 = 32;
x_62 = lean_uint64_shift_right(x_60, x_61);
x_63 = lean_uint64_xor(x_60, x_62);
x_64 = 16;
x_65 = lean_uint64_shift_right(x_63, x_64);
x_66 = lean_uint64_xor(x_63, x_65);
x_67 = lean_uint64_to_usize(x_66);
x_68 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_69 = 1;
x_70 = lean_usize_sub(x_68, x_69);
x_71 = lean_usize_land(x_67, x_70);
x_72 = lean_array_uget(x_57, x_71);
x_73 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_updateWorkerRefs___spec__4(x_2, x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_72);
if (lean_is_scalar(x_58)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_58;
}
lean_ctor_set(x_74, 0, x_56);
lean_ctor_set(x_74, 1, x_57);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_55);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_76 = lean_box(0);
x_77 = lean_array_uset(x_57, x_71, x_76);
x_78 = lean_unsigned_to_nat(1u);
x_79 = lean_nat_sub(x_56, x_78);
lean_dec(x_56);
x_80 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_2, x_72);
x_81 = lean_array_uset(x_77, x_71, x_80);
if (lean_is_scalar(x_58)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_58;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_55);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_erase___at_Lean_Server_References_removeWorkerRefs___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Server_References_removeWorkerRefs___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Server_References_removeWorkerRefs(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash___override(x_4);
x_8 = 32;
x_9 = lean_uint64_shift_right(x_7, x_8);
x_10 = lean_uint64_xor(x_7, x_9);
x_11 = 16;
x_12 = lean_uint64_shift_right(x_10, x_11);
x_13 = lean_uint64_xor(x_10, x_12);
x_14 = lean_uint64_to_usize(x_13);
x_15 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_16 = 1;
x_17 = lean_usize_sub(x_15, x_16);
x_18 = lean_usize_land(x_14, x_17);
x_19 = lean_array_uget(x_1, x_18);
lean_ctor_set(x_2, 2, x_19);
x_20 = lean_array_uset(x_1, x_18, x_2);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_2, 0);
x_23 = lean_ctor_get(x_2, 1);
x_24 = lean_ctor_get(x_2, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_2);
x_25 = lean_array_get_size(x_1);
x_26 = l_Lean_Name_hash___override(x_22);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget(x_1, x_37);
x_39 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_23);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_array_uset(x_1, x_37, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_allRefs___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__4(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_allRefs___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_mk_array(x_4, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Std_DHashMap_Internal_Raw_u2080_expand_go___at_Lean_Server_References_allRefs___spec__3(x_7, x_1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_allRefs___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_allRefs___spec__5(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_allRefs___spec__5(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__8(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = lean_usize_add(x_3, x_8);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_array_get_size(x_15);
x_17 = l_Lean_Name_hash___override(x_11);
x_18 = 32;
x_19 = lean_uint64_shift_right(x_17, x_18);
x_20 = lean_uint64_xor(x_17, x_19);
x_21 = 16;
x_22 = lean_uint64_shift_right(x_20, x_21);
x_23 = lean_uint64_xor(x_20, x_22);
x_24 = lean_uint64_to_usize(x_23);
x_25 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_26 = lean_usize_sub(x_25, x_8);
x_27 = lean_usize_land(x_24, x_26);
x_28 = lean_array_uget(x_15, x_27);
x_29 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1(x_11, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_14, x_30);
lean_dec(x_14);
x_32 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_32, 0, x_11);
lean_ctor_set(x_32, 1, x_12);
lean_ctor_set(x_32, 2, x_28);
x_33 = lean_array_uset(x_15, x_27, x_32);
x_34 = lean_unsigned_to_nat(4u);
x_35 = lean_nat_mul(x_31, x_34);
x_36 = lean_unsigned_to_nat(3u);
x_37 = lean_nat_div(x_35, x_36);
lean_dec(x_35);
x_38 = lean_array_get_size(x_33);
x_39 = lean_nat_dec_le(x_37, x_38);
lean_dec(x_38);
lean_dec(x_37);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_allRefs___spec__2(x_33);
lean_ctor_set(x_5, 1, x_40);
lean_ctor_set(x_5, 0, x_31);
x_3 = x_9;
goto _start;
}
else
{
lean_ctor_set(x_5, 1, x_33);
lean_ctor_set(x_5, 0, x_31);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_inc(x_1);
x_43 = lean_array_uset(x_15, x_27, x_1);
x_44 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_allRefs___spec__5(x_11, x_12, x_28);
x_45 = lean_array_uset(x_43, x_27, x_44);
lean_ctor_set(x_5, 1, x_45);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; uint64_t x_56; size_t x_57; size_t x_58; size_t x_59; size_t x_60; lean_object* x_61; uint8_t x_62; 
x_47 = lean_ctor_get(x_5, 0);
x_48 = lean_ctor_get(x_5, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_5);
x_49 = lean_array_get_size(x_48);
x_50 = l_Lean_Name_hash___override(x_11);
x_51 = 32;
x_52 = lean_uint64_shift_right(x_50, x_51);
x_53 = lean_uint64_xor(x_50, x_52);
x_54 = 16;
x_55 = lean_uint64_shift_right(x_53, x_54);
x_56 = lean_uint64_xor(x_53, x_55);
x_57 = lean_uint64_to_usize(x_56);
x_58 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_59 = lean_usize_sub(x_58, x_8);
x_60 = lean_usize_land(x_57, x_59);
x_61 = lean_array_uget(x_48, x_60);
x_62 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1(x_11, x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_63 = lean_unsigned_to_nat(1u);
x_64 = lean_nat_add(x_47, x_63);
lean_dec(x_47);
x_65 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_65, 0, x_11);
lean_ctor_set(x_65, 1, x_12);
lean_ctor_set(x_65, 2, x_61);
x_66 = lean_array_uset(x_48, x_60, x_65);
x_67 = lean_unsigned_to_nat(4u);
x_68 = lean_nat_mul(x_64, x_67);
x_69 = lean_unsigned_to_nat(3u);
x_70 = lean_nat_div(x_68, x_69);
lean_dec(x_68);
x_71 = lean_array_get_size(x_66);
x_72 = lean_nat_dec_le(x_70, x_71);
lean_dec(x_71);
lean_dec(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_allRefs___spec__2(x_66);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_64);
lean_ctor_set(x_74, 1, x_73);
x_3 = x_9;
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; 
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_64);
lean_ctor_set(x_76, 1, x_66);
x_3 = x_9;
x_5 = x_76;
goto _start;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_inc(x_1);
x_78 = lean_array_uset(x_48, x_60, x_1);
x_79 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_allRefs___spec__5(x_11, x_12, x_61);
x_80 = lean_array_uset(x_78, x_60, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_47);
lean_ctor_set(x_81, 1, x_80);
x_3 = x_9;
x_5 = x_81;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__9(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__7(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__10(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = lean_usize_add(x_2, x_7);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; lean_object* x_27; uint8_t x_28; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_array_get_size(x_14);
x_16 = l_Lean_Name_hash___override(x_10);
x_17 = 32;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = 16;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_25 = lean_usize_sub(x_24, x_7);
x_26 = lean_usize_land(x_23, x_25);
x_27 = lean_array_uget(x_14, x_26);
x_28 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1(x_10, x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_13, x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_31, 0, x_10);
lean_ctor_set(x_31, 1, x_11);
lean_ctor_set(x_31, 2, x_27);
x_32 = lean_array_uset(x_14, x_26, x_31);
x_33 = lean_unsigned_to_nat(4u);
x_34 = lean_nat_mul(x_30, x_33);
x_35 = lean_unsigned_to_nat(3u);
x_36 = lean_nat_div(x_34, x_35);
lean_dec(x_34);
x_37 = lean_array_get_size(x_32);
x_38 = lean_nat_dec_le(x_36, x_37);
lean_dec(x_37);
lean_dec(x_36);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_allRefs___spec__2(x_32);
lean_ctor_set(x_4, 1, x_39);
lean_ctor_set(x_4, 0, x_30);
x_2 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_4, 1, x_32);
lean_ctor_set(x_4, 0, x_30);
x_2 = x_8;
goto _start;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_box(0);
x_43 = lean_array_uset(x_14, x_26, x_42);
x_44 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_allRefs___spec__5(x_10, x_11, x_27);
x_45 = lean_array_uset(x_43, x_26, x_44);
lean_ctor_set(x_4, 1, x_45);
x_2 = x_8;
goto _start;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; uint64_t x_56; size_t x_57; size_t x_58; size_t x_59; size_t x_60; lean_object* x_61; uint8_t x_62; 
x_47 = lean_ctor_get(x_4, 0);
x_48 = lean_ctor_get(x_4, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_4);
x_49 = lean_array_get_size(x_48);
x_50 = l_Lean_Name_hash___override(x_10);
x_51 = 32;
x_52 = lean_uint64_shift_right(x_50, x_51);
x_53 = lean_uint64_xor(x_50, x_52);
x_54 = 16;
x_55 = lean_uint64_shift_right(x_53, x_54);
x_56 = lean_uint64_xor(x_53, x_55);
x_57 = lean_uint64_to_usize(x_56);
x_58 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_59 = lean_usize_sub(x_58, x_7);
x_60 = lean_usize_land(x_57, x_59);
x_61 = lean_array_uget(x_48, x_60);
x_62 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1(x_10, x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_63 = lean_unsigned_to_nat(1u);
x_64 = lean_nat_add(x_47, x_63);
lean_dec(x_47);
x_65 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_65, 0, x_10);
lean_ctor_set(x_65, 1, x_11);
lean_ctor_set(x_65, 2, x_61);
x_66 = lean_array_uset(x_48, x_60, x_65);
x_67 = lean_unsigned_to_nat(4u);
x_68 = lean_nat_mul(x_64, x_67);
x_69 = lean_unsigned_to_nat(3u);
x_70 = lean_nat_div(x_68, x_69);
lean_dec(x_68);
x_71 = lean_array_get_size(x_66);
x_72 = lean_nat_dec_le(x_70, x_71);
lean_dec(x_71);
lean_dec(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = l_Std_DHashMap_Internal_Raw_u2080_expand___at_Lean_Server_References_allRefs___spec__2(x_66);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_64);
lean_ctor_set(x_74, 1, x_73);
x_2 = x_8;
x_4 = x_74;
goto _start;
}
else
{
lean_object* x_76; 
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_64);
lean_ctor_set(x_76, 1, x_66);
x_2 = x_8;
x_4 = x_76;
goto _start;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_box(0);
x_79 = lean_array_uset(x_48, x_60, x_78);
x_80 = l_Std_DHashMap_Internal_AssocList_replace___at_Lean_Server_References_allRefs___spec__5(x_10, x_11, x_61);
x_81 = lean_array_uset(x_79, x_60, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_47);
lean_ctor_set(x_82, 1, x_81);
x_2 = x_8;
x_4 = x_82;
goto _start;
}
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__6(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_Server_References_allRefs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_29; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_3, 1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_8, 1);
x_10 = lean_array_get_size(x_9);
x_11 = lean_nat_dec_lt(x_6, x_10);
if (x_7 == 0)
{
lean_object* x_40; 
lean_dec(x_5);
x_40 = l_Lean_Server_Reference_aliases___default___closed__1;
x_29 = x_40;
goto block_39;
}
else
{
uint8_t x_41; 
x_41 = lean_nat_dec_le(x_5, x_5);
if (x_41 == 0)
{
lean_object* x_42; 
lean_dec(x_5);
x_42 = l_Lean_Server_Reference_aliases___default___closed__1;
x_29 = x_42;
goto block_39;
}
else
{
size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; 
x_43 = 0;
x_44 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_45 = l_Lean_Server_Reference_aliases___default___closed__1;
x_46 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11(x_4, x_43, x_44, x_45);
x_29 = x_46;
goto block_39;
}
}
block_28:
{
lean_object* x_13; 
if (x_11 == 0)
{
lean_object* x_21; 
lean_dec(x_10);
x_21 = l_Lean_Server_Reference_aliases___default___closed__1;
x_13 = x_21;
goto block_20;
}
else
{
uint8_t x_22; 
x_22 = lean_nat_dec_le(x_10, x_10);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_10);
x_23 = l_Lean_Server_Reference_aliases___default___closed__1;
x_13 = x_23;
goto block_20;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 0;
x_25 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_26 = l_Lean_Server_Reference_aliases___default___closed__1;
x_27 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__9(x_9, x_24, x_25, x_26);
x_13 = x_27;
goto block_20;
}
}
block_20:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_array_get_size(x_13);
x_15 = lean_nat_dec_lt(x_6, x_14);
if (x_15 == 0)
{
lean_dec(x_14);
lean_dec(x_13);
return x_12;
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_14, x_14);
if (x_16 == 0)
{
lean_dec(x_14);
lean_dec(x_13);
return x_12;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; 
x_17 = 0;
x_18 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_19 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__8(x_2, x_13, x_17, x_18, x_12);
lean_dec(x_13);
return x_19;
}
}
}
}
block_39:
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_array_get_size(x_29);
x_31 = lean_nat_dec_lt(x_6, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_30);
lean_dec(x_29);
x_32 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_12 = x_32;
goto block_28;
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_30, x_30);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_30);
lean_dec(x_29);
x_34 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_12 = x_34;
goto block_28;
}
else
{
size_t x_35; size_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = 0;
x_36 = lean_usize_of_nat(x_30);
lean_dec(x_30);
x_37 = l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3;
x_38 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__10(x_29, x_35, x_36, x_37);
lean_dec(x_29);
x_12 = x_38;
goto block_28;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_DHashMap_Internal_AssocList_contains___at_Lean_Server_References_allRefs___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__6(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefs___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__8(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__9(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__10(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefs___spec__11(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_References_allRefs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_References_allRefs(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_beqRefIdent____x40_Lean_Data_Lsp_Internal___hyg_44_(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefsFor___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lean", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_uget(x_3, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_array_get_size(x_14);
x_16 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_17 = 32;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = 16;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_25 = 1;
x_26 = lean_usize_sub(x_24, x_25);
x_27 = lean_usize_land(x_23, x_26);
x_28 = lean_array_uget(x_14, x_27);
lean_dec(x_14);
x_29 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_28);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
size_t x_30; 
lean_free_object(x_10);
lean_dec(x_13);
x_30 = lean_usize_add(x_5, x_25);
x_5 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_34 = l_Lean_SearchPath_findModuleWithExt(x_1, x_33, x_13, x_7);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; size_t x_37; 
lean_dec(x_32);
lean_free_object(x_10);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_usize_add(x_5, x_25);
x_5 = x_37;
x_7 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec(x_35);
x_41 = lean_io_realpath(x_40, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_System_Uri_pathToUri(x_42);
lean_ctor_set(x_10, 1, x_32);
lean_ctor_set(x_10, 0, x_44);
x_45 = lean_array_push(x_6, x_10);
x_46 = lean_usize_add(x_5, x_25);
x_5 = x_46;
x_6 = x_45;
x_7 = x_43;
goto _start;
}
else
{
uint8_t x_48; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_41);
if (x_48 == 0)
{
return x_41;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_41, 0);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_41);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_34);
if (x_52 == 0)
{
return x_34;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_34, 0);
x_54 = lean_ctor_get(x_34, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_34);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; size_t x_67; size_t x_68; size_t x_69; size_t x_70; size_t x_71; lean_object* x_72; lean_object* x_73; 
x_56 = lean_ctor_get(x_10, 1);
x_57 = lean_ctor_get(x_10, 0);
lean_inc(x_56);
lean_inc(x_57);
lean_dec(x_10);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_array_get_size(x_58);
x_60 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_61 = 32;
x_62 = lean_uint64_shift_right(x_60, x_61);
x_63 = lean_uint64_xor(x_60, x_62);
x_64 = 16;
x_65 = lean_uint64_shift_right(x_63, x_64);
x_66 = lean_uint64_xor(x_63, x_65);
x_67 = lean_uint64_to_usize(x_66);
x_68 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_69 = 1;
x_70 = lean_usize_sub(x_68, x_69);
x_71 = lean_usize_land(x_67, x_70);
x_72 = lean_array_uget(x_58, x_71);
lean_dec(x_58);
x_73 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_72);
lean_dec(x_72);
if (lean_obj_tag(x_73) == 0)
{
size_t x_74; 
lean_dec(x_57);
x_74 = lean_usize_add(x_5, x_69);
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_73, 0);
lean_inc(x_76);
lean_dec(x_73);
x_77 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_78 = l_Lean_SearchPath_findModuleWithExt(x_1, x_77, x_57, x_7);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; size_t x_81; 
lean_dec(x_76);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_usize_add(x_5, x_69);
x_5 = x_81;
x_7 = x_80;
goto _start;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
lean_dec(x_78);
x_84 = lean_ctor_get(x_79, 0);
lean_inc(x_84);
lean_dec(x_79);
x_85 = lean_io_realpath(x_84, x_83);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; size_t x_91; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_System_Uri_pathToUri(x_86);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_76);
x_90 = lean_array_push(x_6, x_89);
x_91 = lean_usize_add(x_5, x_69);
x_5 = x_91;
x_6 = x_90;
x_7 = x_87;
goto _start;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_93 = lean_ctor_get(x_85, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_85, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_95 = x_85;
} else {
 lean_dec_ref(x_85);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_97 = lean_ctor_get(x_78, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_78, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_99 = x_78;
} else {
 lean_dec_ref(x_78);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_uget(x_3, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_array_get_size(x_14);
x_16 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_17 = 32;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = 16;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_25 = 1;
x_26 = lean_usize_sub(x_24, x_25);
x_27 = lean_usize_land(x_23, x_26);
x_28 = lean_array_uget(x_14, x_27);
lean_dec(x_14);
x_29 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_28);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
size_t x_30; 
lean_free_object(x_10);
lean_dec(x_13);
x_30 = lean_usize_add(x_5, x_25);
x_5 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_34 = l_Lean_SearchPath_findModuleWithExt(x_1, x_33, x_13, x_7);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; size_t x_37; 
lean_dec(x_32);
lean_free_object(x_10);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_usize_add(x_5, x_25);
x_5 = x_37;
x_7 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec(x_35);
x_41 = lean_io_realpath(x_40, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_System_Uri_pathToUri(x_42);
lean_ctor_set(x_10, 1, x_32);
lean_ctor_set(x_10, 0, x_44);
x_45 = lean_array_push(x_6, x_10);
x_46 = lean_usize_add(x_5, x_25);
x_5 = x_46;
x_6 = x_45;
x_7 = x_43;
goto _start;
}
else
{
uint8_t x_48; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_41);
if (x_48 == 0)
{
return x_41;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_41, 0);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_41);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_34);
if (x_52 == 0)
{
return x_34;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_34, 0);
x_54 = lean_ctor_get(x_34, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_34);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; size_t x_67; size_t x_68; size_t x_69; size_t x_70; size_t x_71; lean_object* x_72; lean_object* x_73; 
x_56 = lean_ctor_get(x_10, 1);
x_57 = lean_ctor_get(x_10, 0);
lean_inc(x_56);
lean_inc(x_57);
lean_dec(x_10);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_array_get_size(x_58);
x_60 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_61 = 32;
x_62 = lean_uint64_shift_right(x_60, x_61);
x_63 = lean_uint64_xor(x_60, x_62);
x_64 = 16;
x_65 = lean_uint64_shift_right(x_63, x_64);
x_66 = lean_uint64_xor(x_63, x_65);
x_67 = lean_uint64_to_usize(x_66);
x_68 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_69 = 1;
x_70 = lean_usize_sub(x_68, x_69);
x_71 = lean_usize_land(x_67, x_70);
x_72 = lean_array_uget(x_58, x_71);
lean_dec(x_58);
x_73 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_72);
lean_dec(x_72);
if (lean_obj_tag(x_73) == 0)
{
size_t x_74; 
lean_dec(x_57);
x_74 = lean_usize_add(x_5, x_69);
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_73, 0);
lean_inc(x_76);
lean_dec(x_73);
x_77 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_78 = l_Lean_SearchPath_findModuleWithExt(x_1, x_77, x_57, x_7);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; size_t x_81; 
lean_dec(x_76);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_usize_add(x_5, x_69);
x_5 = x_81;
x_7 = x_80;
goto _start;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
lean_dec(x_78);
x_84 = lean_ctor_get(x_79, 0);
lean_inc(x_84);
lean_dec(x_79);
x_85 = lean_io_realpath(x_84, x_83);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; size_t x_91; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_System_Uri_pathToUri(x_86);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_76);
x_90 = lean_array_push(x_6, x_89);
x_91 = lean_usize_add(x_5, x_69);
x_5 = x_91;
x_6 = x_90;
x_7 = x_87;
goto _start;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_93 = lean_ctor_get(x_85, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_85, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_95 = x_85;
} else {
 lean_dec_ref(x_85);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_97 = lean_ctor_get(x_78, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_78, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_99 = x_78;
} else {
 lean_dec_ref(x_78);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefsFor___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefsFor___spec__2(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_uget(x_3, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_array_get_size(x_14);
x_16 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_17 = 32;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = 16;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_25 = 1;
x_26 = lean_usize_sub(x_24, x_25);
x_27 = lean_usize_land(x_23, x_26);
x_28 = lean_array_uget(x_14, x_27);
lean_dec(x_14);
x_29 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_28);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
size_t x_30; 
lean_free_object(x_10);
lean_dec(x_13);
x_30 = lean_usize_add(x_5, x_25);
x_5 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_34 = l_Lean_SearchPath_findModuleWithExt(x_1, x_33, x_13, x_7);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; size_t x_37; 
lean_dec(x_32);
lean_free_object(x_10);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_usize_add(x_5, x_25);
x_5 = x_37;
x_7 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec(x_35);
x_41 = lean_io_realpath(x_40, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_System_Uri_pathToUri(x_42);
lean_ctor_set(x_10, 1, x_32);
lean_ctor_set(x_10, 0, x_44);
x_45 = lean_array_push(x_6, x_10);
x_46 = lean_usize_add(x_5, x_25);
x_5 = x_46;
x_6 = x_45;
x_7 = x_43;
goto _start;
}
else
{
uint8_t x_48; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_41);
if (x_48 == 0)
{
return x_41;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_41, 0);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_41);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_34);
if (x_52 == 0)
{
return x_34;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_34, 0);
x_54 = lean_ctor_get(x_34, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_34);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; size_t x_67; size_t x_68; size_t x_69; size_t x_70; size_t x_71; lean_object* x_72; lean_object* x_73; 
x_56 = lean_ctor_get(x_10, 1);
x_57 = lean_ctor_get(x_10, 0);
lean_inc(x_56);
lean_inc(x_57);
lean_dec(x_10);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_array_get_size(x_58);
x_60 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_61 = 32;
x_62 = lean_uint64_shift_right(x_60, x_61);
x_63 = lean_uint64_xor(x_60, x_62);
x_64 = 16;
x_65 = lean_uint64_shift_right(x_63, x_64);
x_66 = lean_uint64_xor(x_63, x_65);
x_67 = lean_uint64_to_usize(x_66);
x_68 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_69 = 1;
x_70 = lean_usize_sub(x_68, x_69);
x_71 = lean_usize_land(x_67, x_70);
x_72 = lean_array_uget(x_58, x_71);
lean_dec(x_58);
x_73 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_72);
lean_dec(x_72);
if (lean_obj_tag(x_73) == 0)
{
size_t x_74; 
lean_dec(x_57);
x_74 = lean_usize_add(x_5, x_69);
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_73, 0);
lean_inc(x_76);
lean_dec(x_73);
x_77 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_78 = l_Lean_SearchPath_findModuleWithExt(x_1, x_77, x_57, x_7);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; size_t x_81; 
lean_dec(x_76);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_usize_add(x_5, x_69);
x_5 = x_81;
x_7 = x_80;
goto _start;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
lean_dec(x_78);
x_84 = lean_ctor_get(x_79, 0);
lean_inc(x_84);
lean_dec(x_79);
x_85 = lean_io_realpath(x_84, x_83);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; size_t x_91; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_System_Uri_pathToUri(x_86);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_76);
x_90 = lean_array_push(x_6, x_89);
x_91 = lean_usize_add(x_5, x_69);
x_5 = x_91;
x_6 = x_90;
x_7 = x_87;
goto _start;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_93 = lean_ctor_get(x_85, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_85, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_95 = x_85;
} else {
 lean_dec_ref(x_85);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_97 = lean_ctor_get(x_78, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_78, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_99 = x_78;
} else {
 lean_dec_ref(x_78);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_uget(x_3, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_array_get_size(x_14);
x_16 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_17 = 32;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = 16;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_25 = 1;
x_26 = lean_usize_sub(x_24, x_25);
x_27 = lean_usize_land(x_23, x_26);
x_28 = lean_array_uget(x_14, x_27);
lean_dec(x_14);
x_29 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_28);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
size_t x_30; 
lean_free_object(x_10);
lean_dec(x_13);
x_30 = lean_usize_add(x_5, x_25);
x_5 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_34 = l_Lean_SearchPath_findModuleWithExt(x_1, x_33, x_13, x_7);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; size_t x_37; 
lean_dec(x_32);
lean_free_object(x_10);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_usize_add(x_5, x_25);
x_5 = x_37;
x_7 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec(x_35);
x_41 = lean_io_realpath(x_40, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_System_Uri_pathToUri(x_42);
lean_ctor_set(x_10, 1, x_32);
lean_ctor_set(x_10, 0, x_44);
x_45 = lean_array_push(x_6, x_10);
x_46 = lean_usize_add(x_5, x_25);
x_5 = x_46;
x_6 = x_45;
x_7 = x_43;
goto _start;
}
else
{
uint8_t x_48; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_41);
if (x_48 == 0)
{
return x_41;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_41, 0);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_41);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_34);
if (x_52 == 0)
{
return x_34;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_34, 0);
x_54 = lean_ctor_get(x_34, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_34);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; size_t x_67; size_t x_68; size_t x_69; size_t x_70; size_t x_71; lean_object* x_72; lean_object* x_73; 
x_56 = lean_ctor_get(x_10, 1);
x_57 = lean_ctor_get(x_10, 0);
lean_inc(x_56);
lean_inc(x_57);
lean_dec(x_10);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_array_get_size(x_58);
x_60 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_61 = 32;
x_62 = lean_uint64_shift_right(x_60, x_61);
x_63 = lean_uint64_xor(x_60, x_62);
x_64 = 16;
x_65 = lean_uint64_shift_right(x_63, x_64);
x_66 = lean_uint64_xor(x_63, x_65);
x_67 = lean_uint64_to_usize(x_66);
x_68 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_69 = 1;
x_70 = lean_usize_sub(x_68, x_69);
x_71 = lean_usize_land(x_67, x_70);
x_72 = lean_array_uget(x_58, x_71);
lean_dec(x_58);
x_73 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_72);
lean_dec(x_72);
if (lean_obj_tag(x_73) == 0)
{
size_t x_74; 
lean_dec(x_57);
x_74 = lean_usize_add(x_5, x_69);
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_73, 0);
lean_inc(x_76);
lean_dec(x_73);
x_77 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_78 = l_Lean_SearchPath_findModuleWithExt(x_1, x_77, x_57, x_7);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; size_t x_81; 
lean_dec(x_76);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_usize_add(x_5, x_69);
x_5 = x_81;
x_7 = x_80;
goto _start;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
lean_dec(x_78);
x_84 = lean_ctor_get(x_79, 0);
lean_inc(x_84);
lean_dec(x_79);
x_85 = lean_io_realpath(x_84, x_83);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; size_t x_91; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_System_Uri_pathToUri(x_86);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_76);
x_90 = lean_array_push(x_6, x_89);
x_91 = lean_usize_add(x_5, x_69);
x_5 = x_91;
x_6 = x_90;
x_7 = x_87;
goto _start;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_93 = lean_ctor_get(x_85, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_85, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_95 = x_85;
} else {
 lean_dec_ref(x_85);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_97 = lean_ctor_get(x_78, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_78, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_99 = x_78;
} else {
 lean_dec_ref(x_78);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_5, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_uget(x_3, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; size_t x_23; size_t x_24; size_t x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_array_get_size(x_14);
x_16 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_17 = 32;
x_18 = lean_uint64_shift_right(x_16, x_17);
x_19 = lean_uint64_xor(x_16, x_18);
x_20 = 16;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = lean_uint64_to_usize(x_22);
x_24 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_25 = 1;
x_26 = lean_usize_sub(x_24, x_25);
x_27 = lean_usize_land(x_23, x_26);
x_28 = lean_array_uget(x_14, x_27);
lean_dec(x_14);
x_29 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_28);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
size_t x_30; 
lean_free_object(x_10);
lean_dec(x_13);
x_30 = lean_usize_add(x_5, x_25);
x_5 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_34 = l_Lean_SearchPath_findModuleWithExt(x_1, x_33, x_13, x_7);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; size_t x_37; 
lean_dec(x_32);
lean_free_object(x_10);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_usize_add(x_5, x_25);
x_5 = x_37;
x_7 = x_36;
goto _start;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec(x_35);
x_41 = lean_io_realpath(x_40, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_System_Uri_pathToUri(x_42);
lean_ctor_set(x_10, 1, x_32);
lean_ctor_set(x_10, 0, x_44);
x_45 = lean_array_push(x_6, x_10);
x_46 = lean_usize_add(x_5, x_25);
x_5 = x_46;
x_6 = x_45;
x_7 = x_43;
goto _start;
}
else
{
uint8_t x_48; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_41);
if (x_48 == 0)
{
return x_41;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_41, 0);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_41);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_32);
lean_free_object(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_34);
if (x_52 == 0)
{
return x_34;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_34, 0);
x_54 = lean_ctor_get(x_34, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_34);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; size_t x_67; size_t x_68; size_t x_69; size_t x_70; size_t x_71; lean_object* x_72; lean_object* x_73; 
x_56 = lean_ctor_get(x_10, 1);
x_57 = lean_ctor_get(x_10, 0);
lean_inc(x_56);
lean_inc(x_57);
lean_dec(x_10);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_array_get_size(x_58);
x_60 = l___private_Lean_Data_Lsp_Internal_0__Lean_Lsp_hashRefIdent____x40_Lean_Data_Lsp_Internal___hyg_157_(x_2);
x_61 = 32;
x_62 = lean_uint64_shift_right(x_60, x_61);
x_63 = lean_uint64_xor(x_60, x_62);
x_64 = 16;
x_65 = lean_uint64_shift_right(x_63, x_64);
x_66 = lean_uint64_xor(x_63, x_65);
x_67 = lean_uint64_to_usize(x_66);
x_68 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_69 = 1;
x_70 = lean_usize_sub(x_68, x_69);
x_71 = lean_usize_land(x_67, x_70);
x_72 = lean_array_uget(x_58, x_71);
lean_dec(x_58);
x_73 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_2, x_72);
lean_dec(x_72);
if (lean_obj_tag(x_73) == 0)
{
size_t x_74; 
lean_dec(x_57);
x_74 = lean_usize_add(x_5, x_69);
x_5 = x_74;
goto _start;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_73, 0);
lean_inc(x_76);
lean_dec(x_73);
x_77 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
lean_inc(x_1);
x_78 = l_Lean_SearchPath_findModuleWithExt(x_1, x_77, x_57, x_7);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; size_t x_81; 
lean_dec(x_76);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_usize_add(x_5, x_69);
x_5 = x_81;
x_7 = x_80;
goto _start;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
lean_dec(x_78);
x_84 = lean_ctor_get(x_79, 0);
lean_inc(x_84);
lean_dec(x_79);
x_85 = lean_io_realpath(x_84, x_83);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; size_t x_91; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_System_Uri_pathToUri(x_86);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_76);
x_90 = lean_array_push(x_6, x_89);
x_91 = lean_usize_add(x_5, x_69);
x_5 = x_91;
x_6 = x_90;
x_7 = x_87;
goto _start;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_93 = lean_ctor_get(x_85, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_85, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_95 = x_85;
} else {
 lean_dec_ref(x_85);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_76);
lean_dec(x_6);
lean_dec(x_1);
x_97 = lean_ctor_get(x_78, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_78, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_99 = x_78;
} else {
 lean_dec_ref(x_78);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
}
}
static size_t _init_l_Lean_Server_References_allRefsFor___closed__1() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lean_Server_Reference_aliases___default___closed__1;
x_2 = lean_array_size(x_1);
return x_2;
}
}
lean_object* l_Lean_Server_References_allRefsFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; 
x_5 = 0;
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Server_References_allRefs(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; size_t x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
x_11 = l_Lean_Server_Reference_aliases___default___closed__1;
x_12 = l_Lean_Server_References_allRefsFor___closed__1;
x_13 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3(x_2, x_3, x_11, x_12, x_5, x_11, x_4);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
x_22 = lean_nat_dec_le(x_8, x_8);
if (x_22 == 0)
{
lean_object* x_23; size_t x_24; lean_object* x_25; 
lean_dec(x_8);
lean_dec(x_7);
x_23 = l_Lean_Server_Reference_aliases___default___closed__1;
x_24 = l_Lean_Server_References_allRefsFor___closed__1;
x_25 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__4(x_2, x_3, x_23, x_24, x_5, x_23, x_4);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_25, 0);
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_25);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
size_t x_34; lean_object* x_35; lean_object* x_36; size_t x_37; lean_object* x_38; 
x_34 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_35 = l_Lean_Server_Reference_aliases___default___closed__1;
x_36 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefsFor___spec__5(x_7, x_5, x_34, x_35);
lean_dec(x_7);
x_37 = lean_array_size(x_36);
x_38 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__6(x_2, x_3, x_36, x_37, x_5, x_35, x_4);
lean_dec(x_36);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_38);
if (x_43 == 0)
{
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_38, 0);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_38);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_47 = lean_ctor_get(x_3, 0);
x_48 = l_Lean_Server_References_allRefs(x_1);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; size_t x_60; size_t x_61; size_t x_62; size_t x_63; size_t x_64; lean_object* x_65; lean_object* x_66; 
x_50 = lean_ctor_get(x_48, 1);
x_51 = lean_ctor_get(x_48, 0);
lean_dec(x_51);
x_52 = lean_array_get_size(x_50);
x_53 = l_Lean_Name_hash___override(x_47);
x_54 = 32;
x_55 = lean_uint64_shift_right(x_53, x_54);
x_56 = lean_uint64_xor(x_53, x_55);
x_57 = 16;
x_58 = lean_uint64_shift_right(x_56, x_57);
x_59 = lean_uint64_xor(x_56, x_58);
x_60 = lean_uint64_to_usize(x_59);
x_61 = lean_usize_of_nat(x_52);
lean_dec(x_52);
x_62 = 1;
x_63 = lean_usize_sub(x_61, x_62);
x_64 = lean_usize_land(x_60, x_63);
x_65 = lean_array_uget(x_50, x_64);
lean_dec(x_50);
x_66 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7(x_47, x_65);
lean_dec(x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; size_t x_68; lean_object* x_69; 
lean_free_object(x_48);
x_67 = l_Lean_Server_Reference_aliases___default___closed__1;
x_68 = l_Lean_Server_References_allRefsFor___closed__1;
x_69 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__8(x_2, x_3, x_67, x_68, x_5, x_67, x_4);
if (lean_obj_tag(x_69) == 0)
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
return x_69;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_ctor_get(x_69, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_69);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
else
{
uint8_t x_74; 
x_74 = !lean_is_exclusive(x_69);
if (x_74 == 0)
{
return x_69;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_69, 0);
x_76 = lean_ctor_get(x_69, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_69);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; size_t x_81; lean_object* x_82; lean_object* x_83; 
x_78 = lean_ctor_get(x_66, 0);
lean_inc(x_78);
lean_dec(x_66);
lean_inc(x_47);
lean_ctor_set(x_48, 1, x_78);
lean_ctor_set(x_48, 0, x_47);
x_79 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1;
x_80 = lean_array_push(x_79, x_48);
x_81 = lean_array_size(x_80);
x_82 = l_Lean_Server_Reference_aliases___default___closed__1;
x_83 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__9(x_2, x_3, x_80, x_81, x_5, x_82, x_4);
lean_dec(x_80);
if (lean_obj_tag(x_83) == 0)
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
return x_83;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_83, 0);
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_83);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
else
{
uint8_t x_88; 
x_88 = !lean_is_exclusive(x_83);
if (x_88 == 0)
{
return x_83;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_83, 0);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_83);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
}
else
{
lean_object* x_92; lean_object* x_93; uint64_t x_94; uint64_t x_95; uint64_t x_96; uint64_t x_97; uint64_t x_98; uint64_t x_99; uint64_t x_100; size_t x_101; size_t x_102; size_t x_103; size_t x_104; size_t x_105; lean_object* x_106; lean_object* x_107; 
x_92 = lean_ctor_get(x_48, 1);
lean_inc(x_92);
lean_dec(x_48);
x_93 = lean_array_get_size(x_92);
x_94 = l_Lean_Name_hash___override(x_47);
x_95 = 32;
x_96 = lean_uint64_shift_right(x_94, x_95);
x_97 = lean_uint64_xor(x_94, x_96);
x_98 = 16;
x_99 = lean_uint64_shift_right(x_97, x_98);
x_100 = lean_uint64_xor(x_97, x_99);
x_101 = lean_uint64_to_usize(x_100);
x_102 = lean_usize_of_nat(x_93);
lean_dec(x_93);
x_103 = 1;
x_104 = lean_usize_sub(x_102, x_103);
x_105 = lean_usize_land(x_101, x_104);
x_106 = lean_array_uget(x_92, x_105);
lean_dec(x_92);
x_107 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7(x_47, x_106);
lean_dec(x_106);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; size_t x_109; lean_object* x_110; 
x_108 = l_Lean_Server_Reference_aliases___default___closed__1;
x_109 = l_Lean_Server_References_allRefsFor___closed__1;
x_110 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__8(x_2, x_3, x_108, x_109, x_5, x_108, x_4);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_113 = x_110;
} else {
 lean_dec_ref(x_110);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_110, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_110, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_117 = x_110;
} else {
 lean_dec_ref(x_110);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; size_t x_123; lean_object* x_124; lean_object* x_125; 
x_119 = lean_ctor_get(x_107, 0);
lean_inc(x_119);
lean_dec(x_107);
lean_inc(x_47);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_47);
lean_ctor_set(x_120, 1, x_119);
x_121 = l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1;
x_122 = lean_array_push(x_121, x_120);
x_123 = lean_array_size(x_122);
x_124 = l_Lean_Server_Reference_aliases___default___closed__1;
x_125 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__9(x_2, x_3, x_122, x_123, x_5, x_124, x_4);
lean_dec(x_122);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_128 = x_125;
} else {
 lean_dec_ref(x_125);
 x_128 = lean_box(0);
}
if (lean_is_scalar(x_128)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_128;
}
lean_ctor_set(x_129, 0, x_126);
lean_ctor_set(x_129, 1, x_127);
return x_129;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_125, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_125, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_132 = x_125;
} else {
 lean_dec_ref(x_125);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefsFor___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_allRefsFor___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__4(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefsFor___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_allRefsFor___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__6(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__8(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__9(x_1, x_2, x_3, x_8, x_9, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Server_References_allRefsFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_References_allRefsFor(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Server_References_findAt___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
return x_2;
}
}
static lean_object* _init_l_Lean_Server_References_findAt___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Server_References_findAt___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Server_References_findAt___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Server_References_findAt___closed__1;
x_2 = lean_box(0);
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Server_References_findAt(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_5 = l_Lean_Server_References_allRefs(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash___override(x_2);
x_9 = 32;
x_10 = lean_uint64_shift_right(x_8, x_9);
x_11 = lean_uint64_xor(x_8, x_10);
x_12 = 16;
x_13 = lean_uint64_shift_right(x_11, x_12);
x_14 = lean_uint64_xor(x_11, x_13);
x_15 = lean_uint64_to_usize(x_14);
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 1;
x_18 = lean_usize_sub(x_16, x_17);
x_19 = lean_usize_land(x_15, x_18);
x_20 = lean_array_uget(x_6, x_19);
lean_dec(x_6);
x_21 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7(x_2, x_20);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_dec(x_3);
x_22 = l_Lean_Server_References_findAt___closed__2;
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Lsp_ModuleRefs_findAt(x_23, x_3, x_4);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_Server_References_findAt___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Server_References_findAt___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Server_References_findAt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Server_References_findAt(x_1, x_2, x_3, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Server_References_findRange_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; size_t x_15; size_t x_16; size_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_5 = l_Lean_Server_References_allRefs(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash___override(x_2);
x_9 = 32;
x_10 = lean_uint64_shift_right(x_8, x_9);
x_11 = lean_uint64_xor(x_8, x_10);
x_12 = 16;
x_13 = lean_uint64_shift_right(x_11, x_12);
x_14 = lean_uint64_xor(x_11, x_13);
x_15 = lean_uint64_to_usize(x_14);
x_16 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_17 = 1;
x_18 = lean_usize_sub(x_16, x_17);
x_19 = lean_usize_land(x_15, x_18);
x_20 = lean_array_uget(x_6, x_19);
lean_dec(x_6);
x_21 = l_Std_DHashMap_Internal_AssocList_get_x3f___at_Lean_Server_References_allRefsFor___spec__7(x_2, x_20);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_dec(x_3);
x_22 = lean_box(0);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Lsp_ModuleRefs_findRange_x3f(x_23, x_3, x_4);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_Server_References_findRange_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Server_References_findRange_x3f(x_1, x_2, x_3, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_uget(x_2, x_4);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_1);
lean_ctor_set(x_9, 1, x_11);
lean_ctor_set(x_9, 0, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_array_push(x_5, x_13);
x_15 = 1;
x_16 = lean_usize_add(x_4, x_15);
x_4 = x_16;
x_5 = x_14;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
lean_inc(x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_array_push(x_5, x_21);
x_23 = 1;
x_24 = lean_usize_add(x_4, x_23);
x_4 = x_24;
x_5 = x_22;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_size(x_6);
x_8 = 0;
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1(x_2, x_6, x_7, x_8, x_3, x_5);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2(uint8_t x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_array_uget(x_2, x_4);
if (x_1 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1(x_11, x_10, x_5, x_12, x_6);
lean_dec(x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = lean_usize_add(x_4, x_17);
x_4 = x_18;
x_5 = x_16;
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_22 = lean_ctor_get(x_9, 0);
lean_inc(x_22);
lean_dec(x_9);
x_23 = lean_box(0);
x_24 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1(x_20, x_22, x_5, x_23, x_6);
lean_dec(x_20);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = lean_usize_add(x_4, x_28);
x_4 = x_29;
x_5 = x_27;
x_6 = x_26;
goto _start;
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_21, 0);
lean_inc(x_31);
lean_dec(x_21);
x_32 = !lean_is_exclusive(x_9);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_9, 0);
x_34 = lean_ctor_get(x_9, 1);
lean_dec(x_34);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_ctor_set(x_31, 1, x_36);
lean_ctor_set(x_31, 0, x_33);
lean_ctor_set(x_9, 1, x_37);
lean_ctor_set(x_9, 0, x_31);
x_38 = lean_array_push(x_5, x_9);
x_39 = lean_box(0);
x_40 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1(x_20, x_33, x_38, x_39, x_6);
lean_dec(x_20);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
lean_dec(x_41);
x_44 = 1;
x_45 = lean_usize_add(x_4, x_44);
x_4 = x_45;
x_5 = x_43;
x_6 = x_42;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; size_t x_56; size_t x_57; 
x_47 = lean_ctor_get(x_31, 0);
x_48 = lean_ctor_get(x_31, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_31);
lean_inc(x_33);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_33);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_9, 1, x_48);
lean_ctor_set(x_9, 0, x_49);
x_50 = lean_array_push(x_5, x_9);
x_51 = lean_box(0);
x_52 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1(x_20, x_33, x_50, x_51, x_6);
lean_dec(x_20);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
lean_dec(x_53);
x_56 = 1;
x_57 = lean_usize_add(x_4, x_56);
x_4 = x_57;
x_5 = x_55;
x_6 = x_54;
goto _start;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; size_t x_71; size_t x_72; 
x_59 = lean_ctor_get(x_9, 0);
lean_inc(x_59);
lean_dec(x_9);
x_60 = lean_ctor_get(x_31, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_31, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_62 = x_31;
} else {
 lean_dec_ref(x_31);
 x_62 = lean_box(0);
}
lean_inc(x_59);
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_59);
lean_ctor_set(x_63, 1, x_60);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_61);
x_65 = lean_array_push(x_5, x_64);
x_66 = lean_box(0);
x_67 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1(x_20, x_59, x_65, x_66, x_6);
lean_dec(x_20);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_68, 0);
lean_inc(x_70);
lean_dec(x_68);
x_71 = 1;
x_72 = lean_usize_add(x_4, x_71);
x_4 = x_72;
x_5 = x_70;
x_6 = x_69;
goto _start;
}
}
}
}
}
}
lean_object* l_Lean_Server_References_referringTo(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Server_References_allRefsFor(x_1, x_2, x_3, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_array_size(x_7);
x_10 = 0;
x_11 = l_Lean_Server_Reference_aliases___default___closed__1;
x_12 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2(x_4, x_7, x_9, x_10, x_11, x_8);
lean_dec(x_7);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_6);
if (x_17 == 0)
{
return x_6;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__1(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Server_References_referringTo___spec__2(x_7, x_2, x_8, x_9, x_5, x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Server_References_referringTo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Server_References_referringTo(x_1, x_2, x_3, x_6, x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_definitionOf_x3f___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_usize_dec_lt(x_4, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
size_t x_12; size_t x_13; 
lean_dec(x_9);
x_12 = 1;
x_13 = lean_usize_add(x_4, x_12);
lean_inc(x_1);
{
size_t _tmp_3 = x_13;
lean_object* _tmp_4 = x_1;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_ctor_set(x_17, 1, x_21);
lean_ctor_set(x_17, 0, x_18);
lean_ctor_set(x_9, 1, x_22);
lean_ctor_set(x_9, 0, x_17);
lean_ctor_set(x_11, 0, x_9);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_11);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_17, 0);
x_28 = lean_ctor_get(x_17, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_17);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_9, 1, x_28);
lean_ctor_set(x_9, 0, x_29);
lean_ctor_set(x_11, 0, x_9);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_11);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_6);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_34 = lean_ctor_get(x_11, 0);
x_35 = lean_ctor_get(x_9, 0);
lean_inc(x_35);
lean_dec(x_9);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_38 = x_34;
} else {
 lean_dec_ref(x_34);
 x_38 = lean_box(0);
}
if (lean_is_scalar(x_38)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_38;
}
lean_ctor_set(x_39, 0, x_35);
lean_ctor_set(x_39, 1, x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set(x_11, 0, x_40);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_11);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_6);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_45 = lean_ctor_get(x_11, 0);
lean_inc(x_45);
lean_dec(x_11);
x_46 = lean_ctor_get(x_9, 0);
lean_inc(x_46);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_47 = x_9;
} else {
 lean_dec_ref(x_9);
 x_47 = lean_box(0);
}
x_48 = lean_ctor_get(x_45, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_50 = x_45;
} else {
 lean_dec_ref(x_45);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_50;
}
lean_ctor_set(x_51, 0, x_46);
lean_ctor_set(x_51, 1, x_48);
if (lean_is_scalar(x_47)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_47;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_6);
return x_57;
}
}
}
}
}
lean_object* l_Lean_Server_References_definitionOf_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_Lean_Server_References_definitionOf_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_References_allRefsFor(x_1, x_3, x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_box(0);
x_9 = lean_array_size(x_6);
x_10 = 0;
x_11 = l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1;
x_12 = l_Array_forInUnsafe_loop___at_Lean_Server_References_definitionOf_x3f___spec__1(x_11, x_6, x_9, x_10, x_11, x_7);
lean_dec(x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_12, 0);
lean_dec(x_16);
lean_ctor_set(x_12, 0, x_8);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_12, 0);
lean_dec(x_20);
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_21);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_21);
return x_12;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_dec(x_12);
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
lean_dec(x_14);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_5);
if (x_25 == 0)
{
return x_5;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_5, 0);
x_27 = lean_ctor_get(x_5, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_5);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Server_References_definitionOf_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Server_References_definitionOf_x3f___spec__1(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Server_References_definitionOf_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Server_References_definitionOf_x3f___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Server_References_definitionOf_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Server_References_definitionOf_x3f(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_definitionsMatching___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_free_object(x_9);
lean_dec(x_10);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_6);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_6, 0);
lean_dec(x_17);
lean_inc(x_3);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_6, 1);
lean_inc(x_19);
lean_dec(x_6);
lean_inc(x_3);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_19);
x_5 = x_15;
x_6 = x_20;
goto _start;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
lean_dec(x_5);
x_24 = !lean_is_exclusive(x_6);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_6, 1);
x_26 = lean_ctor_get(x_6, 0);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_10, 1);
x_29 = lean_ctor_get(x_10, 0);
lean_dec(x_29);
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 0);
x_32 = lean_ctor_get(x_22, 1);
lean_dec(x_32);
lean_inc(x_1);
x_33 = lean_apply_1(x_1, x_28);
if (lean_obj_tag(x_33) == 0)
{
lean_free_object(x_22);
lean_dec(x_31);
lean_free_object(x_10);
lean_free_object(x_9);
lean_inc(x_3);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_4);
lean_ctor_set(x_22, 1, x_31);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_9, 1, x_22);
lean_ctor_set(x_9, 0, x_35);
x_36 = lean_array_push(x_25, x_9);
if (lean_obj_tag(x_2) == 0)
{
lean_free_object(x_10);
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_36);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_2, 0);
lean_inc(x_38);
x_39 = lean_array_get_size(x_36);
x_40 = lean_nat_dec_le(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
if (x_40 == 0)
{
lean_free_object(x_10);
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_36);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
uint8_t x_42; 
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_2);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_2, 0);
lean_dec(x_43);
lean_inc(x_36);
lean_ctor_set(x_2, 0, x_36);
lean_ctor_set(x_6, 1, x_36);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
lean_object* x_44; 
lean_dec(x_2);
lean_inc(x_36);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_36);
lean_ctor_set(x_6, 1, x_36);
lean_ctor_set(x_6, 0, x_44);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_22, 0);
lean_inc(x_45);
lean_dec(x_22);
lean_inc(x_1);
x_46 = lean_apply_1(x_1, x_28);
if (lean_obj_tag(x_46) == 0)
{
lean_dec(x_45);
lean_free_object(x_10);
lean_free_object(x_9);
lean_inc(x_3);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_4);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_4);
lean_ctor_set(x_49, 1, x_45);
lean_ctor_set(x_9, 1, x_49);
lean_ctor_set(x_9, 0, x_48);
x_50 = lean_array_push(x_25, x_9);
if (lean_obj_tag(x_2) == 0)
{
lean_free_object(x_10);
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_50);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_52 = lean_ctor_get(x_2, 0);
lean_inc(x_52);
x_53 = lean_array_get_size(x_50);
x_54 = lean_nat_dec_le(x_52, x_53);
lean_dec(x_53);
lean_dec(x_52);
if (x_54 == 0)
{
lean_free_object(x_10);
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_50);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_56 = x_2;
} else {
 lean_dec_ref(x_2);
 x_56 = lean_box(0);
}
lean_inc(x_50);
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 1, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_50);
lean_ctor_set(x_6, 1, x_50);
lean_ctor_set(x_6, 0, x_57);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
}
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_10, 1);
lean_inc(x_58);
lean_dec(x_10);
x_59 = lean_ctor_get(x_22, 0);
lean_inc(x_59);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_60 = x_22;
} else {
 lean_dec_ref(x_22);
 x_60 = lean_box(0);
}
lean_inc(x_1);
x_61 = lean_apply_1(x_1, x_58);
if (lean_obj_tag(x_61) == 0)
{
lean_dec(x_60);
lean_dec(x_59);
lean_free_object(x_9);
lean_inc(x_3);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_61, 0);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_4);
if (lean_is_scalar(x_60)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_60;
}
lean_ctor_set(x_64, 0, x_4);
lean_ctor_set(x_64, 1, x_59);
lean_ctor_set(x_9, 1, x_64);
lean_ctor_set(x_9, 0, x_63);
x_65 = lean_array_push(x_25, x_9);
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_65);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_67 = lean_ctor_get(x_2, 0);
lean_inc(x_67);
x_68 = lean_array_get_size(x_65);
x_69 = lean_nat_dec_le(x_67, x_68);
lean_dec(x_68);
lean_dec(x_67);
if (x_69 == 0)
{
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_65);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_23;
goto _start;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_71 = x_2;
} else {
 lean_dec_ref(x_2);
 x_71 = lean_box(0);
}
lean_inc(x_65);
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 1, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_65);
lean_ctor_set(x_6, 1, x_65);
lean_ctor_set(x_6, 0, x_72);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_6);
lean_ctor_set(x_73, 1, x_7);
return x_73;
}
}
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_74 = lean_ctor_get(x_6, 1);
lean_inc(x_74);
lean_dec(x_6);
x_75 = lean_ctor_get(x_10, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_76 = x_10;
} else {
 lean_dec_ref(x_10);
 x_76 = lean_box(0);
}
x_77 = lean_ctor_get(x_22, 0);
lean_inc(x_77);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_78 = x_22;
} else {
 lean_dec_ref(x_22);
 x_78 = lean_box(0);
}
lean_inc(x_1);
x_79 = lean_apply_1(x_1, x_75);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; 
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_free_object(x_9);
lean_inc(x_3);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_3);
lean_ctor_set(x_80, 1, x_74);
x_5 = x_23;
x_6 = x_80;
goto _start;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_79, 0);
lean_inc(x_82);
lean_dec(x_79);
lean_inc(x_4);
if (lean_is_scalar(x_78)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_78;
}
lean_ctor_set(x_83, 0, x_4);
lean_ctor_set(x_83, 1, x_77);
lean_ctor_set(x_9, 1, x_83);
lean_ctor_set(x_9, 0, x_82);
x_84 = lean_array_push(x_74, x_9);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_85; 
lean_dec(x_76);
lean_inc(x_3);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_3);
lean_ctor_set(x_85, 1, x_84);
x_5 = x_23;
x_6 = x_85;
goto _start;
}
else
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = lean_ctor_get(x_2, 0);
lean_inc(x_87);
x_88 = lean_array_get_size(x_84);
x_89 = lean_nat_dec_le(x_87, x_88);
lean_dec(x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; 
lean_dec(x_76);
lean_inc(x_3);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_3);
lean_ctor_set(x_90, 1, x_84);
x_5 = x_23;
x_6 = x_90;
goto _start;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_92 = x_2;
} else {
 lean_dec_ref(x_2);
 x_92 = lean_box(0);
}
lean_inc(x_84);
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 1, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_84);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_84);
if (lean_is_scalar(x_76)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_76;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_7);
return x_95;
}
}
}
}
}
}
else
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_9, 1);
lean_inc(x_96);
lean_dec(x_9);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
lean_dec(x_96);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_10);
x_98 = lean_ctor_get(x_5, 1);
lean_inc(x_98);
lean_dec(x_5);
x_99 = lean_ctor_get(x_6, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_100 = x_6;
} else {
 lean_dec_ref(x_6);
 x_100 = lean_box(0);
}
lean_inc(x_3);
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_3);
lean_ctor_set(x_101, 1, x_99);
x_5 = x_98;
x_6 = x_101;
goto _start;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_103 = lean_ctor_get(x_97, 0);
lean_inc(x_103);
lean_dec(x_97);
x_104 = lean_ctor_get(x_5, 1);
lean_inc(x_104);
lean_dec(x_5);
x_105 = lean_ctor_get(x_6, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_106 = x_6;
} else {
 lean_dec_ref(x_6);
 x_106 = lean_box(0);
}
x_107 = lean_ctor_get(x_10, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_108 = x_10;
} else {
 lean_dec_ref(x_10);
 x_108 = lean_box(0);
}
x_109 = lean_ctor_get(x_103, 0);
lean_inc(x_109);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_110 = x_103;
} else {
 lean_dec_ref(x_103);
 x_110 = lean_box(0);
}
lean_inc(x_1);
x_111 = lean_apply_1(x_1, x_107);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; 
lean_dec(x_110);
lean_dec(x_109);
lean_dec(x_108);
lean_inc(x_3);
if (lean_is_scalar(x_106)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_106;
}
lean_ctor_set(x_112, 0, x_3);
lean_ctor_set(x_112, 1, x_105);
x_5 = x_104;
x_6 = x_112;
goto _start;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_114 = lean_ctor_get(x_111, 0);
lean_inc(x_114);
lean_dec(x_111);
lean_inc(x_4);
if (lean_is_scalar(x_110)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_110;
}
lean_ctor_set(x_115, 0, x_4);
lean_ctor_set(x_115, 1, x_109);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_array_push(x_105, x_116);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_118; 
lean_dec(x_108);
lean_inc(x_3);
if (lean_is_scalar(x_106)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_106;
}
lean_ctor_set(x_118, 0, x_3);
lean_ctor_set(x_118, 1, x_117);
x_5 = x_104;
x_6 = x_118;
goto _start;
}
else
{
lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_120 = lean_ctor_get(x_2, 0);
lean_inc(x_120);
x_121 = lean_array_get_size(x_117);
x_122 = lean_nat_dec_le(x_120, x_121);
lean_dec(x_121);
lean_dec(x_120);
if (x_122 == 0)
{
lean_object* x_123; 
lean_dec(x_108);
lean_inc(x_3);
if (lean_is_scalar(x_106)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_106;
}
lean_ctor_set(x_123, 0, x_3);
lean_ctor_set(x_123, 1, x_117);
x_5 = x_104;
x_6 = x_123;
goto _start;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_104);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_125 = x_2;
} else {
 lean_dec_ref(x_2);
 x_125 = lean_box(0);
}
lean_inc(x_117);
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 1, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_117);
if (lean_is_scalar(x_106)) {
 x_127 = lean_alloc_ctor(0, 2, 0);
} else {
 x_127 = x_106;
}
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_117);
if (lean_is_scalar(x_108)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_108;
}
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_7);
return x_128;
}
}
}
}
}
}
else
{
lean_object* x_129; uint8_t x_130; 
lean_dec(x_10);
lean_dec(x_9);
x_129 = lean_ctor_get(x_5, 1);
lean_inc(x_129);
lean_dec(x_5);
x_130 = !lean_is_exclusive(x_6);
if (x_130 == 0)
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_6, 0);
lean_dec(x_131);
lean_inc(x_3);
lean_ctor_set(x_6, 0, x_3);
x_5 = x_129;
goto _start;
}
else
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_6, 1);
lean_inc(x_133);
lean_dec(x_6);
lean_inc(x_3);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_3);
lean_ctor_set(x_134, 1, x_133);
x_5 = x_129;
x_6 = x_134;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 0);
lean_dec(x_12);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
x_14 = l_Lean_SearchPath_findModuleWithExt(x_3, x_13, x_8, x_7);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
lean_ctor_set(x_2, 0, x_4);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
lean_ctor_set(x_2, 0, x_4);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_2);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 x_24 = x_15;
} else {
 lean_dec_ref(x_15);
 x_24 = lean_box(0);
}
x_25 = lean_io_realpath(x_23, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_System_Uri_pathToUri(x_26);
x_29 = lean_box(0);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
lean_dec(x_9);
x_31 = lean_array_get_size(x_30);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_dec_lt(x_32, x_31);
lean_inc(x_4);
lean_ctor_set(x_2, 0, x_4);
if (x_33 == 0)
{
lean_dec(x_31);
lean_dec(x_30);
x_34 = x_29;
goto block_76;
}
else
{
uint8_t x_77; 
x_77 = lean_nat_dec_le(x_31, x_31);
if (x_77 == 0)
{
lean_dec(x_31);
lean_dec(x_30);
x_34 = x_29;
goto block_76;
}
else
{
size_t x_78; size_t x_79; lean_object* x_80; 
x_78 = 0;
x_79 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_80 = l_Array_foldlMUnsafe_fold___at_Lean_Lsp_instToJsonModuleRefs___spec__4(x_30, x_78, x_79, x_29);
lean_dec(x_30);
x_34 = x_80;
goto block_76;
}
}
block_76:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_inc(x_4);
x_35 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg(x_5, x_6, x_4, x_28, x_34, x_2, x_27);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_35);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_35, 0);
lean_dec(x_39);
x_40 = !lean_is_exclusive(x_36);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_36, 0);
lean_dec(x_41);
lean_ctor_set(x_36, 0, x_4);
if (lean_is_scalar(x_24)) {
 x_42 = lean_alloc_ctor(1, 1, 0);
} else {
 x_42 = x_24;
}
lean_ctor_set(x_42, 0, x_36);
lean_ctor_set(x_35, 0, x_42);
return x_35;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_dec(x_36);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_4);
lean_ctor_set(x_44, 1, x_43);
if (lean_is_scalar(x_24)) {
 x_45 = lean_alloc_ctor(1, 1, 0);
} else {
 x_45 = x_24;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_35, 0, x_45);
return x_35;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_46 = lean_ctor_get(x_35, 1);
lean_inc(x_46);
lean_dec(x_35);
x_47 = lean_ctor_get(x_36, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_48 = x_36;
} else {
 lean_dec_ref(x_36);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_4);
lean_ctor_set(x_49, 1, x_47);
if (lean_is_scalar(x_24)) {
 x_50 = lean_alloc_ctor(1, 1, 0);
} else {
 x_50 = x_24;
}
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_46);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_4);
x_52 = !lean_is_exclusive(x_35);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_35, 0);
lean_dec(x_53);
x_54 = !lean_is_exclusive(x_36);
if (x_54 == 0)
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_36, 0);
lean_dec(x_55);
x_56 = !lean_is_exclusive(x_37);
if (x_56 == 0)
{
lean_object* x_57; 
if (lean_is_scalar(x_24)) {
 x_57 = lean_alloc_ctor(0, 1, 0);
} else {
 x_57 = x_24;
 lean_ctor_set_tag(x_57, 0);
}
lean_ctor_set(x_57, 0, x_36);
lean_ctor_set(x_35, 0, x_57);
return x_35;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_37, 0);
lean_inc(x_58);
lean_dec(x_37);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_36, 0, x_59);
if (lean_is_scalar(x_24)) {
 x_60 = lean_alloc_ctor(0, 1, 0);
} else {
 x_60 = x_24;
 lean_ctor_set_tag(x_60, 0);
}
lean_ctor_set(x_60, 0, x_36);
lean_ctor_set(x_35, 0, x_60);
return x_35;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_36, 1);
lean_inc(x_61);
lean_dec(x_36);
x_62 = lean_ctor_get(x_37, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 x_63 = x_37;
} else {
 lean_dec_ref(x_37);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 1, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_62);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_61);
if (lean_is_scalar(x_24)) {
 x_66 = lean_alloc_ctor(0, 1, 0);
} else {
 x_66 = x_24;
 lean_ctor_set_tag(x_66, 0);
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_35, 0, x_66);
return x_35;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_67 = lean_ctor_get(x_35, 1);
lean_inc(x_67);
lean_dec(x_35);
x_68 = lean_ctor_get(x_36, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_69 = x_36;
} else {
 lean_dec_ref(x_36);
 x_69 = lean_box(0);
}
x_70 = lean_ctor_get(x_37, 0);
lean_inc(x_70);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 x_71 = x_37;
} else {
 lean_dec_ref(x_37);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 1, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_70);
if (lean_is_scalar(x_69)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_69;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_68);
if (lean_is_scalar(x_24)) {
 x_74 = lean_alloc_ctor(0, 1, 0);
} else {
 x_74 = x_24;
 lean_ctor_set_tag(x_74, 0);
}
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_67);
return x_75;
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_24);
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_81 = !lean_is_exclusive(x_25);
if (x_81 == 0)
{
return x_25;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_25, 0);
x_83 = lean_ctor_get(x_25, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_25);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
else
{
uint8_t x_85; 
lean_free_object(x_2);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_85 = !lean_is_exclusive(x_14);
if (x_85 == 0)
{
return x_14;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_14, 0);
x_87 = lean_ctor_get(x_14, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_14);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_2, 1);
lean_inc(x_89);
lean_dec(x_2);
x_90 = l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1;
x_91 = l_Lean_SearchPath_findModuleWithExt(x_3, x_90, x_8, x_7);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_4);
lean_ctor_set(x_95, 1, x_89);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
if (lean_is_scalar(x_94)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_94;
}
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_93);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_98 = lean_ctor_get(x_91, 1);
lean_inc(x_98);
lean_dec(x_91);
x_99 = lean_ctor_get(x_92, 0);
lean_inc(x_99);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 x_100 = x_92;
} else {
 lean_dec_ref(x_92);
 x_100 = lean_box(0);
}
x_101 = lean_io_realpath(x_99, x_98);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; lean_object* x_110; lean_object* x_111; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = l_System_Uri_pathToUri(x_102);
x_105 = lean_box(0);
x_106 = lean_ctor_get(x_9, 1);
lean_inc(x_106);
lean_dec(x_9);
x_107 = lean_array_get_size(x_106);
x_108 = lean_unsigned_to_nat(0u);
x_109 = lean_nat_dec_lt(x_108, x_107);
lean_inc(x_4);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_4);
lean_ctor_set(x_110, 1, x_89);
if (x_109 == 0)
{
lean_dec(x_107);
lean_dec(x_106);
x_111 = x_105;
goto block_132;
}
else
{
uint8_t x_133; 
x_133 = lean_nat_dec_le(x_107, x_107);
if (x_133 == 0)
{
lean_dec(x_107);
lean_dec(x_106);
x_111 = x_105;
goto block_132;
}
else
{
size_t x_134; size_t x_135; lean_object* x_136; 
x_134 = 0;
x_135 = lean_usize_of_nat(x_107);
lean_dec(x_107);
x_136 = l_Array_foldlMUnsafe_fold___at_Lean_Lsp_instToJsonModuleRefs___spec__4(x_106, x_134, x_135, x_105);
lean_dec(x_106);
x_111 = x_136;
goto block_132;
}
}
block_132:
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_inc(x_4);
x_112 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__2___rarg(x_5, x_6, x_4, x_104, x_111, x_110, x_103);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_116 = x_112;
} else {
 lean_dec_ref(x_112);
 x_116 = lean_box(0);
}
x_117 = lean_ctor_get(x_113, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_118 = x_113;
} else {
 lean_dec_ref(x_113);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_4);
lean_ctor_set(x_119, 1, x_117);
if (lean_is_scalar(x_100)) {
 x_120 = lean_alloc_ctor(1, 1, 0);
} else {
 x_120 = x_100;
}
lean_ctor_set(x_120, 0, x_119);
if (lean_is_scalar(x_116)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_116;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_115);
return x_121;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_4);
x_122 = lean_ctor_get(x_112, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_123 = x_112;
} else {
 lean_dec_ref(x_112);
 x_123 = lean_box(0);
}
x_124 = lean_ctor_get(x_113, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_125 = x_113;
} else {
 lean_dec_ref(x_113);
 x_125 = lean_box(0);
}
x_126 = lean_ctor_get(x_114, 0);
lean_inc(x_126);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 x_127 = x_114;
} else {
 lean_dec_ref(x_114);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 1, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_126);
if (lean_is_scalar(x_125)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_125;
}
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_124);
if (lean_is_scalar(x_100)) {
 x_130 = lean_alloc_ctor(0, 1, 0);
} else {
 x_130 = x_100;
 lean_ctor_set_tag(x_130, 0);
}
lean_ctor_set(x_130, 0, x_129);
if (lean_is_scalar(x_123)) {
 x_131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_131 = x_123;
}
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_122);
return x_131;
}
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_100);
lean_dec(x_89);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_137 = lean_ctor_get(x_101, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_101, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_139 = x_101;
} else {
 lean_dec_ref(x_101);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_89);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_141 = lean_ctor_get(x_91, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_91, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_143 = x_91;
} else {
 lean_dec_ref(x_91);
 x_143 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_144 = x_143;
}
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_142);
return x_144;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_3(x_11, lean_box(0), x_9, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
lean_dec(x_7);
x_14 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg(x_2, x_3, x_4, x_1, x_5, x_6, x_13, x_8);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_3(x_10, lean_box(0), x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_5);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg___lambda__1), 7, 6);
lean_closure_set(x_15, 0, x_12);
lean_closure_set(x_15, 1, x_7);
lean_closure_set(x_15, 2, x_1);
lean_closure_set(x_15, 3, x_5);
lean_closure_set(x_15, 4, x_2);
lean_closure_set(x_15, 5, x_3);
x_16 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg___lambda__2), 8, 6);
lean_closure_set(x_16, 0, x_4);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_5);
lean_closure_set(x_16, 5, x_13);
x_17 = lean_apply_5(x_14, lean_box(0), lean_box(0), x_15, x_16, x_8);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_3(x_11, lean_box(0), x_9, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
lean_dec(x_7);
x_14 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4___rarg(x_2, x_3, x_4, x_1, x_5, x_6, x_13, x_8);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_3(x_10, lean_box(0), x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_5);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg___lambda__1), 7, 6);
lean_closure_set(x_15, 0, x_12);
lean_closure_set(x_15, 1, x_7);
lean_closure_set(x_15, 2, x_1);
lean_closure_set(x_15, 3, x_5);
lean_closure_set(x_15, 4, x_2);
lean_closure_set(x_15, 5, x_3);
x_16 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4___rarg___lambda__1), 8, 6);
lean_closure_set(x_16, 0, x_4);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_5);
lean_closure_set(x_16, 5, x_13);
x_17 = lean_apply_5(x_14, lean_box(0), lean_box(0), x_15, x_16, x_8);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4___rarg), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_definitionsMatching___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_definitionsMatching___spec__1(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_3(x_11, lean_box(0), x_9, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
lean_dec(x_7);
x_14 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6___rarg(x_2, x_3, x_4, x_1, x_5, x_6, x_13, x_8);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_3(x_10, lean_box(0), x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_5);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg___lambda__1), 7, 6);
lean_closure_set(x_15, 0, x_12);
lean_closure_set(x_15, 1, x_7);
lean_closure_set(x_15, 2, x_1);
lean_closure_set(x_15, 3, x_5);
lean_closure_set(x_15, 4, x_2);
lean_closure_set(x_15, 5, x_3);
x_16 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6___rarg___lambda__1), 8, 6);
lean_closure_set(x_16, 0, x_4);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_5);
lean_closure_set(x_16, 5, x_13);
x_17 = lean_apply_5(x_14, lean_box(0), lean_box(0), x_15, x_16, x_8);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6___rarg), 8, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Server_References_definitionsMatching___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_EStateM_instMonad(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Server_References_definitionsMatching___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Server_Reference_aliases___default___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Server_References_definitionsMatching___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_6 = l_Lean_Server_References_allRefs(x_1);
x_7 = lean_box(0);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_array_get_size(x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
x_12 = lean_box(0);
if (x_11 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_8);
x_13 = l_Lean_Server_References_definitionsMatching___rarg___closed__1;
x_14 = l_Lean_Server_References_definitionsMatching___rarg___closed__2;
x_15 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__3___rarg(x_2, x_3, x_4, x_13, x_12, x_7, x_14, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_15, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
lean_ctor_set(x_15, 0, x_20);
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_16);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_15, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_17, 0);
lean_inc(x_26);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_26);
return x_15;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_dec(x_15);
x_28 = lean_ctor_get(x_17, 0);
lean_inc(x_28);
lean_dec(x_17);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_15);
if (x_30 == 0)
{
return x_15;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
x_34 = lean_nat_dec_le(x_9, x_9);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_9);
lean_dec(x_8);
x_35 = l_Lean_Server_References_definitionsMatching___rarg___closed__1;
x_36 = l_Lean_Server_References_definitionsMatching___rarg___closed__2;
x_37 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__4___rarg(x_2, x_3, x_4, x_35, x_12, x_7, x_36, x_5);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_37);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_37, 0);
lean_dec(x_41);
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
lean_ctor_set(x_37, 0, x_42);
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_dec(x_38);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_38);
x_46 = !lean_is_exclusive(x_37);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_37, 0);
lean_dec(x_47);
x_48 = lean_ctor_get(x_39, 0);
lean_inc(x_48);
lean_dec(x_39);
lean_ctor_set(x_37, 0, x_48);
return x_37;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_37, 1);
lean_inc(x_49);
lean_dec(x_37);
x_50 = lean_ctor_get(x_39, 0);
lean_inc(x_50);
lean_dec(x_39);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
}
else
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_37);
if (x_52 == 0)
{
return x_37;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_37, 0);
x_54 = lean_ctor_get(x_37, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_37);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
size_t x_56; size_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = 0;
x_57 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_58 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_definitionsMatching___spec__5(x_8, x_56, x_57, x_7);
lean_dec(x_8);
x_59 = l_Lean_Server_References_definitionsMatching___rarg___closed__1;
x_60 = l_Lean_Server_References_definitionsMatching___rarg___closed__2;
x_61 = l_List_forIn_loop___at_Lean_Server_References_definitionsMatching___spec__6___rarg(x_2, x_3, x_4, x_59, x_12, x_58, x_60, x_5);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
if (lean_obj_tag(x_63) == 0)
{
uint8_t x_64; 
x_64 = !lean_is_exclusive(x_61);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_61, 0);
lean_dec(x_65);
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
lean_dec(x_62);
lean_ctor_set(x_61, 0, x_66);
return x_61;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_dec(x_61);
x_68 = lean_ctor_get(x_62, 1);
lean_inc(x_68);
lean_dec(x_62);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
uint8_t x_70; 
lean_dec(x_62);
x_70 = !lean_is_exclusive(x_61);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_61, 0);
lean_dec(x_71);
x_72 = lean_ctor_get(x_63, 0);
lean_inc(x_72);
lean_dec(x_63);
lean_ctor_set(x_61, 0, x_72);
return x_61;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_61, 1);
lean_inc(x_73);
lean_dec(x_61);
x_74 = lean_ctor_get(x_63, 0);
lean_inc(x_74);
lean_dec(x_63);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
else
{
uint8_t x_76; 
x_76 = !lean_is_exclusive(x_61);
if (x_76 == 0)
{
return x_61;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_61, 0);
x_78 = lean_ctor_get(x_61, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_61);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
}
}
lean_object* l_Lean_Server_References_definitionsMatching(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Server_References_definitionsMatching___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_definitionsMatching___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_References_definitionsMatching___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Server_References_definitionsMatching___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Server_References_definitionsMatching___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Server_References_definitionsMatching___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Server_References_definitionsMatching___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Lean_Data_Lsp_Internal(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Server_Utils(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_References(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Internal(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Utils(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_Reference_aliases___default___closed__1 = _init_l_Lean_Server_Reference_aliases___default___closed__1();
lean_mark_persistent(l_Lean_Server_Reference_aliases___default___closed__1);
l_Lean_Server_Reference_aliases___default = _init_l_Lean_Server_Reference_aliases___default();
lean_mark_persistent(l_Lean_Server_Reference_aliases___default);
l_Lean_Server_RefInfo_empty___closed__1 = _init_l_Lean_Server_RefInfo_empty___closed__1();
lean_mark_persistent(l_Lean_Server_RefInfo_empty___closed__1);
l_Lean_Server_RefInfo_empty = _init_l_Lean_Server_RefInfo_empty();
lean_mark_persistent(l_Lean_Server_RefInfo_empty);
l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1___closed__1 = _init_l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1___closed__1();
lean_mark_persistent(l_panic___at_Lean_Server_RefInfo_toLspRefInfo___spec__1___closed__1);
l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___closed__1 = _init_l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___closed__1();
lean_mark_persistent(l_Lean_findDeclarationRangesCore_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__5___closed__1);
l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1___closed__1 = _init_l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1___closed__1();
lean_mark_persistent(l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___lambda__1___closed__1);
l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___closed__1 = _init_l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___closed__1();
lean_mark_persistent(l_Lean_findDeclarationRanges_x3f___at_Lean_Server_RefInfo_toLspRefInfo___spec__3___closed__1);
l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__1);
l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__2 = _init_l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__2);
l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__3 = _init_l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__3);
l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__4 = _init_l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__4();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Server_RefInfo_toLspRefInfo___spec__6___closed__4);
l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__1 = _init_l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__1();
lean_mark_persistent(l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__1);
l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__2 = _init_l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__2();
lean_mark_persistent(l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__2);
l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3 = _init_l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3();
lean_mark_persistent(l_Lean_Server_ModuleRefs_toLspModuleRefs___closed__3);
l_Lean_Lsp_RefInfo_empty___closed__1 = _init_l_Lean_Lsp_RefInfo_empty___closed__1();
lean_mark_persistent(l_Lean_Lsp_RefInfo_empty___closed__1);
l_Lean_Lsp_RefInfo_empty = _init_l_Lean_Lsp_RefInfo_empty();
lean_mark_persistent(l_Lean_Lsp_RefInfo_empty);
l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1 = _init_l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Lsp_RefInfo_findReferenceLocation_x3f___lambda__2___closed__1);
l_Lean_Lsp_ModuleRefs_findAt___closed__1 = _init_l_Lean_Lsp_ModuleRefs_findAt___closed__1();
l_Lean_Server_Ilean_version___default = _init_l_Lean_Server_Ilean_version___default();
lean_mark_persistent(l_Lean_Server_Ilean_version___default);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__1 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__1();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__1);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__2 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__2();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__2);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__3 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__3();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__3);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__4 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__4();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__4);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__5 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__5();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__5);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__6 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__6();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__6);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__7 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__7();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__7);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__8 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__8();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__8);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__9 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__9();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__9);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__10 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__10();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__10);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__11 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__11();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__11);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__12);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__13 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__13();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__13);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__14 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__14();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__14);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__15 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__15();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__15);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__16 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__16();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__16);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__17 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__17();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__17);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__18 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__18();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__18);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__19);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__20 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__20();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__20);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__21 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__21();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__21);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__22 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__22();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__22);
l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__23 = _init_l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__23();
lean_mark_persistent(l___private_Lean_Server_References_0__Lean_Server_fromJsonIlean____x40_Lean_Server_References___hyg_1331____closed__23);
l_Lean_Server_instFromJsonIlean___closed__1 = _init_l_Lean_Server_instFromJsonIlean___closed__1();
lean_mark_persistent(l_Lean_Server_instFromJsonIlean___closed__1);
l_Lean_Server_instFromJsonIlean = _init_l_Lean_Server_instFromJsonIlean();
lean_mark_persistent(l_Lean_Server_instFromJsonIlean);
l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1 = _init_l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1();
lean_mark_persistent(l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__1);
l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2 = _init_l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2();
lean_mark_persistent(l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__2);
l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3 = _init_l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3();
lean_mark_persistent(l_List_map___at___private_Lean_Server_References_0__Lean_Server_toJsonIlean____x40_Lean_Server_References___hyg_1472____spec__2___closed__3);
l_Lean_Server_instToJsonIlean___closed__1 = _init_l_Lean_Server_instToJsonIlean___closed__1();
lean_mark_persistent(l_Lean_Server_instToJsonIlean___closed__1);
l_Lean_Server_instToJsonIlean = _init_l_Lean_Server_instToJsonIlean();
lean_mark_persistent(l_Lean_Server_instToJsonIlean);
l_Lean_Server_Ilean_load___closed__1 = _init_l_Lean_Server_Ilean_load___closed__1();
lean_mark_persistent(l_Lean_Server_Ilean_load___closed__1);
l_Lean_Server_Ilean_load___closed__2 = _init_l_Lean_Server_Ilean_load___closed__2();
lean_mark_persistent(l_Lean_Server_Ilean_load___closed__2);
l_panic___at_Lean_Server_findReferences___spec__4___closed__1 = _init_l_panic___at_Lean_Server_findReferences___spec__4___closed__1();
lean_mark_persistent(l_panic___at_Lean_Server_findReferences___spec__4___closed__1);
l_panic___at_Lean_Server_findReferences___spec__4___closed__2 = _init_l_panic___at_Lean_Server_findReferences___spec__4___closed__2();
lean_mark_persistent(l_panic___at_Lean_Server_findReferences___spec__4___closed__2);
l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1 = _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1();
lean_mark_persistent(l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__1);
l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2 = _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2();
lean_mark_persistent(l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__2);
l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3 = _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3();
lean_mark_persistent(l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__3);
l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4 = _init_l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4();
lean_mark_persistent(l_Lean_Elab_InfoTree_visitM_go___at_Lean_Server_findReferences___spec__3___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Server_findReferences___spec__6___closed__1);
l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__1 = _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__1();
lean_mark_persistent(l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__1);
l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__2 = _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__2();
lean_mark_persistent(l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__2);
l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__3 = _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__3();
lean_mark_persistent(l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__3);
l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__4 = _init_l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__4();
lean_mark_persistent(l_Std_DHashMap_Internal_AssocList_get_x21___at_Lean_Server_combineIdents_findCanonicalRepresentative___spec__2___closed__4);
l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Server_combineIdents_buildIdMap___spec__8___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Server_combineIdents___spec__7___closed__1);
l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1 = _init_l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__1();
l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2 = _init_l_Std_DHashMap_Internal_AssocList_foldlM___at_Lean_Server_dedupReferences___spec__4___at_Lean_Server_dedupReferences___spec__5___closed__2();
l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___closed__1 = _init_l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___closed__1();
lean_mark_persistent(l_Array_qsort_sort___at_Lean_Server_dedupReferences___spec__10___closed__1);
l_Lean_Server_dedupReferences___closed__1 = _init_l_Lean_Server_dedupReferences___closed__1();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__1);
l_Lean_Server_dedupReferences___closed__2 = _init_l_Lean_Server_dedupReferences___closed__2();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__2);
l_Lean_Server_dedupReferences___closed__3 = _init_l_Lean_Server_dedupReferences___closed__3();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__3);
l_Lean_Server_dedupReferences___closed__4 = _init_l_Lean_Server_dedupReferences___closed__4();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__4);
l_Lean_Server_dedupReferences___closed__5 = _init_l_Lean_Server_dedupReferences___closed__5();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__5);
l_Lean_Server_dedupReferences___closed__6 = _init_l_Lean_Server_dedupReferences___closed__6();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__6);
l_Lean_Server_dedupReferences___closed__7 = _init_l_Lean_Server_dedupReferences___closed__7();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__7);
l_Lean_Server_dedupReferences___closed__8 = _init_l_Lean_Server_dedupReferences___closed__8();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__8);
l_Lean_Server_dedupReferences___closed__9 = _init_l_Lean_Server_dedupReferences___closed__9();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__9);
l_Lean_Server_dedupReferences___closed__10 = _init_l_Lean_Server_dedupReferences___closed__10();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__10);
l_Lean_Server_dedupReferences___closed__11 = _init_l_Lean_Server_dedupReferences___closed__11();
lean_mark_persistent(l_Lean_Server_dedupReferences___closed__11);
l_Lean_Server_findModuleRefs___closed__1 = _init_l_Lean_Server_findModuleRefs___closed__1();
lean_mark_persistent(l_Lean_Server_findModuleRefs___closed__1);
l_Lean_Server_findModuleRefs___closed__2 = _init_l_Lean_Server_findModuleRefs___closed__2();
lean_mark_persistent(l_Lean_Server_findModuleRefs___closed__2);
l_Lean_Server_References_empty___closed__1 = _init_l_Lean_Server_References_empty___closed__1();
lean_mark_persistent(l_Lean_Server_References_empty___closed__1);
l_Lean_Server_References_empty = _init_l_Lean_Server_References_empty();
lean_mark_persistent(l_Lean_Server_References_empty);
l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Server_References_allRefsFor___spec__3___closed__1);
l_Lean_Server_References_allRefsFor___closed__1 = _init_l_Lean_Server_References_allRefsFor___closed__1();
l_Lean_Server_References_findAt___closed__1 = _init_l_Lean_Server_References_findAt___closed__1();
lean_mark_persistent(l_Lean_Server_References_findAt___closed__1);
l_Lean_Server_References_findAt___closed__2 = _init_l_Lean_Server_References_findAt___closed__2();
lean_mark_persistent(l_Lean_Server_References_findAt___closed__2);
l_Lean_Server_References_definitionsMatching___rarg___closed__1 = _init_l_Lean_Server_References_definitionsMatching___rarg___closed__1();
lean_mark_persistent(l_Lean_Server_References_definitionsMatching___rarg___closed__1);
l_Lean_Server_References_definitionsMatching___rarg___closed__2 = _init_l_Lean_Server_References_definitionsMatching___rarg___closed__2();
lean_mark_persistent(l_Lean_Server_References_definitionsMatching___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
