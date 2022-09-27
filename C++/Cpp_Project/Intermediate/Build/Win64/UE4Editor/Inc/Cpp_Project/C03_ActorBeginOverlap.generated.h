// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CPP_PROJECT_C03_ActorBeginOverlap_generated_h
#error "C03_ActorBeginOverlap.generated.h already included, missing '#pragma once' in C03_ActorBeginOverlap.h"
#endif
#define CPP_PROJECT_C03_ActorBeginOverlap_generated_h

#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_SPARSE_DATA
#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC03_ActorBeginOverlap(); \
	friend struct Z_Construct_UClass_AC03_ActorBeginOverlap_Statics; \
public: \
	DECLARE_CLASS(AC03_ActorBeginOverlap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(AC03_ActorBeginOverlap)


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAC03_ActorBeginOverlap(); \
	friend struct Z_Construct_UClass_AC03_ActorBeginOverlap_Statics; \
public: \
	DECLARE_CLASS(AC03_ActorBeginOverlap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(AC03_ActorBeginOverlap)


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC03_ActorBeginOverlap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC03_ActorBeginOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC03_ActorBeginOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC03_ActorBeginOverlap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC03_ActorBeginOverlap(AC03_ActorBeginOverlap&&); \
	NO_API AC03_ActorBeginOverlap(const AC03_ActorBeginOverlap&); \
public:


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AC03_ActorBeginOverlap(AC03_ActorBeginOverlap&&); \
	NO_API AC03_ActorBeginOverlap(const AC03_ActorBeginOverlap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC03_ActorBeginOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC03_ActorBeginOverlap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC03_ActorBeginOverlap)


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(AC03_ActorBeginOverlap, Scene); } \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(AC03_ActorBeginOverlap, Box); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(AC03_ActorBeginOverlap, Text); }


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_7_PROLOG
#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_RPC_WRAPPERS \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_INCLASS \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_INCLASS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PROJECT_API UClass* StaticClass<class AC03_ActorBeginOverlap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cpp_Project_Source_Cpp_Project_03_Collision_C03_ActorBeginOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
