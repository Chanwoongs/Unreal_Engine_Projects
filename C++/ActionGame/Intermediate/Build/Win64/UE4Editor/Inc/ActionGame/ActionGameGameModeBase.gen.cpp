// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/ActionGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionGameGameModeBase() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_AActionGameGameModeBase_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_AActionGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void AActionGameGameModeBase::StaticRegisterNativesAActionGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AActionGameGameModeBase_NoRegister()
	{
		return AActionGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActionGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ActionGameGameModeBase.h" },
		{ "ModuleRelativePath", "ActionGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActionGameGameModeBase_Statics::ClassParams = {
		&AActionGameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AActionGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActionGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionGameGameModeBase, 365740781);
	template<> ACTIONGAME_API UClass* StaticClass<AActionGameGameModeBase>()
	{
		return AActionGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionGameGameModeBase(Z_Construct_UClass_AActionGameGameModeBase, &AActionGameGameModeBase::StaticClass, TEXT("/Script/ActionGame"), TEXT("AActionGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
