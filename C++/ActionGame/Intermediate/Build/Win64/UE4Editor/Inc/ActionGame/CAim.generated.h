// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_CAim_generated_h
#error "CAim.generated.h already included, missing '#pragma once' in CAim.h"
#endif
#define ACTIONGAME_CAim_generated_h

#define ActionGame_Source_ActionGame_Actions_CAim_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_Actions_CAim_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execZooming);


#define ActionGame_Source_ActionGame_Actions_CAim_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execZooming);


#define ActionGame_Source_ActionGame_Actions_CAim_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAim(); \
	friend struct Z_Construct_UClass_UCAim_Statics; \
public: \
	DECLARE_CLASS(UCAim, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCAim)


#define ActionGame_Source_ActionGame_Actions_CAim_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCAim(); \
	friend struct Z_Construct_UClass_UCAim_Statics; \
public: \
	DECLARE_CLASS(UCAim, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(UCAim)


#define ActionGame_Source_ActionGame_Actions_CAim_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAim(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAim(UCAim&&); \
	NO_API UCAim(const UCAim&); \
public:


#define ActionGame_Source_ActionGame_Actions_CAim_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAim(UCAim&&); \
	NO_API UCAim(const UCAim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCAim)


#define ActionGame_Source_ActionGame_Actions_CAim_h_10_PRIVATE_PROPERTY_OFFSET
#define ActionGame_Source_ActionGame_Actions_CAim_h_7_PROLOG
#define ActionGame_Source_ActionGame_Actions_CAim_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_INCLASS \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Actions_CAim_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_PRIVATE_PROPERTY_OFFSET \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_INCLASS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Actions_CAim_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UCAim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Actions_CAim_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
