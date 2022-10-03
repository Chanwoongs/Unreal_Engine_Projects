// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/04_Trace/C03_Cube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC03_Cube() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_Cube_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_Cube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AC03_Cube::StaticRegisterNativesAC03_Cube()
	{
	}
	UClass* Z_Construct_UClass_AC03_Cube_NoRegister()
	{
		return AC03_Cube::StaticClass();
	}
	struct Z_Construct_UClass_AC03_Cube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC03_Cube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Cube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "04_Trace/C03_Cube.h" },
		{ "ModuleRelativePath", "04_Trace/C03_Cube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Cube_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "C03_Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C03_Cube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_Cube_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_Cube, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_Cube_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Cube_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC03_Cube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_Cube_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC03_Cube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC03_Cube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC03_Cube_Statics::ClassParams = {
		&AC03_Cube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC03_Cube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Cube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC03_Cube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Cube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC03_Cube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC03_Cube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC03_Cube, 1601176548);
	template<> CPP_PROJECT_API UClass* StaticClass<AC03_Cube>()
	{
		return AC03_Cube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC03_Cube(Z_Construct_UClass_AC03_Cube, &AC03_Cube::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC03_Cube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC03_Cube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
