// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CFeetComponent_generated_h
#error "CFeetComponent.generated.h already included, missing '#pragma once' in CFeetComponent.h"
#endif
#define ACTIONGAME_CFeetComponent_generated_h

#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFeetData_Statics; \
	ACTIONGAME_API static class UScriptStruct* StaticStruct();


template<> ACTIONGAME_API UScriptStruct* StaticStruct<struct FFeetData>();

#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_SPARSE_DATA
#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCFeetComponent(); \
	friend struct Z_Construct_UClass_UCFeetComponent_Statics; \
public: \
	DECLARE_CLASS(UCFeetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCFeetComponent)


#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUCFeetComponent(); \
	friend struct Z_Construct_UClass_UCFeetComponent_Statics; \
public: \
	DECLARE_CLASS(UCFeetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCFeetComponent)


#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCFeetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCFeetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCFeetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCFeetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCFeetComponent(UCFeetComponent&&); \
	NO_API UCFeetComponent(const UCFeetComponent&); \
public:


#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCFeetComponent(UCFeetComponent&&); \
	NO_API UCFeetComponent(const UCFeetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCFeetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCFeetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCFeetComponent)


#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DrawDebugType() { return STRUCT_OFFSET(UCFeetComponent, DrawDebugType); } \
	FORCEINLINE static uint32 __PPO__LeftSocket() { return STRUCT_OFFSET(UCFeetComponent, LeftSocket); } \
	FORCEINLINE static uint32 __PPO__RightSocket() { return STRUCT_OFFSET(UCFeetComponent, RightSocket); } \
	FORCEINLINE static uint32 __PPO__TraceDistance() { return STRUCT_OFFSET(UCFeetComponent, TraceDistance); } \
	FORCEINLINE static uint32 __PPO__InterpSpeed() { return STRUCT_OFFSET(UCFeetComponent, InterpSpeed); } \
	FORCEINLINE static uint32 __PPO__OffsetDistance() { return STRUCT_OFFSET(UCFeetComponent, OffsetDistance); }


#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_35_PROLOG
#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_INCLASS \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_SPARSE_DATA \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Components_CFeetComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCFeetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Components_CFeetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
