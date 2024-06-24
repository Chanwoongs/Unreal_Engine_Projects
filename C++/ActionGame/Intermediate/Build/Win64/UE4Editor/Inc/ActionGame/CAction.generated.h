// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CAction_generated_h
#error "CAction.generated.h already included, missing '#pragma once' in CAction.h"
#endif
#define ACTIONGAME_CAction_generated_h

#define ActionGame_Source_ActionGame_Actions_CAction_h_12_SPARSE_DATA
#define ActionGame_Source_ActionGame_Actions_CAction_h_12_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Actions_CAction_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Actions_CAction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAction(); \
	friend struct Z_Construct_UClass_UCAction_Statics; \
public: \
	DECLARE_CLASS(UCAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCAction)


#define ActionGame_Source_ActionGame_Actions_CAction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCAction(); \
	friend struct Z_Construct_UClass_UCAction_Statics; \
public: \
	DECLARE_CLASS(UCAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCAction)


#define ActionGame_Source_ActionGame_Actions_CAction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAction(UCAction&&); \
	NO_API UCAction(const UCAction&); \
public:


#define ActionGame_Source_ActionGame_Actions_CAction_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAction(UCAction&&); \
	NO_API UCAction(const UCAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAction)


#define ActionGame_Source_ActionGame_Actions_CAction_h_12_PRIVATE_PROPERTY_OFFSET
#define ActionGame_Source_ActionGame_Actions_CAction_h_9_PROLOG
#define ActionGame_Source_ActionGame_Actions_CAction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_INCLASS \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Actions_CAction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CAction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Actions_CAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
