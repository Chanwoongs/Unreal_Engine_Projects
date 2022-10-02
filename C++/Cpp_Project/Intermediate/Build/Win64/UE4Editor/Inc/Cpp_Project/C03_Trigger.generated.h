// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CPP_PROJECT_C03_Trigger_generated_h
#error "C03_Trigger.generated.h already included, missing '#pragma once' in C03_Trigger.h"
#endif
#define CPP_PROJECT_C03_Trigger_generated_h

#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_SPARSE_DATA
#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC03_Trigger(); \
	friend struct Z_Construct_UClass_AC03_Trigger_Statics; \
public: \
	DECLARE_CLASS(AC03_Trigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(AC03_Trigger)


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAC03_Trigger(); \
	friend struct Z_Construct_UClass_AC03_Trigger_Statics; \
public: \
	DECLARE_CLASS(AC03_Trigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(AC03_Trigger)


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC03_Trigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC03_Trigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC03_Trigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC03_Trigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC03_Trigger(AC03_Trigger&&); \
	NO_API AC03_Trigger(const AC03_Trigger&); \
public:


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC03_Trigger(AC03_Trigger&&); \
	NO_API AC03_Trigger(const AC03_Trigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC03_Trigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC03_Trigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC03_Trigger)


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(AC03_Trigger, Scene); } \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(AC03_Trigger, Box); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AC03_Trigger, Text); }


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_12_PROLOG
#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_RPC_WRAPPERS \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_INCLASS \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_INCLASS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PROJECT_API UClass* StaticClass<class AC03_Trigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cpp_Project_Source_Cpp_Project_03_Collision_C03_Trigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
