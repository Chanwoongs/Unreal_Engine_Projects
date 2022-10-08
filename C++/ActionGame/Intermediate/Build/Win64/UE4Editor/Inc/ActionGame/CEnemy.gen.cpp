// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Characters/CEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCMontagesComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UICharacter_NoRegister();
// End Cross Module References
	void ACEnemy::StaticRegisterNativesACEnemy()
	{
	}
	UClass* Z_Construct_UClass_ACEnemy_NoRegister()
	{
		return ACEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NameWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CEnemy.h" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, Status), Z_Construct_UClass_UCStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, Montages), Z_Construct_UClass_UCMontagesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, Action), Z_Construct_UClass_UCActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthWidget_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthWidget = { "HealthWidget", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, HealthWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_Statics::NewProp_NameWidget_MetaData[] = {
		{ "Category", "CEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_Statics::NewProp_NameWidget = { "NameWidget", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy, NameWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::NewProp_NameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::NewProp_NameWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_Montages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_HealthWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_Statics::NewProp_NameWidget,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACEnemy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UICharacter_NoRegister, (int32)VTABLE_OFFSET(ACEnemy, IICharacter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_Statics::ClassParams = {
		&ACEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACEnemy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEnemy, 1748869908);
	template<> ACTIONGAME_API UClass* StaticClass<ACEnemy>()
	{
		return ACEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEnemy(Z_Construct_UClass_ACEnemy, &ACEnemy::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
