// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CHUD_generated_h
#error "CHUD.generated.h already included, missing '#pragma once' in CHUD.h"
#endif
#define ACTIONGAME_CHUD_generated_h

#define ActionGame_Source_ActionGame_CHUD_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_CHUD_h_10_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_CHUD_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_CHUD_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACHUD(); \
	friend struct Z_Construct_UClass_ACHUD_Statics; \
public: \
	DECLARE_CLASS(ACHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACHUD)


#define ActionGame_Source_ActionGame_CHUD_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACHUD(); \
	friend struct Z_Construct_UClass_ACHUD_Statics; \
public: \
	DECLARE_CLASS(ACHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ACHUD)


#define ActionGame_Source_ActionGame_CHUD_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACHUD(ACHUD&&); \
	NO_API ACHUD(const ACHUD&); \
public:


#define ActionGame_Source_ActionGame_CHUD_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACHUD(ACHUD&&); \
	NO_API ACHUD(const ACHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACHUD)


#define ActionGame_Source_ActionGame_CHUD_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Texture() { return STRUCT_OFFSET(ACHUD, Texture); }


#define ActionGame_Source_ActionGame_CHUD_h_7_PROLOG
#define ActionGame_Source_ActionGame_CHUD_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_CHUD_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_CHUD_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_CHUD_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_CHUD_h_10_INCLASS \
	ActionGame_Source_ActionGame_CHUD_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_CHUD_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_CHUD_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_CHUD_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_CHUD_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_CHUD_h_10_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_CHUD_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ACHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_CHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
