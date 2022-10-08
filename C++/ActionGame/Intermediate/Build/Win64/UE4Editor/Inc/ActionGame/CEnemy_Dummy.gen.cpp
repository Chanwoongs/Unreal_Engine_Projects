// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Characters/CEnemy_Dummy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy_Dummy() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy_Dummy_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy_Dummy();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void ACEnemy_Dummy::StaticRegisterNativesACEnemy_Dummy()
	{
	}
	UClass* Z_Construct_UClass_ACEnemy_Dummy_NoRegister()
	{
		return ACEnemy_Dummy::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_Dummy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_Dummy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Dummy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CEnemy_Dummy.h" },
		{ "ModuleRelativePath", "Characters/CEnemy_Dummy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_Dummy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy_Dummy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_Dummy_Statics::ClassParams = {
		&ACEnemy_Dummy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Dummy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Dummy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACEnemy_Dummy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACEnemy_Dummy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEnemy_Dummy, 1914747880);
	template<> ACTIONGAME_API UClass* StaticClass<ACEnemy_Dummy>()
	{
		return ACEnemy_Dummy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEnemy_Dummy(Z_Construct_UClass_ACEnemy_Dummy, &ACEnemy_Dummy::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACEnemy_Dummy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy_Dummy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
