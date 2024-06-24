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
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACThrow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionData_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEquipment_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FDoActionData>() == std::is_polymorphic<FEquipmentData>(), "USTRUCT FDoActionData cannot be polymorphic unless super FEquipmentData is polymorphic");

class UScriptStruct* FDoActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONGAME_API uint32 Get_Z_Construct_UScriptStruct_FDoActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoActionData, Z_Construct_UPackage__Script_ActionGame(), TEXT("DoActionData"), sizeof(FDoActionData), Get_Z_Construct_UScriptStruct_FDoActionData_Hash());
	}
	return Singleton;
}
template<> ACTIONGAME_API UScriptStruct* StaticStruct<FDoActionData>()
{
	return FDoActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDoActionData(FDoActionData::StaticStruct, TEXT("/Script/ActionGame"), TEXT("DoActionData"), false, nullptr, nullptr);
static struct FScriptStruct_ActionGame_StaticRegisterNativesFDoActionData
{
	FScriptStruct_ActionGame_StaticRegisterNativesFDoActionData()
	{
		UScriptStruct::DeferCppStructOps<FDoActionData>(FName(TEXT("DoActionData")));
	}
} ScriptStruct_ActionGame_StaticRegisterNativesFDoActionData;
	struct Z_Construct_UScriptStruct_FDoActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Power;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ThrowClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Power_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, Power), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Power_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_HitStop_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_HitStop = { "HitStop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, HitStop), METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_HitStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_HitStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "Comment", "// \xc5\xb8?? ?? ????\n" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
		{ "ToolTip", "\xc5\xb8?? ?? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, Effect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectTransform_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "Comment", "// \xc5\xb8?? ????\xc6\xae\n" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
		{ "ToolTip", "\xc5\xb8?? ????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectTransform = { "EffectTransform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, EffectTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_ThrowClass_MetaData[] = {
		{ "Category", "DoActionData" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//TSubclassOf<class UCameraShake> ShakeClass;\n" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nTSubclassOf<class UCameraShake> ShakeClass;" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_ThrowClass = { "ThrowClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoActionData, ThrowClass), Z_Construct_UClass_ACThrow_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_ThrowClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_ThrowClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_HitStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_EffectTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoActionData_Statics::NewProp_ThrowClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
		Z_Construct_UScriptStruct_FEquipmentData,
		&NewStructOps,
		"DoActionData",
		sizeof(FDoActionData),
		alignof(FDoActionData),
		Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDoActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DoActionData"), sizeof(FDoActionData), Get_Z_Construct_UScriptStruct_FDoActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDoActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDoActionData_Hash() { return 1629039743U; }
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
		UScriptStruct::DeferCppStructOps<FEquipmentData>(FName(TEXT("EquipmentData")));
	}
} ScriptStruct_ActionGame_StaticRegisterNativesFEquipmentData;
	struct Z_Construct_UScriptStruct_FEquipmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPawnControl_MetaData[];
#endif
		static void NewProp_bPawnControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPawnControl;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentData, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio = { "PlayRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentData, PlayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEquipmentData, StartSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bPawnControl_MetaData[] = {
		{ "Category", "EquipmentData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bPawnControl_SetBit(void* Obj)
	{
		((FEquipmentData*)Obj)->bPawnControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bPawnControl = { "bPawnControl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEquipmentData), &Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bPawnControl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bPawnControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bPawnControl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_PlayRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bCanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentData_Statics::NewProp_bPawnControl,
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
	uint32 Get_Z_Construct_UScriptStruct_FEquipmentData_Hash() { return 751451361U; }
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquipmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipmentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DoActionClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoActionDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoActionDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoActionDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionData_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "Category", "CActionData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCActionData_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCActionData, AttachmentClass), Z_Construct_UClass_ACAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCActionData_Statics::NewProp_AttachmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionData_Statics::NewProp_AttachmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentClass_MetaData[] = {
		{ "Category", "CActionData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentClass = { "EquipmentClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCActionData, EquipmentClass), Z_Construct_UClass_ACEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "Category", "CActionData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCActionData, EquipmentData), Z_Construct_UScriptStruct_FEquipmentData, METADATA_PARAMS(Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentColor_MetaData[] = {
		{ "Category", "CActionData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentColor = { "EquipmentColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCActionData, EquipmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionClass_MetaData[] = {
		{ "Category", "CActionData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionClass = { "DoActionClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCActionData, DoActionClass), Z_Construct_UClass_ACDoAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionDatas_Inner = { "DoActionDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDoActionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionDatas_MetaData[] = {
		{ "Category", "CActionData" },
		{ "ModuleRelativePath", "Actions/CActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionDatas = { "DoActionDatas", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCActionData, DoActionDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionData_Statics::NewProp_AttachmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionData_Statics::NewProp_EquipmentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionData_Statics::NewProp_DoActionDatas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCActionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCActionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCActionData_Statics::ClassParams = {
		&UCActionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCActionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCActionData_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UCActionData, 1891508125);
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
