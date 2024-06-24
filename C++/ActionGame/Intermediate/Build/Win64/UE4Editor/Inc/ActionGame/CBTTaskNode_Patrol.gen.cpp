// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/BehaviorTree/CBTTaskNode_Patrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTTaskNode_Patrol() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTTaskNode_Patrol_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBTTaskNode_Patrol();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCBTTaskNode_Patrol::StaticRegisterNativesUCBTTaskNode_Patrol()
	{
	}
	UClass* Z_Construct_UClass_UCBTTaskNode_Patrol_NoRegister()
	{
		return UCBTTaskNode_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_UCBTTaskNode_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTTaskNode_Patrol.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Patrol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTTaskNode_Patrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::ClassParams = {
		&UCBTTaskNode_Patrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBTTaskNode_Patrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCBTTaskNode_Patrol, 1575349936);
	template<> ACTIONGAME_API UClass* StaticClass<UCBTTaskNode_Patrol>()
	{
		return UCBTTaskNode_Patrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCBTTaskNode_Patrol(Z_Construct_UClass_UCBTTaskNode_Patrol, &UCBTTaskNode_Patrol::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCBTTaskNode_Patrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTTaskNode_Patrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
