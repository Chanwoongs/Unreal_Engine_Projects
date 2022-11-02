// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actions/CAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAction() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAction_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void UCAction::StaticRegisterNativesUCAction()
	{
	}
	UClass* Z_Construct_UClass_UCAction_NoRegister()
	{
		return UCAction::StaticClass();
	}
	struct Z_Construct_UClass_UCAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Action ?\xe7\xba\xbb?? ?????? \xc5\xac????\n" },
		{ "IncludePath", "Actions/CAction.h" },
		{ "ModuleRelativePath", "Actions/CAction.h" },
		{ "ToolTip", "Action ?\xe7\xba\xbb?? ?????? \xc5\xac????" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAction_Statics::ClassParams = {
		&UCAction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAction, 1671776402);
	template<> ACTIONGAME_API UClass* StaticClass<UCAction>()
	{
		return UCAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAction(Z_Construct_UClass_UCAction, &UCAction::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
