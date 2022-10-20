// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actions/CDoAction_Melee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Melee() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction_Melee_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction_Melee();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(ACDoAction_Melee::execRestoreDilation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreDilation();
		P_NATIVE_END;
	}
	void ACDoAction_Melee::StaticRegisterNativesACDoAction_Melee()
	{
		UClass* Class = ACDoAction_Melee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RestoreDilation", &ACDoAction_Melee::execRestoreDilation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACDoAction_Melee_RestoreDilation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACDoAction_Melee_RestoreDilation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CDoAction_Melee.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACDoAction_Melee_RestoreDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACDoAction_Melee, nullptr, "RestoreDilation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACDoAction_Melee_RestoreDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_Melee_RestoreDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACDoAction_Melee_RestoreDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACDoAction_Melee_RestoreDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACDoAction_Melee_NoRegister()
	{
		return ACDoAction_Melee::StaticClass();
	}
	struct Z_Construct_UClass_ACDoAction_Melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDoAction_Melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACDoAction_Melee_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACDoAction_Melee_RestoreDilation, "RestoreDilation" }, // 4272012358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Melee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CDoAction_Melee.h" },
		{ "ModuleRelativePath", "Actions/CDoAction_Melee.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDoAction_Melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDoAction_Melee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDoAction_Melee_Statics::ClassParams = {
		&ACDoAction_Melee::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Melee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Melee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDoAction_Melee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDoAction_Melee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDoAction_Melee, 402324275);
	template<> ACTIONGAME_API UClass* StaticClass<ACDoAction_Melee>()
	{
		return ACDoAction_Melee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDoAction_Melee(Z_Construct_UClass_ACDoAction_Melee, &ACDoAction_Melee::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACDoAction_Melee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDoAction_Melee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
