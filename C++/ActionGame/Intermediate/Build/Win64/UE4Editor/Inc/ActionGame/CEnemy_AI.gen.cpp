// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Characters/CEnemy_AI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy_AI() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy_AI_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy_AI();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEnemy();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCPatrolComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void ACEnemy_AI::StaticRegisterNativesACEnemy_AI()
	{
	}
	UClass* Z_Construct_UClass_ACEnemy_AI_NoRegister()
	{
		return ACEnemy_AI::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_AI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Patrol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Patrol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_AI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CEnemy_AI.h" },
		{ "ModuleRelativePath", "Characters/CEnemy_AI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Patrol_MetaData[] = {
		{ "Category", "CEnemy_AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy_AI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Patrol = { "Patrol", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy_AI, Patrol), Z_Construct_UClass_UCPatrolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Patrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Patrol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Characters/CEnemy_AI.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy_AI, TeamID), nullptr, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Characters/CEnemy_AI.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEnemy_AI, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACEnemy_AI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Patrol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_AI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy_AI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_AI_Statics::ClassParams = {
		&ACEnemy_AI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACEnemy_AI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACEnemy_AI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACEnemy_AI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACEnemy_AI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEnemy_AI, 2844895436);
	template<> ACTIONGAME_API UClass* StaticClass<ACEnemy_AI>()
	{
		return ACEnemy_AI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEnemy_AI(Z_Construct_UClass_ACEnemy_AI, &ACEnemy_AI::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACEnemy_AI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy_AI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
