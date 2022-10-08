// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class AActor;
#ifdef ACTIONGAME_CDoAction_generated_h
#error "CDoAction.generated.h already included, missing '#pragma once' in CDoAction.h"
#endif
#define ACTIONGAME_CDoAction_generated_h

#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_SPARSE_DATA
#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOffAttachmentCollision); \
	DECLARE_FUNCTION(execOnAttachmentCollision); \
	DECLARE_FUNCTION(execOnAttachmentEndOverlap); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap);


#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOffAttachmentCollision); \
	DECLARE_FUNCTION(execOnAttachmentCollision); \
	DECLARE_FUNCTION(execOnAttachmentEndOverlap); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap);


#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACDoAction(); \
	friend struct Z_Construct_UClass_ACDoAction_Statics; \
public: \
	DECLARE_CLASS(ACDoAction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACDoAction)


#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesACDoAction(); \
	friend struct Z_Construct_UClass_ACDoAction_Statics; \
public: \
	DECLARE_CLASS(ACDoAction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACDoAction)


#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACDoAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACDoAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACDoAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACDoAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACDoAction(ACDoAction&&); \
	NO_API ACDoAction(const ACDoAction&); \
public:


#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACDoAction(ACDoAction&&); \
	NO_API ACDoAction(const ACDoAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACDoAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACDoAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACDoAction)


#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(ACDoAction, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(ACDoAction, State); } \
	FORCEINLINE static uint32 __PPO__Status() { return STRUCT_OFFSET(ACDoAction, Status); }


#define ActionGame_Source_ActionGame_Actions_CDoAction_h_8_PROLOG
#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_INCLASS \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Actions_CDoAction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CDoAction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACDoAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Actions_CDoAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
