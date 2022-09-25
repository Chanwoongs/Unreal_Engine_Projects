// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/01_Actor/C03_Spawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC03_Spawner() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_Spawner_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_Spawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC02_SpawnActor_NoRegister();
// End Cross Module References
	void AC03_Spawner::StaticRegisterNativesAC03_Spawner()
	{
	}
	UClass* Z_Construct_UClass_AC03_Spawner_NoRegister()
	{
		return AC03_Spawner::StaticClass();
	}
	struct Z_Construct_UClass_AC03_Spawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC03_Spawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Spawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "01_Actor/C03_Spawner.h" },
		{ "ModuleRelativePath", "01_Actor/C03_Spawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass_MetaData[] = {
		{ "Category", "C03_Spawner" },
		{ "Comment", "// ???\xc3\xb7??? : ?\xda\xb7????? \xc5\xb8???? ?????? ?\xd9\xb7? ?? ?\xd6\xb5??? ???\xd6\xb4? ????\n// TSubClassOf<class T> -> ?\xd8\xb4? \xc5\xac???? ?????? \xc5\xac?????? ?\xd2\xb7??\xc2\xb4?. \n" },
		{ "ModuleRelativePath", "01_Actor/C03_Spawner.h" },
		{ "ToolTip", "???\xc3\xb7??? : ?\xda\xb7????? \xc5\xb8???? ?????? ?\xd9\xb7? ?? ?\xd6\xb5??? ???\xd6\xb4? ????\nTSubClassOf<class T> -> ?\xd8\xb4? \xc5\xac???? ?????? \xc5\xac?????? ?\xd2\xb7??\xc2\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SpawnClass, AC03_Spawner), STRUCT_OFFSET(AC03_Spawner, SpawnClass), Z_Construct_UClass_AC02_SpawnActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC03_Spawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC03_Spawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC03_Spawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC03_Spawner_Statics::ClassParams = {
		&AC03_Spawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC03_Spawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Spawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC03_Spawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Spawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC03_Spawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC03_Spawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC03_Spawner, 1492256458);
	template<> CPP_PROJECT_API UClass* StaticClass<AC03_Spawner>()
	{
		return AC03_Spawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC03_Spawner(Z_Construct_UClass_AC03_Spawner, &AC03_Spawner::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC03_Spawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC03_Spawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
