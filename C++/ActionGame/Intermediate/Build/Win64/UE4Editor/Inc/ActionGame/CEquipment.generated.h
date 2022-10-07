// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CEquipment_generated_h
#error "CEquipment.generated.h already included, missing '#pragma once' in CEquipment.h"
#endif
#define ACTIONGAME_CEquipment_generated_h

#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_RPC_WRAPPERS \
	virtual void Unequip_Implementation(); \
	virtual void End_Equip_Implementation(); \
	virtual void Begin_Equip_Implementation(); \
	virtual void Equip_Implementation(); \
 \
	DECLARE_FUNCTION(execUnequip); \
	DECLARE_FUNCTION(execEnd_Equip); \
	DECLARE_FUNCTION(execBegin_Equip); \
	DECLARE_FUNCTION(execEquip);


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnequip); \
	DECLARE_FUNCTION(execEnd_Equip); \
	DECLARE_FUNCTION(execBegin_Equip); \
	DECLARE_FUNCTION(execEquip);


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_EVENT_PARMS
#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_CALLBACK_WRAPPERS
#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEquipment(); \
	friend struct Z_Construct_UClass_ACEquipment_Statics; \
public: \
	DECLARE_CLASS(ACEquipment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACEquipment)


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACEquipment(); \
	friend struct Z_Construct_UClass_ACEquipment_Statics; \
public: \
	DECLARE_CLASS(ACEquipment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACEquipment)


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACEquipment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACEquipment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEquipment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEquipment(ACEquipment&&); \
	NO_API ACEquipment(const ACEquipment&); \
public:


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEquipment(ACEquipment&&); \
	NO_API ACEquipment(const ACEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEquipment)


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(ACEquipment, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(ACEquipment, State); } \
	FORCEINLINE static uint32 __PPO__Status() { return STRUCT_OFFSET(ACEquipment, Status); }


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_7_PROLOG \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_EVENT_PARMS


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_CALLBACK_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_INCLASS \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Actions_CEquipment_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_CALLBACK_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CEquipment_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Actions_CEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
