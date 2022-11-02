// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/BehaviorTree/CBTTaskNode_SetSpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTTaskNode_SetSpeed() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTTaskNode_SetSpeed_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTTaskNode_SetSpeed();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_ECharacterSpeed();
// End Cross Module References
	void UCBTTaskNode_SetSpeed::StaticRegisterNativesUCBTTaskNode_SetSpeed()
	{
	}
	UClass* Z_Construct_UClass_UCBTTaskNode_SetSpeed_NoRegister()
	{
		return UCBTTaskNode_SetSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpeedType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeedType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTTaskNode_SetSpeed.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_SetSpeed.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::NewProp_SpeedType_MetaData[] = {
		{ "Category", "CBTTaskNode_SetSpeed" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_SetSpeed.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::NewProp_SpeedType = { "SpeedType", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCBTTaskNode_SetSpeed, SpeedType), Z_Construct_UEnum_ActionGame_ECharacterSpeed, METADATA_PARAMS(Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::NewProp_SpeedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::NewProp_SpeedType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::NewProp_SpeedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::NewProp_SpeedType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::NewProp_SpeedType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTTaskNode_SetSpeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::ClassParams = {
		&UCBTTaskNode_SetSpeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBTTaskNode_SetSpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCBTTaskNode_SetSpeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCBTTaskNode_SetSpeed, 2179381370);
	template<> ACTIONGAME_API UClass* StaticClass<UCBTTaskNode_SetSpeed>()
	{
		return UCBTTaskNode_SetSpeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCBTTaskNode_SetSpeed(Z_Construct_UClass_UCBTTaskNode_SetSpeed, &UCBTTaskNode_SetSpeed::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCBTTaskNode_SetSpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTTaskNode_SetSpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
