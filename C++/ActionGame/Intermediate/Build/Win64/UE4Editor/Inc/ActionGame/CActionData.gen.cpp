// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actions/CActionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCActionData() {}
// Cross Module References
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionData_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FEquipmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONGAME_API uint32 Get_Z_Construct_UScriptStruct_FEquipmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentData, Z_Construct_UPackage__Script_ActionGame(), TEXT("EquipmentData"), sizeof(FEquipmentData), Get_Z_Construct_UScriptStruct_FEquipmentData_Hash());
	}
	return Singleton;
}
template<> ACTIONGAME_API UScriptStruct* StaticStruct<FEquipmentData>()
{
	return FEquipmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEquipmentData(FEquipmentData::StaticStruct, TEXT("/Script/ActionGame"), TEXT("EquipmentData"), false, nullptr, nullptr);
static struct FScriptStruct_ActionGame_StaticRegisterNativesFEquipmentData
{
	FScriptStruct_ActionGame_StaticRegisterNativesFEquipmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EquipmentData")),new UScriptStruct::TCppStructOps<FEquipmentData>);
	}
} ScriptStruct_ActionGame_StaticRegisterNativesFEquipmentData;
	struct Z_Construct_UScriptStruct_FEquipmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((FEquipmentData*)Obj)->bCanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEquipmentData), &Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentData, StartSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio = { "PlayRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentData, PlayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentData, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
		nullptr,
		&NewStructOps,
		"EquipmentData",
		sizeof(FEquipmentData),
		alignof(FEquipmentData),
		Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEquipmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EquipmentData"), sizeof(FEquipmentData), Get_Z_Construct_UScriptStruct_FEquipmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEquipmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEquipmentData_Hash() { return 3128433003U; }
	void UCActionData::StaticRegisterNativesUCActionData()
	{
	}
	UClass* Z_Construct_UClass_UCActionData_NoRegister()
	{
		return UCActionData::StaticClass();
	}
	struct Z_Construct_UClass_UCActionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCActionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CActionData.h" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCActionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCActionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCActionData_Statics::ClassParams = {
		&UCActionData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCActionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCActionData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCActionData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCActionData, 4255820870);
	template<> ACTIONGAME_API UClass* StaticClass<UCActionData>()
	{
		return UCActionData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCActionData(Z_Construct_UClass_UCActionData, &UCActionData::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCActionData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCActionData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
