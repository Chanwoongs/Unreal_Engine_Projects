// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Characters/CAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAIController() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACAIController_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBehaviorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACAIController::execOnPerceptionUpdated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdateActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdateActors);
		P_NATIVE_END;
	}
	void ACAIController::StaticRegisterNativesACAIController()
	{
		UClass* Class = ACAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPerceptionUpdated", &ACAIController::execOnPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics
	{
		struct CAIController_eventOnPerceptionUpdated_Parms
		{
			TArray<AActor*> UpdateActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdateActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdateActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_Inner = { "UpdateActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors = { "UpdateActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CAIController_eventOnPerceptionUpdated_Parms, UpdateActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::NewProp_UpdateActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACAIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(CAIController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACAIController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACAIController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACAIController_NoRegister()
	{
		return ACAIController::StaticClass();
	}
	struct Z_Construct_UClass_ACAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BehaviorRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustCircleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustCircleHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Perception;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Behavior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACAIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 1580141725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Characters/CAIController.h" },
		{ "ModuleRelativePath", "Characters/CAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAIController_Statics::NewProp_BehaviorRange_MetaData[] = {
		{ "Category", "CAIController" },
		{ "ModuleRelativePath", "Characters/CAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACAIController_Statics::NewProp_BehaviorRange = { "BehaviorRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAIController, BehaviorRange), METADATA_PARAMS(Z_Construct_UClass_ACAIController_Statics::NewProp_BehaviorRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAIController_Statics::NewProp_BehaviorRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAIController_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "CAIController" },
		{ "Comment", "// AI?? ?\xd9\xb0\xc5\xb8? ???? ????\n" },
		{ "ModuleRelativePath", "Characters/CAIController.h" },
		{ "ToolTip", "AI?? ?\xd9\xb0\xc5\xb8? ???? ????" },
	};
#endif
	void Z_Construct_UClass_ACAIController_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((ACAIController*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACAIController_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACAIController), &Z_Construct_UClass_ACAIController_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACAIController_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAIController_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAIController_Statics::NewProp_AdjustCircleHeight_MetaData[] = {
		{ "Category", "CAIController" },
		{ "ModuleRelativePath", "Characters/CAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACAIController_Statics::NewProp_AdjustCircleHeight = { "AdjustCircleHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAIController, AdjustCircleHeight), METADATA_PARAMS(Z_Construct_UClass_ACAIController_Statics::NewProp_AdjustCircleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAIController_Statics::NewProp_AdjustCircleHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAIController_Statics::NewProp_Perception_MetaData[] = {
		{ "Category", "CAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAIController_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAIController, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAIController_Statics::NewProp_Perception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAIController_Statics::NewProp_Perception_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAIController_Statics::NewProp_Behavior_MetaData[] = {
		{ "Category", "CAIController" },
		{ "Comment", "// ???? ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CAIController.h" },
		{ "ToolTip", "???? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAIController_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACAIController, Behavior), Z_Construct_UClass_UCBehaviorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACAIController_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACAIController_Statics::NewProp_Behavior_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAIController_Statics::NewProp_BehaviorRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAIController_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAIController_Statics::NewProp_AdjustCircleHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAIController_Statics::NewProp_Perception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAIController_Statics::NewProp_Behavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACAIController_Statics::ClassParams = {
		&ACAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACAIController, 2702588128);
	template<> ACTIONGAME_API UClass* StaticClass<ACAIController>()
	{
		return ACAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACAIController(Z_Construct_UClass_ACAIController, &ACAIController::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
