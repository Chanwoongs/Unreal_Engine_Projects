// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Widgets/CUserWidget_Health.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_Health() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_Health_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_Health();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	static FName NAME_UCUserWidget_Health_Update = FName(TEXT("Update"));
	void UCUserWidget_Health::Update(float Health, float MaxHealth)
	{
		CUserWidget_Health_eventUpdate_Parms Parms;
		Parms.Health=Health;
		Parms.MaxHealth=MaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_UCUserWidget_Health_Update),&Parms);
	}
	void UCUserWidget_Health::StaticRegisterNativesUCUserWidget_Health()
	{
	}
	struct Z_Construct_UFunction_UCUserWidget_Health_Update_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CUserWidget_Health_eventUpdate_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CUserWidget_Health_eventUpdate_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_Health.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCUserWidget_Health, nullptr, "Update", nullptr, nullptr, sizeof(CUserWidget_Health_eventUpdate_Parms), Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCUserWidget_Health_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCUserWidget_Health_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCUserWidget_Health_NoRegister()
	{
		return UCUserWidget_Health::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_Health_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_Health_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCUserWidget_Health_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCUserWidget_Health_Update, "Update" }, // 2094683922
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_Health_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CUserWidget_Health.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_Health.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_Health_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_Health>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_Health_Statics::ClassParams = {
		&UCUserWidget_Health::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_Health_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_Health_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_Health()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_Health_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_Health, 1080166975);
	template<> ACTIONGAME_API UClass* StaticClass<UCUserWidget_Health>()
	{
		return UCUserWidget_Health::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_Health(Z_Construct_UClass_UCUserWidget_Health, &UCUserWidget_Health::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCUserWidget_Health"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_Health);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
