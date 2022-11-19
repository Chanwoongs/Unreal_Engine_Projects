// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/CGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameMode() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACGameMode_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_InGameUI_NoRegister();
// End Cross Module References
	void ACGameMode::StaticRegisterNativesACGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACGameMode_NoRegister()
	{
		return ACGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameUIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InGameUIClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CGameMode.h" },
		{ "ModuleRelativePath", "CGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGameMode_Statics::NewProp_InGameUIClass_MetaData[] = {
		{ "Category", "CGameMode" },
		{ "ModuleRelativePath", "CGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACGameMode_Statics::NewProp_InGameUIClass = { "InGameUIClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACGameMode, InGameUIClass), Z_Construct_UClass_UCUserWidget_InGameUI_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACGameMode_Statics::NewProp_InGameUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACGameMode_Statics::NewProp_InGameUIClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGameMode_Statics::NewProp_InGameUIClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACGameMode_Statics::ClassParams = {
		&ACGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACGameMode, 2606390630);
	template<> ACTIONGAME_API UClass* StaticClass<ACGameMode>()
	{
		return ACGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACGameMode(Z_Construct_UClass_ACGameMode, &ACGameMode::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
