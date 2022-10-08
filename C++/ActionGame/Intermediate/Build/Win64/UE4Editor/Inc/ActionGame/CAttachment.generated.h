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
class UPrimitiveComponent;
struct FHitResult;
#ifdef ACTIONGAME_CAttachment_generated_h
#error "CAttachment.generated.h already included, missing '#pragma once' in CAttachment.h"
#endif
#define ACTIONGAME_CAttachment_generated_h

#define ActionGame_Source_ActionGame_Actions_CAttachment_h_8_DELEGATE \
struct _Script_ActionGame_eventAttachmentEndOverlap_Parms \
{ \
	ACharacter* InAttacker; \
	AActor* InAttackCauser; \
	ACharacter* InOtherCharacter; \
}; \
static inline void FAttachmentEndOverlap_DelegateWrapper(const FMulticastScriptDelegate& AttachmentEndOverlap, ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOtherCharacter) \
{ \
	_Script_ActionGame_eventAttachmentEndOverlap_Parms Parms; \
	Parms.InAttacker=InAttacker; \
	Parms.InAttackCauser=InAttackCauser; \
	Parms.InOtherCharacter=InOtherCharacter; \
	AttachmentEndOverlap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_7_DELEGATE \
struct _Script_ActionGame_eventAttachmentBeginOverlap_Parms \
{ \
	ACharacter* InAttacker; \
	AActor* InAttackCauser; \
	ACharacter* InOtherCharacter; \
}; \
static inline void FAttachmentBeginOverlap_DelegateWrapper(const FMulticastScriptDelegate& AttachmentBeginOverlap, ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOtherCharacter) \
{ \
	_Script_ActionGame_eventAttachmentBeginOverlap_Parms Parms; \
	Parms.InAttacker=InAttacker; \
	Parms.InAttackCauser=InAttackCauser; \
	Parms.InOtherCharacter=InOtherCharacter; \
	AttachmentBeginOverlap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_SPARSE_DATA
#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execAttachTo);


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execAttachTo);


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_EVENT_PARMS
#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_CALLBACK_WRAPPERS
#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACAttachment(); \
	friend struct Z_Construct_UClass_ACAttachment_Statics; \
public: \
	DECLARE_CLASS(ACAttachment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACAttachment)


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACAttachment(); \
	friend struct Z_Construct_UClass_ACAttachment_Statics; \
public: \
	DECLARE_CLASS(ACAttachment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACAttachment)


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACAttachment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAttachment(ACAttachment&&); \
	NO_API ACAttachment(const ACAttachment&); \
public:


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAttachment(ACAttachment&&); \
	NO_API ACAttachment(const ACAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACAttachment)


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(ACAttachment, Scene); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(ACAttachment, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(ACAttachment, State); } \
	FORCEINLINE static uint32 __PPO__Status() { return STRUCT_OFFSET(ACAttachment, Status); }


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_10_PROLOG \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_EVENT_PARMS


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_CALLBACK_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_INCLASS \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Actions_CAttachment_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_CALLBACK_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CAttachment_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Actions_CAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
