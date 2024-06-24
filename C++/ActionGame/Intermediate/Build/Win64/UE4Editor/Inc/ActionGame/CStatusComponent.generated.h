// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CStatusComponent_generated_h
#error "CStatusComponent.generated.h already included, missing '#pragma once' in CStatusComponent.h"
#endif
#define ACTIONGAME_CStatusComponent_generated_h

#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_SPARSE_DATA
#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCStatusComponent(); \
	friend struct Z_Construct_UClass_UCStatusComponent_Statics; \
public: \
	DECLARE_CLASS(UCStatusComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCStatusComponent)


#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCStatusComponent(); \
	friend struct Z_Construct_UClass_UCStatusComponent_Statics; \
public: \
	DECLARE_CLASS(UCStatusComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCStatusComponent)


#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCStatusComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCStatusComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStatusComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStatusComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStatusComponent(UCStatusComponent&&); \
	NO_API UCStatusComponent(const UCStatusComponent&); \
public:


#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStatusComponent(UCStatusComponent&&); \
	NO_API UCStatusComponent(const UCStatusComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStatusComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStatusComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCStatusComponent)


#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UCStatusComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCStatusComponent, Speed); }


#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_14_PROLOG
#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_INCLASS \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CStatusComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCStatusComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Components_CStatusComponent_h


#define FOREACH_ENUM_ECHARACTERSPEED(op) \
	op(ECharacterSpeed::Walk) \
	op(ECharacterSpeed::Run) \
	op(ECharacterSpeed::Sprint) \
	op(ECharacterSpeed::Max) 

enum class ECharacterSpeed : uint8;
template<> ACTIONGAME_API UEnum* StaticEnum<ECharacterSpeed>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
