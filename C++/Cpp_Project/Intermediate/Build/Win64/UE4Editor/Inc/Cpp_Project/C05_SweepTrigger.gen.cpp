// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/04_Trace/C05_SweepTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC05_SweepTrigger() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC05_SweepTrigger_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC05_SweepTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AC05_SweepTrigger::StaticRegisterNativesAC05_SweepTrigger()
	{
	}
	UClass* Z_Construct_UClass_AC05_SweepTrigger_NoRegister()
	{
		return AC05_SweepTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AC05_SweepTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC05_SweepTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC05_SweepTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "04_Trace/C05_SweepTrigger.h" },
		{ "ModuleRelativePath", "04_Trace/C05_SweepTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C05_SweepTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C05_SweepTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC05_SweepTrigger, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "C05_SweepTrigger" },
		{ "Comment", "// ?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C05_SweepTrigger.h" },
		{ "ToolTip", "?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC05_SweepTrigger, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "C05_SweepTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C05_SweepTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC05_SweepTrigger, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC05_SweepTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC05_SweepTrigger_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC05_SweepTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC05_SweepTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC05_SweepTrigger_Statics::ClassParams = {
		&AC05_SweepTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC05_SweepTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC05_SweepTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC05_SweepTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC05_SweepTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC05_SweepTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC05_SweepTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC05_SweepTrigger, 2445983722);
	template<> CPP_PROJECT_API UClass* StaticClass<AC05_SweepTrigger>()
	{
		return AC05_SweepTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC05_SweepTrigger(Z_Construct_UClass_AC05_SweepTrigger, &AC05_SweepTrigger::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC05_SweepTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC05_SweepTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
