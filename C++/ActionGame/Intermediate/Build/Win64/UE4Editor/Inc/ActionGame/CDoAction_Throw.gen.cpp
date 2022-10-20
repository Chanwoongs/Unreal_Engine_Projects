// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actions/CDoAction_Throw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Throw() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction_Throw_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction_Throw();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(ACDoAction_Throw::execOnThrowBeginOverlap)
	{
		P_GET_STRUCT(FHitResult,Z_Param_InHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnThrowBeginOverlap(Z_Param_InHitResult);
		P_NATIVE_END;
	}
	void ACDoAction_Throw::StaticRegisterNativesACDoAction_Throw()
	{
		UClass* Class = ACDoAction_Throw::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnThrowBeginOverlap", &ACDoAction_Throw::execOnThrowBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics
	{
		struct CDoAction_Throw_eventOnThrowBeginOverlap_Parms
		{
			FHitResult InHitResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::NewProp_InHitResult = { "InHitResult", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_Throw_eventOnThrowBeginOverlap_Parms, InHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::NewProp_InHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CDoAction_Throw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACDoAction_Throw, nullptr, "OnThrowBeginOverlap", nullptr, nullptr, sizeof(CDoAction_Throw_eventOnThrowBeginOverlap_Parms), Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACDoAction_Throw_NoRegister()
	{
		return ACDoAction_Throw::StaticClass();
	}
	struct Z_Construct_UClass_ACDoAction_Throw_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDoAction_Throw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACDoAction_Throw_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACDoAction_Throw_OnThrowBeginOverlap, "OnThrowBeginOverlap" }, // 1400938806
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Throw_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CDoAction_Throw.h" },
		{ "ModuleRelativePath", "Actions/CDoAction_Throw.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDoAction_Throw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDoAction_Throw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDoAction_Throw_Statics::ClassParams = {
		&ACDoAction_Throw::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Throw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Throw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDoAction_Throw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDoAction_Throw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDoAction_Throw, 894857502);
	template<> ACTIONGAME_API UClass* StaticClass<ACDoAction_Throw>()
	{
		return ACDoAction_Throw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDoAction_Throw(Z_Construct_UClass_ACDoAction_Throw, &ACDoAction_Throw::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACDoAction_Throw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDoAction_Throw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
