// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PROJECT_IRifle_generated_h
#error "IRifle.generated.h already included, missing '#pragma once' in IRifle.h"
#endif
#define CPP_PROJECT_IRifle_generated_h

#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_SPARSE_DATA
#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_RPC_WRAPPERS
#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CPP_PROJECT_API UIRifle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CPP_PROJECT_API, UIRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CPP_PROJECT_API UIRifle(UIRifle&&); \
	CPP_PROJECT_API UIRifle(const UIRifle&); \
public:


#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CPP_PROJECT_API UIRifle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CPP_PROJECT_API UIRifle(UIRifle&&); \
	CPP_PROJECT_API UIRifle(const UIRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CPP_PROJECT_API, UIRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIRifle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIRifle)


#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIRifle(); \
	friend struct Z_Construct_UClass_UIRifle_Statics; \
public: \
	DECLARE_CLASS(UIRifle, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Cpp_Project"), CPP_PROJECT_API) \
	DECLARE_SERIALIZER(UIRifle)


#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_GENERATED_UINTERFACE_BODY() \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIRifle() {} \
public: \
	typedef UIRifle UClassType; \
	typedef IIRifle ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Cpp_Project_Source_Cpp_Project_IRifle_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IIRifle() {} \
public: \
	typedef UIRifle UClassType; \
	typedef IIRifle ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Cpp_Project_Source_Cpp_Project_IRifle_h_7_PROLOG
#define Cpp_Project_Source_Cpp_Project_IRifle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_RPC_WRAPPERS \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_IRifle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_IRifle_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PROJECT_API UClass* StaticClass<class UIRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cpp_Project_Source_Cpp_Project_IRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
