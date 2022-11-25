// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Characters/CEnemy_AI_Mutant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy_AI_Mutant() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy_AI_Mutant_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy_AI_Mutant();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy_AI();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(ACEnemy_AI_Mutant::execRestoreColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreColor();
		P_NATIVE_END;
	}
	void ACEnemy_AI_Mutant::StaticRegisterNativesACEnemy_AI_Mutant()
	{
		UClass* Class = ACEnemy_AI_Mutant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RestoreColor", &ACEnemy_AI_Mutant::execRestoreColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACEnemy_AI_Mutant_RestoreColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEnemy_AI_Mutant_RestoreColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CEnemy_AI_Mutant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEnemy_AI_Mutant_RestoreColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEnemy_AI_Mutant, nullptr, "RestoreColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACEnemy_AI_Mutant_RestoreColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEnemy_AI_Mutant_RestoreColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACEnemy_AI_Mutant_RestoreColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACEnemy_AI_Mutant_RestoreColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACEnemy_AI_Mutant_NoRegister()
	{
		return ACEnemy_AI_Mutant::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_AI_Mutant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_AI_Mutant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACEnemy_AI,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACEnemy_AI_Mutant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACEnemy_AI_Mutant_RestoreColor, "RestoreColor" }, // 1757066833
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Mutant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CEnemy_AI_Mutant.h" },
		{ "ModuleRelativePath", "Characters/CEnemy_AI_Mutant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_AI_Mutant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy_AI_Mutant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_AI_Mutant_Statics::ClassParams = {
		&ACEnemy_AI_Mutant::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ACEnemy_AI_Mutant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Mutant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACEnemy_AI_Mutant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACEnemy_AI_Mutant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEnemy_AI_Mutant, 1483019627);
	template<> ACTIONGAME_API UClass* StaticClass<ACEnemy_AI_Mutant>()
	{
		return ACEnemy_AI_Mutant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEnemy_AI_Mutant(Z_Construct_UClass_ACEnemy_AI_Mutant, &ACEnemy_AI_Mutant::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACEnemy_AI_Mutant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy_AI_Mutant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
