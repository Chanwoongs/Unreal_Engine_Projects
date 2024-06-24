// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Notifies/CAnimNotify_Hitted.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_Hitted() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAnimNotify_Hitted_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAnimNotify_Hitted();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCAnimNotify_Hitted::StaticRegisterNativesUCAnimNotify_Hitted()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotify_Hitted_NoRegister()
	{
		return UCAnimNotify_Hitted::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_Hitted_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_Hitted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_Hitted_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_Hitted.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_Hitted.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_Hitted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_Hitted>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_Hitted_Statics::ClassParams = {
		&UCAnimNotify_Hitted::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_Hitted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_Hitted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotify_Hitted()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotify_Hitted_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotify_Hitted, 2234182652);
	template<> ACTIONGAME_API UClass* StaticClass<UCAnimNotify_Hitted>()
	{
		return UCAnimNotify_Hitted::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotify_Hitted(Z_Construct_UClass_UCAnimNotify_Hitted, &UCAnimNotify_Hitted::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCAnimNotify_Hitted"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_Hitted);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
