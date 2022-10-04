// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PROJECT_CAnimInstance_generated_h
#error "CAnimInstance.generated.h already included, missing '#pragma once' in CAnimInstance.h"
#endif
#define CPP_PROJECT_CAnimInstance_generated_h

#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_SPARSE_DATA
#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_RPC_WRAPPERS
#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAnimInstance(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance)


#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCAnimInstance(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance)


#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance(UCAnimInstance&&); \
	NO_API UCAnimInstance(const UCAnimInstance&); \
public:


#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance(UCAnimInstance&&); \
	NO_API UCAnimInstance(const UCAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance)


#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UCAnimInstance, Direction); } \
	FORCEINLINE static uint32 __PPO__Pitch() { return STRUCT_OFFSET(UCAnimInstance, Pitch); } \
	FORCEINLINE static uint32 __PPO__bEquipped() { return STRUCT_OFFSET(UCAnimInstance, bEquipped); } \
	FORCEINLINE static uint32 __PPO__bAiming() { return STRUCT_OFFSET(UCAnimInstance, bAiming); }


#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_7_PROLOG
#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_RPC_WRAPPERS \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_INCLASS \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_CAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PROJECT_API UClass* StaticClass<class UCAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cpp_Project_Source_Cpp_Project_CAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
