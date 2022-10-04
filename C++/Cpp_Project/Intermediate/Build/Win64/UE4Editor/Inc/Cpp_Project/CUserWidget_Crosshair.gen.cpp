// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/Widgets/CUserWidget_Crosshair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_Crosshair() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_UCUserWidget_Crosshair_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_UCUserWidget_Crosshair();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
// End Cross Module References
	static FName NAME_UCUserWidget_Crosshair_OffFocus = FName(TEXT("OffFocus"));
	void UCUserWidget_Crosshair::OffFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_Crosshair_OffFocus),NULL);
	}
	static FName NAME_UCUserWidget_Crosshair_OnFocus = FName(TEXT("OnFocus"));
	void UCUserWidget_Crosshair::OnFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_Crosshair_OnFocus),NULL);
	}
	void UCUserWidget_Crosshair::StaticRegisterNativesUCUserWidget_Crosshair()
	{
	}
	struct Z_Construct_UFunction_UCUserWidget_Crosshair_OffFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_Crosshair_OffFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_Crosshair.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_Crosshair_OffFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_Crosshair, nullptr, "OffFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_Crosshair_OffFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_Crosshair_OffFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_Crosshair_OffFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_Crosshair_OffFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUserWidget_Crosshair_OnFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_Crosshair_OnFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_Crosshair.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_Crosshair_OnFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_Crosshair, nullptr, "OnFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_Crosshair_OnFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_Crosshair_OnFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_Crosshair_OnFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_Crosshair_OnFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCUserWidget_Crosshair_NoRegister()
	{
		return UCUserWidget_Crosshair::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_Crosshair_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_Crosshair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUserWidget_Crosshair_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUserWidget_Crosshair_OffFocus, "OffFocus" }, // 3826129315
		{ &Z_Construct_UFunction_UCUserWidget_Crosshair_OnFocus, "OnFocus" }, // 2289688422
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_Crosshair_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CUserWidget_Crosshair.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_Crosshair.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_Crosshair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_Crosshair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_Crosshair_Statics::ClassParams = {
		&UCUserWidget_Crosshair::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_Crosshair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Crosshair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_Crosshair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_Crosshair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_Crosshair, 1813128410);
	template<> CPP_PROJECT_API UClass* StaticClass<UCUserWidget_Crosshair>()
	{
		return UCUserWidget_Crosshair::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_Crosshair(Z_Construct_UClass_UCUserWidget_Crosshair, &UCUserWidget_Crosshair::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("UCUserWidget_Crosshair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_Crosshair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
