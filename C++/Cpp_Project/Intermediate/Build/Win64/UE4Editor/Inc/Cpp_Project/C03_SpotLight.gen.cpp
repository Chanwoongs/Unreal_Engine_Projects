// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/03_Collision/C03_SpotLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC03_SpotLight() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_SpotLight_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_SpotLight();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC03_SpotLight::execOnLightColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLightColor(Z_Param_InIndex,Z_Param_InColor);
		P_NATIVE_END;
	}
	void AC03_SpotLight::StaticRegisterNativesAC03_SpotLight()
	{
		UClass* Class = AC03_SpotLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLightColor", &AC03_SpotLight::execOnLightColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics
	{
		struct C03_SpotLight_eventOnLightColor_Parms
		{
			int32 InIndex;
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_SpotLight_eventOnLightColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_SpotLight_eventOnLightColor_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::NewProp_InColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C03_SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC03_SpotLight, nullptr, "OnLightColor", nullptr, nullptr, sizeof(C03_SpotLight_eventOnLightColor_Parms), Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC03_SpotLight_OnLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC03_SpotLight_OnLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC03_SpotLight_NoRegister()
	{
		return AC03_SpotLight::StaticClass();
	}
	struct Z_Construct_UClass_AC03_SpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC03_SpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC03_SpotLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC03_SpotLight_OnLightColor, "OnLightColor" }, // 1457911280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_SpotLight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_Collision/C03_SpotLight.h" },
		{ "ModuleRelativePath", "03_Collision/C03_SpotLight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_SpotLights_MetaData[] = {
		{ "Category", "C03_SpotLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_SpotLights = { "SpotLights", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SpotLights, AC03_SpotLight), STRUCT_OFFSET(AC03_SpotLight, SpotLights), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_SpotLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_SpotLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C03_SpotLight" },
		{ "Comment", "// ?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_SpotLight.h" },
		{ "ToolTip", "?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_SpotLight, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "C03_SpotLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_SpotLight, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC03_SpotLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_SpotLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_SpotLight_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC03_SpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC03_SpotLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC03_SpotLight_Statics::ClassParams = {
		&AC03_SpotLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC03_SpotLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC03_SpotLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC03_SpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_SpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC03_SpotLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC03_SpotLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC03_SpotLight, 408041499);
	template<> CPP_PROJECT_API UClass* StaticClass<AC03_SpotLight>()
	{
		return AC03_SpotLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC03_SpotLight(Z_Construct_UClass_AC03_SpotLight, &AC03_SpotLight::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC03_SpotLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC03_SpotLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
