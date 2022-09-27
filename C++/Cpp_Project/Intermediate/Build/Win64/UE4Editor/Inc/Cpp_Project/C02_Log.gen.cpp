// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/02_Debug/C02_Log.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC02_Log() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC02_Log_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC02_Log();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
// End Cross Module References
	void AC02_Log::StaticRegisterNativesAC02_Log()
	{
	}
	UClass* Z_Construct_UClass_AC02_Log_NoRegister()
	{
		return AC02_Log::StaticClass();
	}
	struct Z_Construct_UClass_AC02_Log_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC02_Log_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_Log_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "02_Debug/C02_Log.h" },
		{ "ModuleRelativePath", "02_Debug/C02_Log.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC02_Log_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC02_Log>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC02_Log_Statics::ClassParams = {
		&AC02_Log::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC02_Log_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_Log_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC02_Log()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC02_Log_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC02_Log, 3529520967);
	template<> CPP_PROJECT_API UClass* StaticClass<AC02_Log>()
	{
		return AC02_Log::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC02_Log(Z_Construct_UClass_AC02_Log, &AC02_Log::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC02_Log"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC02_Log);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
