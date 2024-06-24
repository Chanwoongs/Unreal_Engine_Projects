// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Widgets/CUserWidget_Name.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_Name() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_Name_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_Name();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	static FName NAME_UCUserWidget_Name_SetNameText = FName(TEXT("SetNameText"));
	void UCUserWidget_Name::SetNameText(const FString& InName)
	{
		CUserWidget_Name_eventSetNameText_Parms Parms;
		Parms.InName=InName;
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_Name_SetNameText),&Parms);
	}
	void UCUserWidget_Name::StaticRegisterNativesUCUserWidget_Name()
	{
	}
	struct Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CUserWidget_Name_eventSetNameText_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::NewProp_InName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_Name.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_Name, nullptr, "SetNameText", nullptr, nullptr, sizeof(CUserWidget_Name_eventSetNameText_Parms), Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_Name_SetNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_Name_SetNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCUserWidget_Name_NoRegister()
	{
		return UCUserWidget_Name::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_Name_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_Name_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUserWidget_Name_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUserWidget_Name_SetNameText, "SetNameText" }, // 1709003476
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_Name_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CUserWidget_Name.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_Name.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_Name_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_Name>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_Name_Statics::ClassParams = {
		&UCUserWidget_Name::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_Name_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Name_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_Name()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_Name_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_Name, 1489989396);
	template<> ACTIONGAME_API UClass* StaticClass<UCUserWidget_Name>()
	{
		return UCUserWidget_Name::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_Name(Z_Construct_UClass_UCUserWidget_Name, &UCUserWidget_Name::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCUserWidget_Name"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_Name);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
