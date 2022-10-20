// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActionType : uint8;
class UCActionData;
#ifdef ACTIONGAME_CActionComponent_generated_h
#error "CActionComponent.generated.h already included, missing '#pragma once' in CActionComponent.h"
#endif
#define ACTIONGAME_CActionComponent_generated_h

#define ActionGame_Source_ActionGame_Components_CActionComponent_h_12_DELEGATE \
struct _Script_ActionGame_eventActionTypeChanged_Parms \
{ \
	EActionType InPreviousType; \
	EActionType InNewType; \
}; \
static inline void FActionTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& ActionTypeChanged, EActionType InPreviousType, EActionType InNewType) \
{ \
	_Script_ActionGame_eventActionTypeChanged_Parms Parms; \
	Parms.InPreviousType=InPreviousType; \
	Parms.InNewType=InNewType; \
	ActionTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_SPARSE_DATA
#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsWarpMode); \
	DECLARE_FUNCTION(execIsTwoHandMode); \
	DECLARE_FUNCTION(execIsOneHandMode); \
	DECLARE_FUNCTION(execIsFistMode); \
	DECLARE_FUNCTION(execIsUnarmedMode); \
	DECLARE_FUNCTION(execGetCurrent);


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsWarpMode); \
	DECLARE_FUNCTION(execIsTwoHandMode); \
	DECLARE_FUNCTION(execIsOneHandMode); \
	DECLARE_FUNCTION(execIsFistMode); \
	DECLARE_FUNCTION(execIsUnarmedMode); \
	DECLARE_FUNCTION(execGetCurrent);


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCActionComponent(); \
	friend struct Z_Construct_UClass_UCActionComponent_Statics; \
public: \
	DECLARE_CLASS(UCActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCActionComponent)


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCActionComponent(); \
	friend struct Z_Construct_UClass_UCActionComponent_Statics; \
public: \
	DECLARE_CLASS(UCActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCActionComponent)


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCActionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCActionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCActionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCActionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCActionComponent(UCActionComponent&&); \
	NO_API UCActionComponent(const UCActionComponent&); \
public:


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCActionComponent(UCActionComponent&&); \
	NO_API UCActionComponent(const UCActionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCActionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCActionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCActionComponent)


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Datas() { return STRUCT_OFFSET(UCActionComponent, Datas); }


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_15_PROLOG
#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_INCLASS \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Components_CActionComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CActionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Components_CActionComponent_h


#define FOREACH_ENUM_EACTIONTYPE(op) \
	op(EActionType::Unarmed) \
	op(EActionType::Fist) \
	op(EActionType::OneHand) \
	op(EActionType::TwoHand) \
	op(EActionType::Warp) \
	op(EActionType::Max) 

enum class EActionType : uint8;
template<> ACTIONGAME_API UEnum* StaticEnum<EActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
