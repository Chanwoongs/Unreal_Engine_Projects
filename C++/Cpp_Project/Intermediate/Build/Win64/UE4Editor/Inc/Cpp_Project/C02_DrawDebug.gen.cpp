// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/02_Debug/C02_DrawDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC02_DrawDebug() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC02_DrawDebug_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC02_DrawDebug();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AC02_DrawDebug::StaticRegisterNativesAC02_DrawDebug()
	{
	}
	UClass* Z_Construct_UClass_AC02_DrawDebug_NoRegister()
	{
		return AC02_DrawDebug::StaticClass();
	}
	struct Z_Construct_UClass_AC02_DrawDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC02_DrawDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_DrawDebug_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "02_Debug/C02_DrawDebug.h" },
		{ "ModuleRelativePath", "02_Debug/C02_DrawDebug.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "DrawDebug" },
		{ "ModuleRelativePath", "02_Debug/C02_DrawDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC02_DrawDebug, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "DrawDebug" },
		{ "ModuleRelativePath", "02_Debug/C02_DrawDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC02_DrawDebug, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_InitLocation_MetaData[] = {
		{ "Category", "DrawDebug" },
		{ "ModuleRelativePath", "02_Debug/C02_DrawDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_InitLocation = { "InitLocation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(InitLocation, AC02_DrawDebug), STRUCT_OFFSET(AC02_DrawDebug, InitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_InitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_InitLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC02_DrawDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC02_DrawDebug_Statics::NewProp_InitLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC02_DrawDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC02_DrawDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC02_DrawDebug_Statics::ClassParams = {
		&AC02_DrawDebug::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC02_DrawDebug_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC02_DrawDebug_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC02_DrawDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_DrawDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC02_DrawDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC02_DrawDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC02_DrawDebug, 3988810415);
	template<> CPP_PROJECT_API UClass* StaticClass<AC02_DrawDebug>()
	{
		return AC02_DrawDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC02_DrawDebug(Z_Construct_UClass_AC02_DrawDebug, &AC02_DrawDebug::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC02_DrawDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC02_DrawDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
