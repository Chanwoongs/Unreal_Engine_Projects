// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PROJECT_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define CPP_PROJECT_CPlayer_generated_h

#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_SPARSE_DATA
#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_RPC_WRAPPERS
#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public:


#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACPlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACPlayer, Camera); }


#define Cpp_Project_Source_Cpp_Project_CPlayer_h_9_PROLOG
#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_RPC_WRAPPERS \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_INCLASS \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_CPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_INCLASS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_CPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PROJECT_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cpp_Project_Source_Cpp_Project_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
