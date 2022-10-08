// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_ICharacter_generated_h
#error "ICharacter.generated.h already included, missing '#pragma once' in ICharacter.h"
#endif
#define ACTIONGAME_ICharacter_generated_h

#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_SPARSE_DATA
#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_RPC_WRAPPERS
#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONGAME_API UICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONGAME_API, UICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONGAME_API UICharacter(UICharacter&&); \
	ACTIONGAME_API UICharacter(const UICharacter&); \
public:


#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONGAME_API UICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONGAME_API UICharacter(UICharacter&&); \
	ACTIONGAME_API UICharacter(const UICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONGAME_API, UICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UICharacter)


#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUICharacter(); \
	friend struct Z_Construct_UClass_UICharacter_Statics; \
public: \
	DECLARE_CLASS(UICharacter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionGame"), ACTIONGAME_API) \
	DECLARE_SERIALIZER(UICharacter)


#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_GENERATED_UINTERFACE_BODY() \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_GENERATED_UINTERFACE_BODY() \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IICharacter() {} \
public: \
	typedef UICharacter UClassType; \
	typedef IICharacter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionGame_Source_ActionGame_Characters_ICharacter_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IICharacter() {} \
public: \
	typedef UICharacter UClassType; \
	typedef IICharacter ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionGame_Source_ActionGame_Characters_ICharacter_h_7_PROLOG
#define ActionGame_Source_ActionGame_Characters_ICharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_RPC_WRAPPERS \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionGame_Source_ActionGame_Characters_ICharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_SPARSE_DATA \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionGame_Source_ActionGame_Characters_ICharacter_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class UICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionGame_Source_ActionGame_Characters_ICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
