// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ACTIONGAME_CAIController_generated_h
#error "CAIController.generated.h already included, missing '#pragma once' in CAIController.h"
#endif
#define ACTIONGAME_CAIController_generated_h

#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACAIController(); \
	friend struct Z_Construct_UClass_ACAIController_Statics; \
public: \
	DECLARE_CLASS(ACAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACAIController)


#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACAIController(); \
	friend struct Z_Construct_UClass_ACAIController_Statics; \
public: \
	DECLARE_CLASS(ACAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACAIController)


#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAIController(ACAIController&&); \
	NO_API ACAIController(const ACAIController&); \
public:


#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAIController(ACAIController&&); \
	NO_API ACAIController(const ACAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACAIController)


#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeleeActionRange() { return STRUCT_OFFSET(ACAIController, MeleeActionRange); } \
	FORCEINLINE static uint32 __PPO__bDrawDebug() { return STRUCT_OFFSET(ACAIController, bDrawDebug); } \
	FORCEINLINE static uint32 __PPO__AdjustCircleHeight() { return STRUCT_OFFSET(ACAIController, AdjustCircleHeight); } \
	FORCEINLINE static uint32 __PPO__Perception() { return STRUCT_OFFSET(ACAIController, Perception); } \
	FORCEINLINE static uint32 __PPO__Behavior() { return STRUCT_OFFSET(ACAIController, Behavior); }


#define ActionGame_Source_ActionGame_Characters_CAIController_h_7_PROLOG
#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_INCLASS \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Characters_CAIController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_CAIController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Characters_CAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
