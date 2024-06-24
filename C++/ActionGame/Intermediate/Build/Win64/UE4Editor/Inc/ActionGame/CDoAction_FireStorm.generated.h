// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CDoAction_FireStorm_generated_h
#error "CDoAction_FireStorm.generated.h already included, missing '#pragma once' in CDoAction_FireStorm.h"
#endif
#define ACTIONGAME_CDoAction_FireStorm_generated_h

#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHitted); \
	DECLARE_FUNCTION(execFinish);


#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitted); \
	DECLARE_FUNCTION(execFinish);


#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACDoAction_FireStorm(); \
	friend struct Z_Construct_UClass_ACDoAction_FireStorm_Statics; \
public: \
	DECLARE_CLASS(ACDoAction_FireStorm, ACDoAction, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACDoAction_FireStorm)


#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACDoAction_FireStorm(); \
	friend struct Z_Construct_UClass_ACDoAction_FireStorm_Statics; \
public: \
	DECLARE_CLASS(ACDoAction_FireStorm, ACDoAction, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACDoAction_FireStorm)


#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACDoAction_FireStorm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACDoAction_FireStorm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACDoAction_FireStorm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACDoAction_FireStorm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACDoAction_FireStorm(ACDoAction_FireStorm&&); \
	NO_API ACDoAction_FireStorm(const ACDoAction_FireStorm&); \
public:


#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACDoAction_FireStorm() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACDoAction_FireStorm(ACDoAction_FireStorm&&); \
	NO_API ACDoAction_FireStorm(const ACDoAction_FireStorm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACDoAction_FireStorm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACDoAction_FireStorm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACDoAction_FireStorm)


#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Time() { return STRUCT_OFFSET(ACDoAction_FireStorm, Time); } \
	FORCEINLINE static uint32 __PPO__Distance() { return STRUCT_OFFSET(ACDoAction_FireStorm, Distance); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(ACDoAction_FireStorm, Speed); } \
	FORCEINLINE static uint32 __PPO__HitTime() { return STRUCT_OFFSET(ACDoAction_FireStorm, HitTime); }


#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_7_PROLOG
#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_INCLASS \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACDoAction_FireStorm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Actions_CDoAction_FireStorm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
