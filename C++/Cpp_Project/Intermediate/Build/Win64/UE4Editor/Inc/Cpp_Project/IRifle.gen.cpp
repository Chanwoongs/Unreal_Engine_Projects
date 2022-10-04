// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/IRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIRifle() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_UIRifle_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_UIRifle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
// End Cross Module References
	void UIRifle::StaticRegisterNativesUIRifle()
	{
	}
	UClass* Z_Construct_UClass_UIRifle_NoRegister()
	{
		return UIRifle::StaticClass();
	}
	struct Z_Construct_UClass_UIRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIRifle_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIRifle_Statics::ClassParams = {
		&UIRifle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIRifle, 3065966178);
	template<> CPP_PROJECT_API UClass* StaticClass<UIRifle>()
	{
		return UIRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIRifle(Z_Construct_UClass_UIRifle, &UIRifle::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("UIRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
