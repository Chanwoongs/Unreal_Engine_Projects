// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CTargetComponent_generated_h
#error "CTargetComponent.generated.h already included, missing '#pragma once' in CTargetComponent.h"
#endif
#define ACTIONGAME_CTargetComponent_generated_h

#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_SPARSE_DATA
#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCTargetComponent(); \
	friend struct Z_Construct_UClass_UCTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UCTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCTargetComponent)


#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCTargetComponent(); \
	friend struct Z_Construct_UClass_UCTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UCTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCTargetComponent)


#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCTargetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCTargetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCTargetComponent(UCTargetComponent&&); \
	NO_API UCTargetComponent(const UCTargetComponent&); \
public:


#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCTargetComponent(UCTargetComponent&&); \
	NO_API UCTargetComponent(const UCTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCTargetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCTargetComponent)


#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TraceRadius() { return STRUCT_OFFSET(UCTargetComponent, TraceRadius); } \
	FORCEINLINE static uint32 __PPO__InterpolateSpeed() { return STRUCT_OFFSET(UCTargetComponent, InterpolateSpeed); } \
	FORCEINLINE static uint32 __PPO__Debug() { return STRUCT_OFFSET(UCTargetComponent, Debug); } \
	FORCEINLINE static uint32 __PPO__Particle() { return STRUCT_OFFSET(UCTargetComponent, Particle); }


#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_9_PROLOG
#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_INCLASS \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CTargetComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Components_CTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
