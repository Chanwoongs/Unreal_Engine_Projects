// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PROJECT_CRifle_generated_h
#error "CRifle.generated.h already included, missing '#pragma once' in CRifle.h"
#endif
#define CPP_PROJECT_CRifle_generated_h

#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_SPARSE_DATA
#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_RPC_WRAPPERS
#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACRifle(); \
	friend struct Z_Construct_UClass_ACRifle_Statics; \
public: \
	DECLARE_CLASS(ACRifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(ACRifle)


#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACRifle(); \
	friend struct Z_Construct_UClass_ACRifle_Statics; \
public: \
	DECLARE_CLASS(ACRifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Project"), NO_API) \
	DECLARE_SERIALIZER(ACRifle)


#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACRifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACRifle(ACRifle&&); \
	NO_API ACRifle(const ACRifle&); \
public:


#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACRifle(ACRifle&&); \
	NO_API ACRifle(const ACRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACRifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACRifle)


#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACRifle, Mesh); } \
	FORCEINLINE static uint32 __PPO__HandSocket() { return STRUCT_OFFSET(ACRifle, HandSocket); } \
	FORCEINLINE static uint32 __PPO__HolsterSocket() { return STRUCT_OFFSET(ACRifle, HolsterSocket); } \
	FORCEINLINE static uint32 __PPO__GrabMontage() { return STRUCT_OFFSET(ACRifle, GrabMontage); } \
	FORCEINLINE static uint32 __PPO__UnGrabMontage() { return STRUCT_OFFSET(ACRifle, UnGrabMontage); } \
	FORCEINLINE static uint32 __PPO__FireMontage() { return STRUCT_OFFSET(ACRifle, FireMontage); } \
	FORCEINLINE static uint32 __PPO__FlashParticle() { return STRUCT_OFFSET(ACRifle, FlashParticle); } \
	FORCEINLINE static uint32 __PPO__EjectParticle() { return STRUCT_OFFSET(ACRifle, EjectParticle); } \
	FORCEINLINE static uint32 __PPO__ImpactParticle() { return STRUCT_OFFSET(ACRifle, ImpactParticle); } \
	FORCEINLINE static uint32 __PPO__FireSoundCue() { return STRUCT_OFFSET(ACRifle, FireSoundCue); } \
	FORCEINLINE static uint32 __PPO__BulletClass() { return STRUCT_OFFSET(ACRifle, BulletClass); } \
	FORCEINLINE static uint32 __PPO__DecalMaterial() { return STRUCT_OFFSET(ACRifle, DecalMaterial); }


#define Cpp_Project_Source_Cpp_Project_CRifle_h_7_PROLOG
#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_RPC_WRAPPERS \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_INCLASS \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cpp_Project_Source_Cpp_Project_CRifle_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_PRIVATE_PROPERTY_OFFSET \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_SPARSE_DATA \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_INCLASS_NO_PURE_DECLS \
	Cpp_Project_Source_Cpp_Project_CRifle_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PROJECT_API UClass* StaticClass<class ACRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cpp_Project_Source_Cpp_Project_CRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
