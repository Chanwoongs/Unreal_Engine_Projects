// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FLinearColor;
class ACPlayer;
#ifdef CPP_PROJECT_C02_LineTrace_generated_h
#error "C02_LineTrace.generated.h already included, missing '#pragma once' in C02_LineTrace.h"
#endif
#define CPP_PROJECT_C02_LineTrace_generated_h

#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_8_DELEGATE \
struct _Script_Cpp_Project_eventTraceResult_Parms \
{ \
	AActor* InActor; \
	FLinearColor InColor; \
}; \
static inline void FTraceResult_DelegateWrapper(const FMulticastScriptDelegate& TraceResult, AActor* InActor, FLinearColor InColor) \
{ \
	_Script_Cpp_Project_eventTraceResult_Parms Parms; \
	Parms.InActor=InActor; \
	Parms.InColor=InColor; \
	TraceResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_SPARSE_DATA
#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreColor); \
	DECLARE_FUNCTION(execStartJump);


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreColor); \
	DECLARE_FUNCTION(execStartJump);


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC02_LineTrace(); \
	friend struct Z_Construct_UClass_AC02_LineTrace_Statics; \
public: \
	DECLARE_CLASS(AC02_LineTrace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(AC02_LineTrace)


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAC02_LineTrace(); \
	friend struct Z_Construct_UClass_AC02_LineTrace_Statics; \
public: \
	DECLARE_CLASS(AC02_LineTrace, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(AC02_LineTrace)


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC02_LineTrace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC02_LineTrace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC02_LineTrace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC02_LineTrace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC02_LineTrace(AC02_LineTrace&&); \
	NO_API AC02_LineTrace(const AC02_LineTrace&); \
public:


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC02_LineTrace(AC02_LineTrace&&); \
	NO_API AC02_LineTrace(const AC02_LineTrace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC02_LineTrace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC02_LineTrace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC02_LineTrace)


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(AC02_LineTrace, Scene); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AC02_LineTrace, Text); }


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_10_PROLOG
#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_RPC_WRAPPERS \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_INCLASS \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_INCLASS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PROJECT_API UClass* StaticClass<class AC02_LineTrace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cpp_Project_Source_Cpp_Project_04_Trace_C02_LineTrace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
