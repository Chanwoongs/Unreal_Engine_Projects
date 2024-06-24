// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CMontagesComponent_generated_h
#error "CMontagesComponent.generated.h already included, missing '#pragma once' in CMontagesComponent.h"
#endif
#define ACTIONGAME_CMontagesComponent_generated_h

#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMontageData_Statics; \
	ACTIONGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ACTIONGAME_API UScriptStruct* StaticStruct<struct FMontageData>();

#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_SPARSE_DATA
#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCMontagesComponent(); \
	friend struct Z_Construct_UClass_UCMontagesComponent_Statics; \
public: \
	DECLARE_CLASS(UCMontagesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCMontagesComponent)


#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCMontagesComponent(); \
	friend struct Z_Construct_UClass_UCMontagesComponent_Statics; \
public: \
	DECLARE_CLASS(UCMontagesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCMontagesComponent)


#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCMontagesComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCMontagesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCMontagesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCMontagesComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCMontagesComponent(UCMontagesComponent&&); \
	NO_API UCMontagesComponent(const UCMontagesComponent&); \
public:


#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCMontagesComponent(UCMontagesComponent&&); \
	NO_API UCMontagesComponent(const UCMontagesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCMontagesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCMontagesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCMontagesComponent)


#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataTable() { return STRUCT_OFFSET(UCMontagesComponent, DataTable); }


#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_29_PROLOG
#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_INCLASS \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CMontagesComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCMontagesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Components_CMontagesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
