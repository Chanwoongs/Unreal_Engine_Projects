// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/04_Trace/C01_Cylinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC01_Cylinder() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC01_Cylinder_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC01_Cylinder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AC01_Cylinder::StaticRegisterNativesAC01_Cylinder()
	{
	}
	UClass* Z_Construct_UClass_AC01_Cylinder_NoRegister()
	{
		return AC01_Cylinder::StaticClass();
	}
	struct Z_Construct_UClass_AC01_Cylinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC01_Cylinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_Cylinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "04_Trace/C01_Cylinder.h" },
		{ "ModuleRelativePath", "04_Trace/C01_Cylinder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "C01_Cylinder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C01_Cylinder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_Cylinder, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C01_Cylinder" },
		{ "Comment", "// ?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C01_Cylinder.h" },
		{ "ToolTip", "?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_Cylinder, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "C01_Cylinder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C01_Cylinder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC01_Cylinder, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC01_Cylinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC01_Cylinder_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC01_Cylinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC01_Cylinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC01_Cylinder_Statics::ClassParams = {
		&AC01_Cylinder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC01_Cylinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC01_Cylinder_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC01_Cylinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_Cylinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC01_Cylinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC01_Cylinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC01_Cylinder, 1066949349);
	template<> CPP_PROJECT_API UClass* StaticClass<AC01_Cylinder>()
	{
		return AC01_Cylinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC01_Cylinder(Z_Construct_UClass_AC01_Cylinder, &AC01_Cylinder::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC01_Cylinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC01_Cylinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
