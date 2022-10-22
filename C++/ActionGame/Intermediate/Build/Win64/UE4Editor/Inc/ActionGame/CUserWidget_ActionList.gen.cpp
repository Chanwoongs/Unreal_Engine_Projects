// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Widgets/CUserWidget_ActionList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUserWidget_ActionList() {}
// Cross Module References
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidget_ActionData();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_ActionList_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_ActionList();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionGame, nullptr, "UserWidget_ActionItem_Clicked__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FUserWidget_ActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONGAME_API uint32 Get_Z_Construct_UScriptStruct_FUserWidget_ActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserWidget_ActionData, Z_Construct_UPackage__Script_ActionGame(), TEXT("UserWidget_ActionData"), sizeof(FUserWidget_ActionData), Get_Z_Construct_UScriptStruct_FUserWidget_ActionData_Hash());
	}
	return Singleton;
}
template<> ACTIONGAME_API UScriptStruct* StaticStruct<FUserWidget_ActionData>()
{
	return FUserWidget_ActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserWidget_ActionData(FUserWidget_ActionData::StaticStruct, TEXT("/Script/ActionGame"), TEXT("UserWidget_ActionData"), false, nullptr, nullptr);
static struct FScriptStruct_ActionGame_StaticRegisterNativesFUserWidget_ActionData
{
	FScriptStruct_ActionGame_StaticRegisterNativesFUserWidget_ActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserWidget_ActionData")),new UScriptStruct::TCppStructOps<FUserWidget_ActionData>);
	}
} ScriptStruct_ActionGame_StaticRegisterNativesFUserWidget_ActionData;
	struct Z_Construct_UScriptStruct_FUserWidget_ActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserWidget_ActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserWidget_ActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserWidget_ActionData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserWidget_ActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
		nullptr,
		&NewStructOps,
		"UserWidget_ActionData",
		sizeof(FUserWidget_ActionData),
		alignof(FUserWidget_ActionData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserWidget_ActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidget_ActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserWidget_ActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserWidget_ActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserWidget_ActionData"), sizeof(FUserWidget_ActionData), Get_Z_Construct_UScriptStruct_FUserWidget_ActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserWidget_ActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserWidget_ActionData_Hash() { return 2876846643U; }
	void UCUserWidget_ActionList::StaticRegisterNativesUCUserWidget_ActionList()
	{
	}
	UClass* Z_Construct_UClass_UCUserWidget_ActionList_NoRegister()
	{
		return UCUserWidget_ActionList::StaticClass();
	}
	struct Z_Construct_UClass_UCUserWidget_ActionList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCUserWidget_ActionList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCUserWidget_ActionList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CUserWidget_ActionList.h" },
		{ "ModuleRelativePath", "Widgets/CUserWidget_ActionList.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCUserWidget_ActionList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCUserWidget_ActionList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCUserWidget_ActionList_Statics::ClassParams = {
		&UCUserWidget_ActionList::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCUserWidget_ActionList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCUserWidget_ActionList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCUserWidget_ActionList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCUserWidget_ActionList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCUserWidget_ActionList, 3650404732);
	template<> ACTIONGAME_API UClass* StaticClass<UCUserWidget_ActionList>()
	{
		return UCUserWidget_ActionList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCUserWidget_ActionList(Z_Construct_UClass_UCUserWidget_ActionList, &UCUserWidget_ActionList::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCUserWidget_ActionList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCUserWidget_ActionList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
