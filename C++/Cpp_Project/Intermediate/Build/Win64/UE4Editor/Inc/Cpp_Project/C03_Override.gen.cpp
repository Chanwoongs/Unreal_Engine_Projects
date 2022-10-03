// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Project/03_Collision/C03_Override.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC03_Override() {}
// Cross Module References
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_Override_NoRegister();
	CPP_PROJECT_API UClass* Z_Construct_UClass_AC03_Override();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Cpp_Project();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC03_Override::execActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC03_Override::execActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC03_Override::execChangeColorWhite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeColorWhite_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AC03_Override_ChangeColorRed = FName(TEXT("ChangeColorRed"));
	void AC03_Override::ChangeColorRed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC03_Override_ChangeColorRed),NULL);
	}
	static FName NAME_AC03_Override_ChangeColorWhite = FName(TEXT("ChangeColorWhite"));
	void AC03_Override::ChangeColorWhite()
	{
		ProcessEvent(FindFunctionChecked(NAME_AC03_Override_ChangeColorWhite),NULL);
	}
	void AC03_Override::StaticRegisterNativesAC03_Override()
	{
		UClass* Class = AC03_Override::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorBeginOverlap", &AC03_Override::execActorBeginOverlap },
			{ "ActorEndOverlap", &AC03_Override::execActorEndOverlap },
			{ "ChangeColorWhite", &AC03_Override::execChangeColorWhite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics
	{
		struct C03_Override_eventActorBeginOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_Override_eventActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_Override_eventActorBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "03_Collision/C03_Override.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC03_Override, nullptr, "ActorBeginOverlap", nullptr, nullptr, sizeof(C03_Override_eventActorBeginOverlap_Parms), Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC03_Override_ActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC03_Override_ActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics
	{
		struct C03_Override_eventActorEndOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_Override_eventActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(C03_Override_eventActorEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xc4\xb6????\xcd\xb4? ?????\xd8\xbf???\n" },
		{ "ModuleRelativePath", "03_Collision/C03_Override.h" },
		{ "ToolTip", "?\xc4\xb6????\xcd\xb4? ?????\xd8\xbf???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC03_Override, nullptr, "ActorEndOverlap", nullptr, nullptr, sizeof(C03_Override_eventActorEndOverlap_Parms), Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC03_Override_ActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC03_Override_ActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC03_Override_ChangeColorRed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC03_Override_ChangeColorRed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BlueprintImplementableEvent : C++?????? ???????? ?\xca\xb0? ?\xd8\xb4? \xc5\xac?????\xce\xba??? ???\xd3\xb9??? ?\xda\xbd\xc4\xbf??? ?????\xcf\xb0\xc5\xb3? BP???? ?????\xd8\xbc? ????\n" },
		{ "ModuleRelativePath", "03_Collision/C03_Override.h" },
		{ "ToolTip", "BlueprintImplementableEvent : C++?????? ???????? ?\xca\xb0? ?\xd8\xb4? \xc5\xac?????\xce\xba??? ???\xd3\xb9??? ?\xda\xbd\xc4\xbf??? ?????\xcf\xb0\xc5\xb3? BP???? ?????\xd8\xbc? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC03_Override_ChangeColorRed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC03_Override, nullptr, "ChangeColorRed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC03_Override_ChangeColorRed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_Override_ChangeColorRed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC03_Override_ChangeColorRed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC03_Override_ChangeColorRed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC03_Override_ChangeColorWhite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC03_Override_ChangeColorWhite_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BlueprintNativeEvent : C++???? ???\xc7\xb8? ?\xd8\xb3??? ?\xca\xbf\xe4\xbf\xa1 ???? BP???? ?????\xc7\xb8? ?\xd8\xbc? ????\n" },
		{ "ModuleRelativePath", "03_Collision/C03_Override.h" },
		{ "ToolTip", "BlueprintNativeEvent : C++???? ???\xc7\xb8? ?\xd8\xb3??? ?\xca\xbf\xe4\xbf\xa1 ???? BP???? ?????\xc7\xb8? ?\xd8\xbc? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC03_Override_ChangeColorWhite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC03_Override, nullptr, "ChangeColorWhite", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC03_Override_ChangeColorWhite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC03_Override_ChangeColorWhite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC03_Override_ChangeColorWhite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC03_Override_ChangeColorWhite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC03_Override_NoRegister()
	{
		return AC03_Override::StaticClass();
	}
	struct Z_Construct_UClass_AC03_Override_Statics
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
	UObject* (*const Z_Construct_UClass_AC03_Override_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC03_Override_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC03_Override_ActorBeginOverlap, "ActorBeginOverlap" }, // 47156633
		{ &Z_Construct_UFunction_AC03_Override_ActorEndOverlap, "ActorEndOverlap" }, // 407502569
		{ &Z_Construct_UFunction_AC03_Override_ChangeColorRed, "ChangeColorRed" }, // 3363919393
		{ &Z_Construct_UFunction_AC03_Override_ChangeColorWhite, "ChangeColorWhite" }, // 705017722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Override_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_Collision/C03_Override.h" },
		{ "ModuleRelativePath", "03_Collision/C03_Override.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Override_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "C03_Override" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_Override.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_Override_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_Override, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_Override_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Override_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Override_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "C03_Override" },
		{ "Comment", "// ?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_Override.h" },
		{ "ToolTip", "?\xce\xb8? ?\xda\xbd\xc4\xb0??\xe8\xb8\xa6 ?????? ?? ?\xd6\xb4? Transform?? ?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_Override_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_Override, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_Override_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Override_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Override_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "C03_Override" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "03_Collision/C03_Override.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC03_Override_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_Override, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC03_Override_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Override_Statics::NewProp_Scene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC03_Override_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_Override_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_Override_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_Override_Statics::NewProp_Scene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC03_Override_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC03_Override>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC03_Override_Statics::ClassParams = {
		&AC03_Override::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC03_Override_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Override_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC03_Override_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Override_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC03_Override()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC03_Override_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC03_Override, 405298957);
	template<> CPP_PROJECT_API UClass* StaticClass<AC03_Override>()
	{
		return AC03_Override::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC03_Override(Z_Construct_UClass_AC03_Override, &AC03_Override::StaticClass, TEXT("/Script/Cpp_Project"), TEXT("AC03_Override"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC03_Override);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
