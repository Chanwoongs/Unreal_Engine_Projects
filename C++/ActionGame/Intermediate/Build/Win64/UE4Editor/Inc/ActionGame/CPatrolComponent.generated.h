// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CPatrolComponent_generated_h
#error "CPatrolComponent.generated.h already included, missing '#pragma once' in CPatrolComponent.h"
#endif
#define ACTIONGAME_CPatrolComponent_generated_h

#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_SPARSE_DATA
#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPatrolComponent(); \
	friend struct Z_Construct_UClass_UCPatrolComponent_Statics; \
public: \
	DECLARE_CLASS(UCPatrolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCPatrolComponent)


#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCPatrolComponent(); \
	friend struct Z_Construct_UClass_UCPatrolComponent_Statics; \
public: \
	DECLARE_CLASS(UCPatrolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCPatrolComponent)


#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPatrolComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPatrolComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPatrolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPatrolComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPatrolComponent(UCPatrolComponent&&); \
	NO_API UCPatrolComponent(const UCPatrolComponent&); \
public:


#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPatrolComponent(UCPatrolComponent&&); \
	NO_API UCPatrolComponent(const UCPatrolComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPatrolComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPatrolComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPatrolComponent)


#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Path() { return STRUCT_OFFSET(UCPatrolComponent, Path); } \
	FORCEINLINE static uint32 __PPO__Index() { return STRUCT_OFFSET(UCPatrolComponent, Index); } \
	FORCEINLINE static uint32 __PPO__bReverse() { return STRUCT_OFFSET(UCPatrolComponent, bReverse); } \
	FORCEINLINE static uint32 __PPO__AcceptanceRadius() { return STRUCT_OFFSET(UCPatrolComponent, AcceptanceRadius); }


#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_8_PROLOG
#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_INCLASS \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CPatrolComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCPatrolComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Components_CPatrolComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
