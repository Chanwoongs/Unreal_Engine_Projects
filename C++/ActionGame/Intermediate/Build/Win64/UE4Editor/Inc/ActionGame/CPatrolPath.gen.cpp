// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actors/CPatrolPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPatrolPath() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACPatrolPath_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACPatrolPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ACPatrolPath::StaticRegisterNativesACPatrolPath()
	{
	}
	UClass* Z_Construct_UClass_ACPatrolPath_NoRegister()
	{
		return ACPatrolPath::StaticClass();
	}
	struct Z_Construct_UClass_ACPatrolPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPatrolPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/CPatrolPath.h" },
		{ "ModuleRelativePath", "Actors/CPatrolPath.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Loop" },
		{ "ModuleRelativePath", "Actors/CPatrolPath.h" },
	};
#endif
	void Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((ACPatrolPath*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPatrolPath), &Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "CPatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/CPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPatrolPath, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "CPatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/CPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPatrolPath, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "CPatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/CPatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPatrolPath, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPatrolPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPatrolPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPatrolPath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPatrolPath_Statics::ClassParams = {
		&ACPatrolPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPatrolPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPatrolPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPatrolPath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPatrolPath, 2290043223);
	template<> ACTIONGAME_API UClass* StaticClass<ACPatrolPath>()
	{
		return ACPatrolPath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPatrolPath(Z_Construct_UClass_ACPatrolPath, &ACPatrolPath::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACPatrolPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPatrolPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
