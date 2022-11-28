#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
184,
189,
190,
191,
192,
193,
194,
195,
196,
198,
199,
259,
260,
262,
286,
287,
288,
298,
299,
300,
301,
302,
369,
370,
371,
374,
406,
407,
409,
411,
413,
415,
420,
428,
429,
430,
431,
432,
433,
434,
435,
436,
437,
533,
534,
541,
544,
546,
551,
552,
554,
555,
559,
560,
561,
562,
564,
565,
566,
569,
571,
572,
573,
634,
635,
637,
645,
646,
647,
648,
649,
653,
654,
655,
656,
657,
658,
660,
661,
662,
664,
665,
666,
668,
856,
999,
1000,
5379,
5380,
5382,
5383,
5384,
5385,
5386,
5388,
5390,
5392,
5393,
5400,
5402,
5406,
5407,
5409,
5411,
5413,
5425,
5434,
5435,
5437,
5438,
5439,
5440,
5441,
5443,
5445,
6284,
6288,
6290,
6291,
6292,
6293,
6337,
6338,
6339,
6354,
6355,
6356,
6357,
6388,
6431,
6441,
6442,
6443,
6691,
6693,
6694,
6718,
6719,
6720,
6734,
6740,
6747,
6757,
6760,
6828,
6834,
6835,
6836,
6837,
6843,
6856,
6876,
6877,
6885,
6887,
6894,
6895,
6898,
6900,
6905,
6911,
6912,
6919,
6921,
6931,
6934,
6935,
6936,
6946,
6957,
6963,
6964,
6965,
6967,
6968,
6978,
6996,
7009,
7028,
7052,
7053,
7386,
7515,
7692,
7693,
7696,
7699,
7747,
7898,
7899,
9240,
9259,
9266,
9267,
9269,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 184,
ves_icall_System_Array_InternalCreate,
// token 189,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 190,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 191,
ves_icall_System_Array_CanChangePrimitive,
// token 192,
ves_icall_System_Array_FastCopy_raw,
// token 193,
ves_icall_System_Array_GetLength_raw,
// token 194,
ves_icall_System_Array_GetLowerBound_raw,
// token 195,
ves_icall_System_Array_GetGenericValue_icall,
// token 196,
ves_icall_System_Array_GetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetValueImpl_raw,
// token 199,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 259,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 260,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 262,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 286,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 287,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 288,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 298,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 299,
ves_icall_System_Enum_ToObject_raw,
// token 300,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 301,
ves_icall_System_Enum_get_underlying_type_raw,
// token 302,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 369,
ves_icall_System_Environment_get_ProcessorCount,
// token 370,
ves_icall_System_Environment_get_TickCount,
// token 371,
ves_icall_System_Environment_get_TickCount64,
// token 374,
ves_icall_System_Environment_FailFast_raw,
// token 406,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 407,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 409,
ves_icall_System_GC_SuppressFinalize_raw,
// token 411,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 413,
ves_icall_System_GC_GetGCMemoryInfo,
// token 415,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 420,
ves_icall_System_Object_MemberwiseClone_raw,
// token 428,
ves_icall_System_Math_Abs_double,
// token 429,
ves_icall_System_Math_Ceiling,
// token 430,
ves_icall_System_Math_Cos,
// token 431,
ves_icall_System_Math_Floor,
// token 432,
ves_icall_System_Math_Log10,
// token 433,
ves_icall_System_Math_Pow,
// token 434,
ves_icall_System_Math_Sin,
// token 435,
ves_icall_System_Math_Sqrt,
// token 436,
ves_icall_System_Math_Tan,
// token 437,
ves_icall_System_Math_ModF,
// token 533,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 534,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 541,
ves_icall_RuntimeType_make_array_type_raw,
// token 544,
ves_icall_RuntimeType_make_byref_type_raw,
// token 546,
ves_icall_RuntimeType_MakePointerType_raw,
// token 551,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 552,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 554,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 555,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 559,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 560,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 561,
ves_icall_System_RuntimeType_getFullName_raw,
// token 562,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 564,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 565,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 566,
ves_icall_RuntimeType_GetFields_native_raw,
// token 569,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 571,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 572,
ves_icall_RuntimeType_get_Name_raw,
// token 573,
ves_icall_RuntimeType_get_Namespace_raw,
// token 634,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 635,
ves_icall_reflection_get_token_raw,
// token 637,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 645,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 646,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 647,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 648,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 649,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 653,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 654,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 655,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 656,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 657,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 658,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 660,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 661,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 662,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 664,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 665,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 666,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 668,
ves_icall_System_String_FastAllocateString_raw,
// token 856,
ves_icall_System_Type_internal_from_handle_raw,
// token 999,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1000,
ves_icall_System_ValueType_Equals_raw,
// token 5379,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5380,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5382,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5383,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5384,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5385,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5386,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5388,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5390,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5392,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5393,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5400,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5402,
mono_monitor_exit_icall_raw,
// token 5406,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5407,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5409,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5411,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5413,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5425,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5434,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5435,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5437,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5438,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5439,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5440,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5441,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5443,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5445,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6284,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6288,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6290,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6291,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6292,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6293,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6337,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6338,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6339,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6354,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6355,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6356,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6357,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6388,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6431,
mono_object_hash_icall_raw,
// token 6441,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6442,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6443,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6691,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6693,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6694,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6718,
mono_digest_get_public_token,
// token 6719,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6720,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6734,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6740,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6747,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6757,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6760,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6828,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6834,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6835,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6836,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6837,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6843,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6856,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6876,
ves_icall_reflection_get_token_raw,
// token 6877,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6885,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6887,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6894,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6895,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6898,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6900,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6905,
ves_icall_reflection_get_token_raw,
// token 6911,
ves_icall_get_method_info_raw,
// token 6912,
ves_icall_get_method_attributes,
// token 6919,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6921,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6931,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6934,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6935,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6936,
ves_icall_reflection_get_token_raw,
// token 6946,
ves_icall_InternalInvoke_raw,
// token 6957,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6963,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6964,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6965,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6967,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6968,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6978,
ves_icall_InternalInvoke_raw,
// token 6996,
ves_icall_reflection_get_token_raw,
// token 7009,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7028,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7052,
ves_icall_reflection_get_token_raw,
// token 7053,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7386,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7515,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7692,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7693,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7696,
ves_icall_ModuleBuilder_getToken_raw,
// token 7699,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7747,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7898,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7899,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9240,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9259,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9266,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 9267,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9269,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
