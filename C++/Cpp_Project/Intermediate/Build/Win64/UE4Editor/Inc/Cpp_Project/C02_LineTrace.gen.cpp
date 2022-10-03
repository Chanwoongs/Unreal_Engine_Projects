// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/04_Trace/C02_LineTrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC02_LineTrace() {}
// Cross Module References
	CPP_PROJECT_API UFunction* Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC02_LineTrace_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC02_LineTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	CPP_PROJECT_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics
	{
		struct _Script_Cpp_Project_eventTraceResult_Parms
		{
			AActor* InActor;
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Cpp_Project_eventTraceResult_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Cpp_Project_eventTraceResult_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::NewProp_InColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xcf\xb9? Delegate?? ???? : BP?????? ???\xeb\xb0\xa1???\xcf\xb4?, Parameter type ?? name???? ???\xdf\xbe? ?\xd6\xbe????\xd1\xb4?.\n" },
		{ "ModuleRelativePath", "04_Trace/C02_LineTrace.h" },
		{ "ToolTip", "?\xcf\xb9? Delegate?? ???? : BP?????? ???\xeb\xb0\xa1???\xcf\xb4?, Parameter type ?? name???? ???\xdf\xbe? ?\xd6\xbe????\xd1\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Cpp_Project, nullptr, "TraceResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_Cpp_Project_eventTraceResult_Parms), Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AC02_LineTrace::execRestoreColor)
	{
		P_GET_OBJECT(ACPlayer,Z_Param_InPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreColor(Z_Param_InPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC02_LineTrace::execStartJump)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump(Z_Param_InActor,Z_Param_InColor);
		P_NATIVE_END;
	}
	void AC02_LineTrace::StaticRegisterNativesAC02_LineTrace()
	{
		UClass* Class = AC02_LineTrace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RestoreColor", &AC02_LineTrace::execRestoreColor },
			{ "StartJump", &AC02_LineTrace::execStartJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics
	{
		struct C02_LineTrace_eventRestoreColor_Parms
		{
			ACPlayer* InPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::NewProp_InPlayer = { "InPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C02_LineTrace_eventRestoreColor_Parms, InPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::NewProp_InPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "04_Trace/C02_LineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC02_LineTrace, nullptr, "RestoreColor", nullptr, nullptr, sizeof(C02_LineTrace_eventRestoreColor_Parms), Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC02_LineTrace_RestoreColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC02_LineTrace_RestoreColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics
	{
		struct C02_LineTrace_eventStartJump_Parms
		{
			AActor* InActor;
			FLinearColor InColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C02_LineTrace_eventStartJump_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C02_LineTrace_eventStartJump_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::NewProp_InColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "04_Trace/C02_LineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC02_LineTrace, nullptr, "StartJump", nullptr, nullptr, sizeof(C02_LineTrace_eventStartJump_Parms), Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC02_LineTrace_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC02_LineTrace_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC02_LineTrace_NoRegister()
	{
		return AC02_LineTrace::StaticClass();
	}
	struct Z_Construct_UClass_AC02_LineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTraceResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTraceResult;
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
	UObject* (*const Z_Construct_UClass_AC02_LineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC02_LineTrace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC02_LineTrace_RestoreColor, "RestoreColor" }, // 746193025
		{ &Z_Construct_UFunction_AC02_LineTrace_StartJump, "StartJump" }, // 2622963655
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_LineTrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "04_Trace/C02_LineTrace.h" },
		{ "ModuleRelativePath", "04_Trace/C02_LineTrace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_OnTraceResult_MetaData[] = {
		{ "Comment", "// ?\xea\xb8\xa6 ???????? BP???? ???\xeb\xb0\xa1???\xcf\xb4?\n" },
		{ "ModuleRelativePath", "04_Trace/C02_LineTrace.h" },
		{ "ToolTip", "?\xea\xb8\xa6 ???????? BP???? ???\xeb\xb0\xa1???\xcf\xb4?" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_OnTraceResult = { "OnTraceResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC02_LineTrace, OnTraceResult), Z_Construct_UDelegateFunction_Cpp_Project_TraceResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_OnTraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_OnTraceResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C02_LineTrace" },
		{ "Comment", "// ?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C02_LineTrace.h" },
		{ "ToolTip", "?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC02_LineTrace, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "C02_LineTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "04_Trace/C02_LineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC02_LineTrace, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC02_LineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_OnTraceResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC02_LineTrace_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC02_LineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC02_LineTrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC02_LineTrace_Statics::ClassParams = {
		&AC02_LineTrace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC02_LineTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC02_LineTrace_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC02_LineTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_LineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC02_LineTrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC02_LineTrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC02_LineTrace, 3023772458);
	template<> CPP_PROJECT_API UClass* StaticClass<AC02_LineTrace>()
	{
		return AC02_LineTrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC02_LineTrace(Z_Construct_UClass_AC02_LineTrace, &AC02_LineTrace::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC02_LineTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC02_LineTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
