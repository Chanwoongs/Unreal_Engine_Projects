// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CUserWidget_Health_generated_h
#error "CUserWidget_Health.generated.h already included, missing '#pragma once' in CUserWidget_Health.h"
#endif
#define ACTIONGAME_CUserWidget_Health_generated_h

#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_EVENT_PARMS \
	struct CUserWidget_Health_eventUpdate_Parms \
	{ \
		float Health; \
		float MaxHealth; \
	};


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_CALLBACK_WRAPPERS
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCUserWidget_Health(); \
	friend struct Z_Construct_UClass_UCUserWidget_Health_Statics; \
public: \
	DECLARE_CLASS(UCUserWidget_Health, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCUserWidget_Health)


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCUserWidget_Health(); \
	friend struct Z_Construct_UClass_UCUserWidget_Health_Statics; \
public: \
	DECLARE_CLASS(UCUserWidget_Health, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCUserWidget_Health)


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUserWidget_Health(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUserWidget_Health) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUserWidget_Health); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUserWidget_Health); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUserWidget_Health(UCUserWidget_Health&&); \
	NO_API UCUserWidget_Health(const UCUserWidget_Health&); \
public:


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUserWidget_Health(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUserWidget_Health(UCUserWidget_Health&&); \
	NO_API UCUserWidget_Health(const UCUserWidget_Health&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUserWidget_Health); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUserWidget_Health); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUserWidget_Health)


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_PRIVATE_PROPERTY_OFFSET
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_7_PROLOG \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_EVENT_PARMS


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_CALLBACK_WRAPPERS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_INCLASS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_CALLBACK_WRAPPERS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCUserWidget_Health>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Widgets_CUserWidget_Health_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
