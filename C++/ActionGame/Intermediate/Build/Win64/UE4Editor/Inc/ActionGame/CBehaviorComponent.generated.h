// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBehaviorType : uint8;
#ifdef ACTIONGAME_CBehaviorComponent_generated_h
#error "CBehaviorComponent.generated.h already included, missing '#pragma once' in CBehaviorComponent.h"
#endif
#define ACTIONGAME_CBehaviorComponent_generated_h

#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_12_DELEGATE \
struct _Script_ActionGame_eventBehaviorTypeChanged_Parms \
{ \
	EBehaviorType InPrevType; \
	EBehaviorType InNewType; \
}; \
static inline void FBehaviorTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& BehaviorTypeChanged, EBehaviorType InPrevType, EBehaviorType InNewType) \
{ \
	_Script_ActionGame_eventBehaviorTypeChanged_Parms Parms; \
	Parms.InPrevType=InPrevType; \
	Parms.InNewType=InNewType; \
	BehaviorTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_SPARSE_DATA
#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAvoidMode); \
	DECLARE_FUNCTION(execIsHittedMode); \
	DECLARE_FUNCTION(execIsPatrolMode); \
	DECLARE_FUNCTION(execIsActionMode); \
	DECLARE_FUNCTION(execIsApproachMode); \
	DECLARE_FUNCTION(execIsWaitMode);


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAvoidMode); \
	DECLARE_FUNCTION(execIsHittedMode); \
	DECLARE_FUNCTION(execIsPatrolMode); \
	DECLARE_FUNCTION(execIsActionMode); \
	DECLARE_FUNCTION(execIsApproachMode); \
	DECLARE_FUNCTION(execIsWaitMode);


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCBehaviorComponent(); \
	friend struct Z_Construct_UClass_UCBehaviorComponent_Statics; \
public: \
	DECLARE_CLASS(UCBehaviorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCBehaviorComponent)


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCBehaviorComponent(); \
	friend struct Z_Construct_UClass_UCBehaviorComponent_Statics; \
public: \
	DECLARE_CLASS(UCBehaviorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCBehaviorComponent)


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCBehaviorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCBehaviorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCBehaviorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCBehaviorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCBehaviorComponent(UCBehaviorComponent&&); \
	NO_API UCBehaviorComponent(const UCBehaviorComponent&); \
public:


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCBehaviorComponent(UCBehaviorComponent&&); \
	NO_API UCBehaviorComponent(const UCBehaviorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCBehaviorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCBehaviorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCBehaviorComponent)


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BehaviorKey() { return STRUCT_OFFSET(UCBehaviorComponent, BehaviorKey); } \
	FORCEINLINE static uint32 __PPO__PlayerKey() { return STRUCT_OFFSET(UCBehaviorComponent, PlayerKey); }


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_15_PROLOG
#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_INCLASS \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CBehaviorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCBehaviorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Components_CBehaviorComponent_h


#define FOREACH_ENUM_EBEHAVIORTYPE(op) \
	op(EBehaviorType::Wait) \
	op(EBehaviorType::Approach) \
	op(EBehaviorType::Action) \
	op(EBehaviorType::Patrol) \
	op(EBehaviorType::Hitted) \
	op(EBehaviorType::Avoid) 

enum class EBehaviorType : uint8;
template<> ACTIONGAME_API UEnum* StaticEnum<EBehaviorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
