// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/BehaviorTree/CBTService_Melee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTService_Melee() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTService_Melee_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTService_Melee();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCBTService_Melee::StaticRegisterNativesUCBTService_Melee()
	{
	}
	UClass* Z_Construct_UClass_UCBTService_Melee_NoRegister()
	{
		return UCBTService_Melee::StaticClass();
	}
	struct Z_Construct_UClass_UCBTService_Melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTService_Melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTService_Melee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTService_Melee.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTService_Melee.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTService_Melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTService_Melee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCBTService_Melee_Statics::ClassParams = {
		&UCBTService_Melee::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCBTService_Melee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Melee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBTService_Melee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCBTService_Melee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCBTService_Melee, 38147751);
	template<> ACTIONGAME_API UClass* StaticClass<UCBTService_Melee>()
	{
		return UCBTService_Melee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCBTService_Melee(Z_Construct_UClass_UCBTService_Melee, &UCBTService_Melee::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCBTService_Melee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTService_Melee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
