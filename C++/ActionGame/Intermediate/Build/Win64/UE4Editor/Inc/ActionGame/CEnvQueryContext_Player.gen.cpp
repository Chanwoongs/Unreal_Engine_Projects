// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/BehaviorTree/CEnvQueryContext_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnvQueryContext_Player() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCEnvQueryContext_Player_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCEnvQueryContext_Player();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCEnvQueryContext_Player::StaticRegisterNativesUCEnvQueryContext_Player()
	{
	}
	UClass* Z_Construct_UClass_UCEnvQueryContext_Player_NoRegister()
	{
		return UCEnvQueryContext_Player::StaticClass();
	}
	struct Z_Construct_UClass_UCEnvQueryContext_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCEnvQueryContext_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCEnvQueryContext_Player_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CEnvQueryContext_Player.h" },
		{ "ModuleRelativePath", "BehaviorTree/CEnvQueryContext_Player.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCEnvQueryContext_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCEnvQueryContext_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCEnvQueryContext_Player_Statics::ClassParams = {
		&UCEnvQueryContext_Player::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCEnvQueryContext_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCEnvQueryContext_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCEnvQueryContext_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCEnvQueryContext_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCEnvQueryContext_Player, 804679494);
	template<> ACTIONGAME_API UClass* StaticClass<UCEnvQueryContext_Player>()
	{
		return UCEnvQueryContext_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCEnvQueryContext_Player(Z_Construct_UClass_UCEnvQueryContext_Player, &UCEnvQueryContext_Player::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCEnvQueryContext_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCEnvQueryContext_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
