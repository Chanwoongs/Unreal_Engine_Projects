// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CPatrolPath_generated_h
#error "CPatrolPath.generated.h already included, missing '#pragma once' in CPatrolPath.h"
#endif
#define ACTIONGAME_CPatrolPath_generated_h

#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPatrolPath(); \
	friend struct Z_Construct_UClass_ACPatrolPath_Statics; \
public: \
	DECLARE_CLASS(ACPatrolPath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACPatrolPath)


#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACPatrolPath(); \
	friend struct Z_Construct_UClass_ACPatrolPath_Statics; \
public: \
	DECLARE_CLASS(ACPatrolPath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACPatrolPath)


#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPatrolPath(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPatrolPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPatrolPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPatrolPath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPatrolPath(ACPatrolPath&&); \
	NO_API ACPatrolPath(const ACPatrolPath&); \
public:


#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPatrolPath(ACPatrolPath&&); \
	NO_API ACPatrolPath(const ACPatrolPath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPatrolPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPatrolPath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPatrolPath)


#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bLoop() { return STRUCT_OFFSET(ACPatrolPath, bLoop); } \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ACPatrolPath, Scene); } \
	FORCEINLINE static uint32 __PPO__Spline() { return STRUCT_OFFSET(ACPatrolPath, Spline); } \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(ACPatrolPath, Text); }


#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_7_PROLOG
#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_INCLASS \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actors_CPatrolPath_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACPatrolPath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Actors_CPatrolPath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
