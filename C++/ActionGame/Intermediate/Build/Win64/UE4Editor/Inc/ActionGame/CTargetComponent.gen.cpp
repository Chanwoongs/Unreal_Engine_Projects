// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Components/CTargetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCTargetComponent() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCTargetComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCTargetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void UCTargetComponent::StaticRegisterNativesUCTargetComponent()
	{
	}
	UClass* Z_Construct_UClass_UCTargetComponent_NoRegister()
	{
		return UCTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameProject" },
		{ "IncludePath", "Components/CTargetComponent.h" },
		{ "ModuleRelativePath", "Components/CTargetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCTargetComponent_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "CTargetComponent" },
		{ "ModuleRelativePath", "Components/CTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCTargetComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCTargetComponent, TraceRadius), METADATA_PARAMS(Z_Construct_UClass_UCTargetComponent_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCTargetComponent_Statics::NewProp_TraceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCTargetComponent_Statics::NewProp_InterpolateSpeed_MetaData[] = {
		{ "Category", "CTargetComponent" },
		{ "ModuleRelativePath", "Components/CTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCTargetComponent_Statics::NewProp_InterpolateSpeed = { "InterpolateSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCTargetComponent, InterpolateSpeed), METADATA_PARAMS(Z_Construct_UClass_UCTargetComponent_Statics::NewProp_InterpolateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCTargetComponent_Statics::NewProp_InterpolateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "CTargetComponent" },
		{ "Comment", "// ????\n" },
		{ "ModuleRelativePath", "Components/CTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCTargetComponent, Debug), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Debug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Particle_MetaData[] = {
		{ "Category", "CTargetComponent" },
		{ "ModuleRelativePath", "Components/CTargetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCTargetComponent, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCTargetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTargetComponent_Statics::NewProp_TraceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTargetComponent_Statics::NewProp_InterpolateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Debug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTargetComponent_Statics::NewProp_Particle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCTargetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCTargetComponent_Statics::ClassParams = {
		&UCTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCTargetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCTargetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCTargetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCTargetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCTargetComponent, 3454054870);
	template<> ACTIONGAME_API UClass* StaticClass<UCTargetComponent>()
	{
		return UCTargetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCTargetComponent(Z_Construct_UClass_UCTargetComponent, &UCTargetComponent::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCTargetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCTargetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
