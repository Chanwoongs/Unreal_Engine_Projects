// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Notifies/CAnimNotify_EndRoll.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_EndRoll() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAnimNotify_EndRoll_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAnimNotify_EndRoll();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCAnimNotify_EndRoll::StaticRegisterNativesUCAnimNotify_EndRoll()
	{
	}
	UClass* Z_Construct_UClass_UCAnimNotify_EndRoll_NoRegister()
	{
		return UCAnimNotify_EndRoll::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_EndRoll_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_EndRoll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_EndRoll_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_EndRoll.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_EndRoll.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_EndRoll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_EndRoll>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_EndRoll_Statics::ClassParams = {
		&UCAnimNotify_EndRoll::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCAnimNotify_EndRoll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndRoll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimNotify_EndRoll()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimNotify_EndRoll_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimNotify_EndRoll, 565158317);
	template<> ACTIONGAME_API UClass* StaticClass<UCAnimNotify_EndRoll>()
	{
		return UCAnimNotify_EndRoll::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimNotify_EndRoll(Z_Construct_UClass_UCAnimNotify_EndRoll, &UCAnimNotify_EndRoll::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCAnimNotify_EndRoll"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_EndRoll);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
