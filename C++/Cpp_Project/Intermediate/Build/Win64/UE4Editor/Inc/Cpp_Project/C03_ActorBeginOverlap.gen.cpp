// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/03_Collision/C03_ActorBeginOverlap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC03_ActorBeginOverlap() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_ActorBeginOverlap_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_ActorBeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC03_ActorBeginOverlap::execActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC03_ActorBeginOverlap::execActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AC03_ActorBeginOverlap::StaticRegisterNativesAC03_ActorBeginOverlap()
	{
		UClass* Class = AC03_ActorBeginOverlap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorBeginOverlap", &AC03_ActorBeginOverlap::execActorBeginOverlap },
			{ "ActorEndOverlap", &AC03_ActorBeginOverlap::execActorEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics
	{
		struct C03_ActorBeginOverlap_eventActorBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_ActorBeginOverlap_eventActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_ActorBeginOverlap_eventActorBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate?? ?????? ???????? ??\n" },
		{ "ModuleRelativePath", "03_Collision/C03_ActorBeginOverlap.h" },
		{ "ToolTip", "Delegate?? ?????? ???????? ??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC03_ActorBeginOverlap, nullptr, "ActorBeginOverlap", nullptr, nullptr, sizeof(C03_ActorBeginOverlap_eventActorBeginOverlap_Parms), Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics
	{
		struct C03_ActorBeginOverlap_eventActorEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_ActorBeginOverlap_eventActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_ActorBeginOverlap_eventActorEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xc4\xb6????\xcd\xb4? ?????\xd8\xbf???\n" },
		{ "ModuleRelativePath", "03_Collision/C03_ActorBeginOverlap.h" },
		{ "ToolTip", "?\xc4\xb6????\xcd\xb4? ?????\xd8\xbf???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC03_ActorBeginOverlap, nullptr, "ActorEndOverlap", nullptr, nullptr, sizeof(C03_ActorBeginOverlap_eventActorEndOverlap_Parms), Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC03_ActorBeginOverlap_NoRegister()
	{
		return AC03_ActorBeginOverlap::StaticClass();
	}
	struct Z_Construct_UClass_AC03_ActorBeginOverlap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorBeginOverlap, "ActorBeginOverlap" }, // 3412190447
		{ &Z_Construct_UFunction_AC03_ActorBeginOverlap_ActorEndOverlap, "ActorEndOverlap" }, // 3538876804
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_Collision/C03_ActorBeginOverlap.h" },
		{ "ModuleRelativePath", "03_Collision/C03_ActorBeginOverlap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C03_ActorBeginOverlap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_ActorBeginOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_ActorBeginOverlap, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "C03_ActorBeginOverlap" },
		{ "Comment", "// ?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_ActorBeginOverlap.h" },
		{ "ToolTip", "?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_ActorBeginOverlap, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "C03_ActorBeginOverlap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_ActorBeginOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_ActorBeginOverlap, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC03_ActorBeginOverlap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::ClassParams = {
		&AC03_ActorBeginOverlap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC03_ActorBeginOverlap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC03_ActorBeginOverlap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC03_ActorBeginOverlap, 775024088);
	template<> CPP_PROJECT_API UClass* StaticClass<AC03_ActorBeginOverlap>()
	{
		return AC03_ActorBeginOverlap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC03_ActorBeginOverlap(Z_Construct_UClass_AC03_ActorBeginOverlap, &AC03_ActorBeginOverlap::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC03_ActorBeginOverlap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC03_ActorBeginOverlap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
