// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Components/COptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOptionComponent() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCOptionComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCOptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCOptionComponent::StaticRegisterNativesUCOptionComponent()
	{
	}
	UClass* Z_Construct_UClass_UCOptionComponent_NoRegister()
	{
		return UCOptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCOptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalLookRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalLookRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalLookRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalLookRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCOptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCOptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameProject" },
		{ "IncludePath", "Components/COptionComponent.h" },
		{ "ModuleRelativePath", "Components/COptionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate_MetaData[] = {
		{ "Category", "COptionComponent" },
		{ "ModuleRelativePath", "Components/COptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate = { "HorizontalLookRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCOptionComponent, HorizontalLookRate), METADATA_PARAMS(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate_MetaData[] = {
		{ "Category", "COptionComponent" },
		{ "ModuleRelativePath", "Components/COptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate = { "VerticalLookRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCOptionComponent, VerticalLookRate), METADATA_PARAMS(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCOptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCOptionComponent_Statics::NewProp_HorizontalLookRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCOptionComponent_Statics::NewProp_VerticalLookRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCOptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCOptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCOptionComponent_Statics::ClassParams = {
		&UCOptionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCOptionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCOptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCOptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCOptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCOptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCOptionComponent, 1931922796);
	template<> ACTIONGAME_API UClass* StaticClass<UCOptionComponent>()
	{
		return UCOptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCOptionComponent(Z_Construct_UClass_UCOptionComponent, &UCOptionComponent::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCOptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCOptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
