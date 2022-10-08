// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actions/CDoAction_Melee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Melee() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction_Melee_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction_Melee();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void ACDoAction_Melee::StaticRegisterNativesACDoAction_Melee()
	{
	}
	UClass* Z_Construct_UClass_ACDoAction_Melee_NoRegister()
	{
		return ACDoAction_Melee::StaticClass();
	}
	struct Z_Construct_UClass_ACDoAction_Melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDoAction_Melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Melee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CDoAction_Melee.h" },
		{ "ModuleRelativePath", "Actions/CDoAction_Melee.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDoAction_Melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDoAction_Melee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDoAction_Melee_Statics::ClassParams = {
		&ACDoAction_Melee::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Melee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Melee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDoAction_Melee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDoAction_Melee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDoAction_Melee, 1760041977);
	template<> ACTIONGAME_API UClass* StaticClass<ACDoAction_Melee>()
	{
		return ACDoAction_Melee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDoAction_Melee(Z_Construct_UClass_ACDoAction_Melee, &ACDoAction_Melee::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACDoAction_Melee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDoAction_Melee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
