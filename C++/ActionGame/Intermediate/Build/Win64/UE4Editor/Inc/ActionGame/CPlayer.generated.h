// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateType : uint8;
#ifdef ACTIONGAME_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define ACTIONGAME_CPlayer_generated_h

#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_SPARSE_DATA
#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStateTypeChanged);


#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStateTypeChanged);


#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACPlayer*>(this); }


#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACPlayer*>(this); }


#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public:


#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACPlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACPlayer, Camera); } \
	FORCEINLINE static uint32 __PPO__Action() { return STRUCT_OFFSET(ACPlayer, Action); } \
	FORCEINLINE static uint32 __PPO__Montages() { return STRUCT_OFFSET(ACPlayer, Montages); } \
	FORCEINLINE static uint32 __PPO__Option() { return STRUCT_OFFSET(ACPlayer, Option); } \
	FORCEINLINE static uint32 __PPO__Status() { return STRUCT_OFFSET(ACPlayer, Status); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(ACPlayer, State); }


#define ActionGame_Source_ActionGame_Characters_CPlayer_h_9_PROLOG
#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_INCLASS \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Characters_CPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_CPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Characters_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
