// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Widgets/CUserWidget_ActionItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_ActionItem() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_ActionItem_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_ActionItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(UCUserWidget_ActionItem::execUnhover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unhover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCUserWidget_ActionItem::execHover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCUserWidget_ActionItem::execClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Click();
		P_NATIVE_END;
	}
	void UCUserWidget_ActionItem::StaticRegisterNativesUCUserWidget_ActionItem()
	{
		UClass* Class = UCUserWidget_ActionItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Click", &UCUserWidget_ActionItem::execClick },
			{ "Hover", &UCUserWidget_ActionItem::execHover },
			{ "Unhover", &UCUserWidget_ActionItem::execUnhover },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCUserWidget_ActionItem_Click_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_ActionItem_Click_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_ActionItem_Click_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_ActionItem, nullptr, "Click", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_ActionItem_Click_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_ActionItem_Click_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_ActionItem_Click()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_ActionItem_Click_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUserWidget_ActionItem_Hover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_ActionItem_Hover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_ActionItem_Hover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_ActionItem, nullptr, "Hover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_ActionItem_Hover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_ActionItem_Hover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_ActionItem_Hover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_ActionItem_Hover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCUserWidget_ActionItem_Unhover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_ActionItem_Unhover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_ActionItem_Unhover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_ActionItem, nullptr, "Unhover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_ActionItem_Unhover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_ActionItem_Unhover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_ActionItem_Unhover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_ActionItem_Unhover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCUserWidget_ActionItem_NoRegister()
	{
		return UCUserWidget_ActionItem::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_ActionItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_ActionItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUserWidget_ActionItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUserWidget_ActionItem_Click, "Click" }, // 3607679130
		{ &Z_Construct_UFunction_UCUserWidget_ActionItem_Hover, "Hover" }, // 1239785896
		{ &Z_Construct_UFunction_UCUserWidget_ActionItem_Unhover, "Unhover" }, // 3366319758
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_ActionItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CUserWidget_ActionItem.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_ActionItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_ActionItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_ActionItem_Statics::ClassParams = {
		&UCUserWidget_ActionItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_ActionItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_ActionItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_ActionItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_ActionItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_ActionItem, 1488217540);
	template<> ACTIONGAME_API UClass* StaticClass<UCUserWidget_ActionItem>()
	{
		return UCUserWidget_ActionItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_ActionItem(Z_Construct_UClass_UCUserWidget_ActionItem, &UCUserWidget_ActionItem::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCUserWidget_ActionItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_ActionItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
