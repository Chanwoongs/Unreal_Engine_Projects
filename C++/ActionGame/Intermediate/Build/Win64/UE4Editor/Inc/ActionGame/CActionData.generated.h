// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CActionData_generated_h
#error "CActionData.generated.h already included, missing '#pragma once' in CActionData.h"
#endif
#define ACTIONGAME_CActionData_generated_h

#define ActionGame_Source_ActionGame_Actions_CActionData_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoActionData_Statics; \
	ACTIONGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FEquipmentData Super;


template<> ACTIONGAME_API UScriptStruct* StaticStruct<struct FDoActionData>();

#define ActionGame_Source_ActionGame_Actions_CActionData_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipmentData_Statics; \
	ACTIONGAME_API static class UScriptStruct* StaticStruct();


template<> ACTIONGAME_API UScriptStruct* StaticStruct<struct FEquipmentData>();

#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_SPARSE_DATA
#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCActionData(); \
	friend struct Z_Construct_UClass_UCActionData_Statics; \
public: \
	DECLARE_CLASS(UCActionData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCActionData)


#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUCActionData(); \
	friend struct Z_Construct_UClass_UCActionData_Statics; \
public: \
	DECLARE_CLASS(UCActionData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCActionData)


#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCActionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCActionData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCActionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCActionData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCActionData(UCActionData&&); \
	NO_API UCActionData(const UCActionData&); \
public:


#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCActionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCActionData(UCActionData&&); \
	NO_API UCActionData(const UCActionData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCActionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCActionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCActionData)


#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_PRIVATE_PROPERTY_OFFSET
#define ActionGame_Source_ActionGame_Actions_CActionData_h_54_PROLOG
#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_INCLASS \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Actions_CActionData_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CActionData_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCActionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Actions_CActionData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
