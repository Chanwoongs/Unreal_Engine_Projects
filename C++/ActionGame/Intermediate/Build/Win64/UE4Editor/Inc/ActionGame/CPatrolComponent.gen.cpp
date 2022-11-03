// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Components/CPatrolComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPatrolComponent() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCPatrolComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCPatrolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACPatrolPath_NoRegister();
// End Cross Module References
	void UCPatrolComponent::StaticRegisterNativesUCPatrolComponent()
	{
	}
	UClass* Z_Construct_UClass_UCPatrolComponent_NoRegister()
	{
		return UCPatrolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCPatrolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPatrolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPatrolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameProject" },
		{ "IncludePath", "Components/CPatrolComponent.h" },
		{ "ModuleRelativePath", "Components/CPatrolComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "CPatrolComponent" },
		{ "ModuleRelativePath", "Components/CPatrolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPatrolComponent, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_AcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_AcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "CPatrolComponent" },
		{ "ModuleRelativePath", "Components/CPatrolComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((UCPatrolComponent*)Obj)->bReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCPatrolComponent), &Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "CPatrolComponent" },
		{ "ModuleRelativePath", "Components/CPatrolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPatrolComponent, Index), METADATA_PARAMS(Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "CPatrolComponent" },
		{ "ModuleRelativePath", "Components/CPatrolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCPatrolComponent, Path), Z_Construct_UClass_ACPatrolPath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPatrolComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_bReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPatrolComponent_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPatrolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPatrolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCPatrolComponent_Statics::ClassParams = {
		&UCPatrolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCPatrolComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCPatrolComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCPatrolComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPatrolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPatrolComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCPatrolComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPatrolComponent, 712000744);
	template<> ACTIONGAME_API UClass* StaticClass<UCPatrolComponent>()
	{
		return UCPatrolComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPatrolComponent(Z_Construct_UClass_UCPatrolComponent, &UCPatrolComponent::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCPatrolComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPatrolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
