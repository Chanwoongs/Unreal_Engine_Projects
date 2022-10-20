// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actions/CAim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAim() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAim_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAim();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	DEFINE_FUNCTION(UCAim::execZooming)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Zooming(Z_Param_Output);
		P_NATIVE_END;
	}
	void UCAim::StaticRegisterNativesUCAim()
	{
		UClass* Class = UCAim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Zooming", &UCAim::execZooming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCAim_Zooming_Statics
	{
		struct CAim_eventZooming_Parms
		{
			float Output;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCAim_Zooming_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAim_eventZooming_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCAim_Zooming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCAim_Zooming_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCAim_Zooming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CAim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCAim_Zooming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCAim, nullptr, "Zooming", nullptr, nullptr, sizeof(CAim_eventZooming_Parms), Z_Construct_UFunction_UCAim_Zooming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCAim_Zooming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCAim_Zooming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCAim_Zooming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCAim_Zooming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCAim_Zooming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCAim_NoRegister()
	{
		return UCAim::StaticClass();
	}
	struct Z_Construct_UClass_UCAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCAim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCAim_Zooming, "Zooming" }, // 2622724342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAim_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CAim.h" },
		{ "ModuleRelativePath", "Actions/CAim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAim_Statics::ClassParams = {
		&UCAim::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCAim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAim, 2937151703);
	template<> ACTIONGAME_API UClass* StaticClass<UCAim>()
	{
		return UCAim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAim(Z_Construct_UClass_UCAim, &UCAim::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCAim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
