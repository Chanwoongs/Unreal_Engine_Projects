// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/BehaviorTree/CBTTaskNode_Change.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTTaskNode_Change() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTTaskNode_Change_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTTaskNode_Change();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_EActionType();
// End Cross Module References
	void UCBTTaskNode_Change::StaticRegisterNativesUCBTTaskNode_Change()
	{
	}
	UClass* Z_Construct_UClass_UCBTTaskNode_Change_NoRegister()
	{
		return UCBTTaskNode_Change::StaticClass();
	}
	struct Z_Construct_UClass_UCBTTaskNode_Change_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTTaskNode_Change_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Change_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTTaskNode_Change.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Change.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCBTTaskNode_Change_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Change_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "CBTTaskNode_Change" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Change.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCBTTaskNode_Change_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCBTTaskNode_Change, Type), Z_Construct_UEnum_ActionGame_EActionType, METADATA_PARAMS(Z_Construct_UClass_UCBTTaskNode_Change_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Change_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBTTaskNode_Change_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_Change_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_Change_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTTaskNode_Change_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTTaskNode_Change>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCBTTaskNode_Change_Statics::ClassParams = {
		&UCBTTaskNode_Change::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCBTTaskNode_Change_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Change_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCBTTaskNode_Change_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Change_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBTTaskNode_Change()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCBTTaskNode_Change_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCBTTaskNode_Change, 1526048516);
	template<> ACTIONGAME_API UClass* StaticClass<UCBTTaskNode_Change>()
	{
		return UCBTTaskNode_Change::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCBTTaskNode_Change(Z_Construct_UClass_UCBTTaskNode_Change, &UCBTTaskNode_Change::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCBTTaskNode_Change"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTTaskNode_Change);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
