// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CEnemy_AI_generated_h
#error "CEnemy_AI.generated.h already included, missing '#pragma once' in CEnemy_AI.h"
#endif
#define ACTIONGAME_CEnemy_AI_generated_h

#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEnemy_AI(); \
	friend struct Z_Construct_UClass_ACEnemy_AI_Statics; \
public: \
	DECLARE_CLASS(ACEnemy_AI, ACEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACEnemy_AI)


#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACEnemy_AI(); \
	friend struct Z_Construct_UClass_ACEnemy_AI_Statics; \
public: \
	DECLARE_CLASS(ACEnemy_AI, ACEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACEnemy_AI)


#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACEnemy_AI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACEnemy_AI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEnemy_AI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEnemy_AI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEnemy_AI(ACEnemy_AI&&); \
	NO_API ACEnemy_AI(const ACEnemy_AI&); \
public:


#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEnemy_AI(ACEnemy_AI&&); \
	NO_API ACEnemy_AI(const ACEnemy_AI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEnemy_AI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEnemy_AI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEnemy_AI)


#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BehaviorTree() { return STRUCT_OFFSET(ACEnemy_AI, BehaviorTree); } \
	FORCEINLINE static uint32 __PPO__TeamID() { return STRUCT_OFFSET(ACEnemy_AI, TeamID); }


#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_7_PROLOG
#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_INCLASS \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_CEnemy_AI_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACEnemy_AI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Characters_CEnemy_AI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
