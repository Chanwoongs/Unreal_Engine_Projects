// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/BehaviorTree/CBTTaskNode_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTTaskNode_Action() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTTaskNode_Action_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTTaskNode_Action();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCBTTaskNode_Action::StaticRegisterNativesUCBTTaskNode_Action()
	{
	}
	UClass* Z_Construct_UClass_UCBTTaskNode_Action_NoRegister()
	{
		return UCBTTaskNode_Action::StaticClass();
	}
	struct Z_Construct_UClass_UCBTTaskNode_Action_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTTaskNode_Action_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Action_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTTaskNode_Action.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Action.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Action_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "CBTTaskNode_Action" },
		{ "Comment", "// EditAnywhere ?\xd9\xbf??? ??\xc5\xb8????, ???? ?????\xcf\xb4?\n" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Action.h" },
		{ "ToolTip", "EditAnywhere ?\xd9\xbf??? ??\xc5\xb8????, ???? ?????\xcf\xb4?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCBTTaskNode_Action_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCBTTaskNode_Action, Delay), METADATA_PARAMS(Z_Construct_UClass_UCBTTaskNode_Action_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Action_Statics::NewProp_Delay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBTTaskNode_Action_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_Action_Statics::NewProp_Delay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTTaskNode_Action_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTTaskNode_Action>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCBTTaskNode_Action_Statics::ClassParams = {
		&UCBTTaskNode_Action::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCBTTaskNode_Action_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Action_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCBTTaskNode_Action_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Action_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBTTaskNode_Action()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCBTTaskNode_Action_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCBTTaskNode_Action, 3504791593);
	template<> ACTIONGAME_API UClass* StaticClass<UCBTTaskNode_Action>()
	{
		return UCBTTaskNode_Action::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCBTTaskNode_Action(Z_Construct_UClass_UCBTTaskNode_Action, &UCBTTaskNode_Action::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCBTTaskNode_Action"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTTaskNode_Action);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
