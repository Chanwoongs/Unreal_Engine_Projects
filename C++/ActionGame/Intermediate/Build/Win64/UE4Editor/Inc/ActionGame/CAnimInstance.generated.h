// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EActionType : uint8;
#ifdef ACTIONGAME_CAnimInstance_generated_h
#error "CAnimInstance.generated.h already included, missing '#pragma once' in CAnimInstance.h"
#endif
#define ACTIONGAME_CAnimInstance_generated_h

#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_SPARSE_DATA
#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActionTypeChanged);


#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActionTypeChanged);


#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAnimInstance(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance)


#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCAnimInstance(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance)


#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance(UCAnimInstance&&); \
	NO_API UCAnimInstance(const UCAnimInstance&); \
public:


#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance(UCAnimInstance&&); \
	NO_API UCAnimInstance(const UCAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance)


#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UCAnimInstance, Direction); } \
	FORCEINLINE static uint32 __PPO__ActionType() { return STRUCT_OFFSET(UCAnimInstance, ActionType); } \
	FORCEINLINE static uint32 __PPO__FeetData() { return STRUCT_OFFSET(UCAnimInstance, FeetData); }


#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_9_PROLOG
#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_INCLASS \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_CAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Characters_CAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
