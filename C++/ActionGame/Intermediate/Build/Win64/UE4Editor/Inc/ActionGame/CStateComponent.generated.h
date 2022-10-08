// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateType : uint8;
#ifdef ACTIONGAME_CStateComponent_generated_h
#error "CStateComponent.generated.h already included, missing '#pragma once' in CStateComponent.h"
#endif
#define ACTIONGAME_CStateComponent_generated_h

#define ActionGame_Source_ActionGame_Components_CStateComponent_h_13_DELEGATE \
struct _Script_ActionGame_eventStateTypeChanged_Parms \
{ \
	EStateType InPreviousType; \
	EStateType InNewType; \
}; \
static inline void FStateTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTypeChanged, EStateType InPreviousType, EStateType InNewType) \
{ \
	_Script_ActionGame_eventStateTypeChanged_Parms Parms; \
	Parms.InPreviousType=InPreviousType; \
	Parms.InNewType=InNewType; \
	StateTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_SPARSE_DATA
#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsActionMode); \
	DECLARE_FUNCTION(execIsEquipMode); \
	DECLARE_FUNCTION(execIsBackstepMode); \
	DECLARE_FUNCTION(execIsRollMode); \
	DECLARE_FUNCTION(execIsIdleMode);


#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsActionMode); \
	DECLARE_FUNCTION(execIsEquipMode); \
	DECLARE_FUNCTION(execIsBackstepMode); \
	DECLARE_FUNCTION(execIsRollMode); \
	DECLARE_FUNCTION(execIsIdleMode);


#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public:


#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCStateComponent)


#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_PRIVATE_PROPERTY_OFFSET
#define ActionGame_Source_ActionGame_Components_CStateComponent_h_16_PROLOG
#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_INCLASS \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Components_CStateComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CStateComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Components_CStateComponent_h


#define FOREACH_ENUM_ESTATETYPE(op) \
	op(EStateType::Idle) \
	op(EStateType::Roll) \
	op(EStateType::Backstep) \
	op(EStateType::Equip) \
	op(EStateType::Action) \
	op(EStateType::Max) 

enum class EStateType : uint8;
template<> ACTIONGAME_API UEnum* StaticEnum<EStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
