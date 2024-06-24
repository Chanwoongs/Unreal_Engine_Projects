// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CUserWidget_ActionList_generated_h
#error "CUserWidget_ActionList.generated.h already included, missing '#pragma once' in CUserWidget_ActionList.h"
#endif
#define ACTIONGAME_CUserWidget_ActionList_generated_h

#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserWidget_ActionData_Statics; \
	ACTIONGAME_API static class UScriptStruct* StaticStruct();


template<> ACTIONGAME_API UScriptStruct* StaticStruct<struct FUserWidget_ActionData>();

#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_7_DELEGATE \
static inline void FUserWidget_ActionItem_Clicked_DelegateWrapper(const FMulticastScriptDelegate& UserWidget_ActionItem_Clicked) \
{ \
	UserWidget_ActionItem_Clicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_SPARSE_DATA
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCUserWidget_ActionList(); \
	friend struct Z_Construct_UClass_UCUserWidget_ActionList_Statics; \
public: \
	DECLARE_CLASS(UCUserWidget_ActionList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCUserWidget_ActionList)


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCUserWidget_ActionList(); \
	friend struct Z_Construct_UClass_UCUserWidget_ActionList_Statics; \
public: \
	DECLARE_CLASS(UCUserWidget_ActionList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCUserWidget_ActionList)


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUserWidget_ActionList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUserWidget_ActionList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUserWidget_ActionList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUserWidget_ActionList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUserWidget_ActionList(UCUserWidget_ActionList&&); \
	NO_API UCUserWidget_ActionList(const UCUserWidget_ActionList&); \
public:


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUserWidget_ActionList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUserWidget_ActionList(UCUserWidget_ActionList&&); \
	NO_API UCUserWidget_ActionList(const UCUserWidget_ActionList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUserWidget_ActionList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUserWidget_ActionList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUserWidget_ActionList)


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_PRIVATE_PROPERTY_OFFSET
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_19_PROLOG
#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_SPARSE_DATA \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_INCLASS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_SPARSE_DATA \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCUserWidget_ActionList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Widgets_CUserWidget_ActionList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
