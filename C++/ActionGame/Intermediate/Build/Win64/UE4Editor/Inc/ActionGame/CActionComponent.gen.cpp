// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Components/CActionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCActionComponent() {}
// Cross Module References
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_EActionType();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCAction_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionData_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics
	{
		struct _Script_ActionGame_eventActionTypeChanged_Parms
		{
			EActionType InPreviousType;
			EActionType InNewType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPreviousType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPreviousType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::NewProp_InPreviousType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::NewProp_InPreviousType = { "InPreviousType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionGame_eventActionTypeChanged_Parms, InPreviousType), Z_Construct_UEnum_ActionGame_EActionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionGame_eventActionTypeChanged_Parms, InNewType), Z_Construct_UEnum_ActionGame_EActionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::NewProp_InPreviousType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::NewProp_InPreviousType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionGame, nullptr, "ActionTypeChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionGame_eventActionTypeChanged_Parms), Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActionGame_EActionType, Z_Construct_UPackage__Script_ActionGame(), TEXT("EActionType"));
		}
		return Singleton;
	}
	template<> ACTIONGAME_API UEnum* StaticEnum<EActionType>()
	{
		return EActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActionType(EActionType_StaticEnum, TEXT("/Script/ActionGame"), TEXT("EActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActionGame_EActionType_Hash() { return 3041359179U; }
	UEnum* Z_Construct_UEnum_ActionGame_EActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActionGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActionType"), 0, Get_Z_Construct_UEnum_ActionGame_EActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActionType::Unarmed", (int64)EActionType::Unarmed },
				{ "EActionType::Fist", (int64)EActionType::Fist },
				{ "EActionType::OneHand", (int64)EActionType::OneHand },
				{ "EActionType::TwoHand", (int64)EActionType::TwoHand },
				{ "EActionType::Warp", (int64)EActionType::Warp },
				{ "EActionType::FireStorm", (int64)EActionType::FireStorm },
				{ "EActionType::IceBall", (int64)EActionType::IceBall },
				{ "EActionType::Rifle", (int64)EActionType::Rifle },
				{ "EActionType::Mutant", (int64)EActionType::Mutant },
				{ "EActionType::Max", (int64)EActionType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FireStorm.Name", "EActionType::FireStorm" },
				{ "Fist.Name", "EActionType::Fist" },
				{ "IceBall.Name", "EActionType::IceBall" },
				{ "Max.Name", "EActionType::Max" },
				{ "ModuleRelativePath", "Components/CActionComponent.h" },
				{ "Mutant.Name", "EActionType::Mutant" },
				{ "OneHand.Name", "EActionType::OneHand" },
				{ "Rifle.Name", "EActionType::Rifle" },
				{ "TwoHand.Name", "EActionType::TwoHand" },
				{ "Unarmed.Name", "EActionType::Unarmed" },
				{ "Warp.Name", "EActionType::Warp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActionGame,
				nullptr,
				"EActionType",
				"EActionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UCActionComponent::execSetRifleMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRifleMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execSetMutantMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMutantMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execSetWarpMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWarpMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execSetIceBallMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIceBallMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execSetTwoHandMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTwoHandMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execSetUnarmedMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnarmedMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsMutantMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMutantMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsRifleMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRifleMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsIceBallMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIceBallMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsFireStormMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFireStormMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsWarpMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWarpMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsTwoHandMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTwoHandMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsOneHandMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOneHandMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsFistMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFistMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execIsUnarmedMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUnarmedMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCActionComponent::execGetCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCAction**)Z_Param__Result=P_THIS->GetCurrent();
		P_NATIVE_END;
	}
	void UCActionComponent::StaticRegisterNativesUCActionComponent()
	{
		UClass* Class = UCActionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrent", &UCActionComponent::execGetCurrent },
			{ "IsFireStormMode", &UCActionComponent::execIsFireStormMode },
			{ "IsFistMode", &UCActionComponent::execIsFistMode },
			{ "IsIceBallMode", &UCActionComponent::execIsIceBallMode },
			{ "IsMutantMode", &UCActionComponent::execIsMutantMode },
			{ "IsOneHandMode", &UCActionComponent::execIsOneHandMode },
			{ "IsRifleMode", &UCActionComponent::execIsRifleMode },
			{ "IsTwoHandMode", &UCActionComponent::execIsTwoHandMode },
			{ "IsUnarmedMode", &UCActionComponent::execIsUnarmedMode },
			{ "IsWarpMode", &UCActionComponent::execIsWarpMode },
			{ "SetIceBallMode", &UCActionComponent::execSetIceBallMode },
			{ "SetMutantMode", &UCActionComponent::execSetMutantMode },
			{ "SetRifleMode", &UCActionComponent::execSetRifleMode },
			{ "SetTwoHandMode", &UCActionComponent::execSetTwoHandMode },
			{ "SetUnarmedMode", &UCActionComponent::execSetUnarmedMode },
			{ "SetWarpMode", &UCActionComponent::execSetWarpMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics
	{
		struct CActionComponent_eventGetCurrent_Parms
		{
			UCAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CActionComponent_eventGetCurrent_Parms, ReturnValue), Z_Construct_UClass_UCAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "GetCurrent", nullptr, nullptr, sizeof(CActionComponent_eventGetCurrent_Parms), Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_GetCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_GetCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics
	{
		struct CActionComponent_eventIsFireStormMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsFireStormMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsFireStormMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsFireStormMode", nullptr, nullptr, sizeof(CActionComponent_eventIsFireStormMode_Parms), Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsFireStormMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsFireStormMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics
	{
		struct CActionComponent_eventIsFistMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsFistMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsFistMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsFistMode", nullptr, nullptr, sizeof(CActionComponent_eventIsFistMode_Parms), Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsFistMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsFistMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics
	{
		struct CActionComponent_eventIsIceBallMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsIceBallMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsIceBallMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsIceBallMode", nullptr, nullptr, sizeof(CActionComponent_eventIsIceBallMode_Parms), Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsIceBallMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsIceBallMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics
	{
		struct CActionComponent_eventIsMutantMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsMutantMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsMutantMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsMutantMode", nullptr, nullptr, sizeof(CActionComponent_eventIsMutantMode_Parms), Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsMutantMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsMutantMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics
	{
		struct CActionComponent_eventIsOneHandMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsOneHandMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsOneHandMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsOneHandMode", nullptr, nullptr, sizeof(CActionComponent_eventIsOneHandMode_Parms), Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsOneHandMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsOneHandMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics
	{
		struct CActionComponent_eventIsRifleMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsRifleMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsRifleMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsRifleMode", nullptr, nullptr, sizeof(CActionComponent_eventIsRifleMode_Parms), Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsRifleMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsRifleMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics
	{
		struct CActionComponent_eventIsTwoHandMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsTwoHandMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsTwoHandMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsTwoHandMode", nullptr, nullptr, sizeof(CActionComponent_eventIsTwoHandMode_Parms), Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsTwoHandMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsTwoHandMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics
	{
		struct CActionComponent_eventIsUnarmedMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsUnarmedMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsUnarmedMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsUnarmedMode", nullptr, nullptr, sizeof(CActionComponent_eventIsUnarmedMode_Parms), Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsUnarmedMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsUnarmedMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics
	{
		struct CActionComponent_eventIsWarpMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CActionComponent_eventIsWarpMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CActionComponent_eventIsWarpMode_Parms), &Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "IsWarpMode", nullptr, nullptr, sizeof(CActionComponent_eventIsWarpMode_Parms), Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_IsWarpMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_IsWarpMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_SetIceBallMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_SetIceBallMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_SetIceBallMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "SetIceBallMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_SetIceBallMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_SetIceBallMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_SetIceBallMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_SetIceBallMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_SetMutantMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_SetMutantMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_SetMutantMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "SetMutantMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_SetMutantMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_SetMutantMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_SetMutantMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_SetMutantMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_SetRifleMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_SetRifleMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_SetRifleMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "SetRifleMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_SetRifleMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_SetRifleMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_SetRifleMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_SetRifleMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_SetTwoHandMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_SetTwoHandMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_SetTwoHandMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "SetTwoHandMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_SetTwoHandMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_SetTwoHandMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_SetTwoHandMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_SetTwoHandMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_SetUnarmedMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_SetUnarmedMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_SetUnarmedMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "SetUnarmedMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_SetUnarmedMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_SetUnarmedMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_SetUnarmedMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_SetUnarmedMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCActionComponent_SetWarpMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCActionComponent_SetWarpMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCActionComponent_SetWarpMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCActionComponent, nullptr, "SetWarpMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCActionComponent_SetWarpMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCActionComponent_SetWarpMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCActionComponent_SetWarpMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCActionComponent_SetWarpMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCActionComponent_NoRegister()
	{
		return UCActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActionTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionTypeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCActionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCActionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCActionComponent_GetCurrent, "GetCurrent" }, // 1831648945
		{ &Z_Construct_UFunction_UCActionComponent_IsFireStormMode, "IsFireStormMode" }, // 352964673
		{ &Z_Construct_UFunction_UCActionComponent_IsFistMode, "IsFistMode" }, // 1251719032
		{ &Z_Construct_UFunction_UCActionComponent_IsIceBallMode, "IsIceBallMode" }, // 2349821299
		{ &Z_Construct_UFunction_UCActionComponent_IsMutantMode, "IsMutantMode" }, // 4030639049
		{ &Z_Construct_UFunction_UCActionComponent_IsOneHandMode, "IsOneHandMode" }, // 672399581
		{ &Z_Construct_UFunction_UCActionComponent_IsRifleMode, "IsRifleMode" }, // 444906782
		{ &Z_Construct_UFunction_UCActionComponent_IsTwoHandMode, "IsTwoHandMode" }, // 1373337640
		{ &Z_Construct_UFunction_UCActionComponent_IsUnarmedMode, "IsUnarmedMode" }, // 2821889002
		{ &Z_Construct_UFunction_UCActionComponent_IsWarpMode, "IsWarpMode" }, // 716935244
		{ &Z_Construct_UFunction_UCActionComponent_SetIceBallMode, "SetIceBallMode" }, // 1705234623
		{ &Z_Construct_UFunction_UCActionComponent_SetMutantMode, "SetMutantMode" }, // 2498025370
		{ &Z_Construct_UFunction_UCActionComponent_SetRifleMode, "SetRifleMode" }, // 1062429490
		{ &Z_Construct_UFunction_UCActionComponent_SetTwoHandMode, "SetTwoHandMode" }, // 2880942245
		{ &Z_Construct_UFunction_UCActionComponent_SetUnarmedMode, "SetUnarmedMode" }, // 3018326069
		{ &Z_Construct_UFunction_UCActionComponent_SetWarpMode, "SetWarpMode" }, // 1003519650
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameProject" },
		{ "IncludePath", "Components/CActionComponent.h" },
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionComponent_Statics::NewProp_DataAssets_MetaData[] = {
		{ "ArraySizeEnum", "/Script/ActionGame.EActionType" },
		{ "Category", "Weapons" },
		{ "Comment", "// ???? DataAsset?? ?\xd2\xb7??? ?? ?\xe7\xba\xbb DataAsset?? \n// ?????? ???? ???? ?\xde\xb8??? ?????? ?\xcf\xbe\xee\xb3\xaa?? ?\xca\xb5??? \xc3\xb3??\n" },
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
		{ "ToolTip", "???? DataAsset?? ?\xd2\xb7??? ?? ?\xe7\xba\xbb DataAsset??\n?????? ???? ???? ?\xde\xb8??? ?????? ?\xcf\xbe\xee\xb3\xaa?? ?\xca\xb5??? \xc3\xb3??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCActionComponent_Statics::NewProp_DataAssets = { "DataAssets", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DataAssets, UCActionComponent), STRUCT_OFFSET(UCActionComponent, DataAssets), Z_Construct_UClass_UCActionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCActionComponent_Statics::NewProp_DataAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionComponent_Statics::NewProp_DataAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCActionComponent_Statics::NewProp_OnActionTypeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Components/CActionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCActionComponent_Statics::NewProp_OnActionTypeChanged = { "OnActionTypeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCActionComponent, OnActionTypeChanged), Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCActionComponent_Statics::NewProp_OnActionTypeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionComponent_Statics::NewProp_OnActionTypeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCActionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionComponent_Statics::NewProp_DataAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCActionComponent_Statics::NewProp_OnActionTypeChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCActionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCActionComponent_Statics::ClassParams = {
		&UCActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCActionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCActionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCActionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCActionComponent, 3422737167);
	template<> ACTIONGAME_API UClass* StaticClass<UCActionComponent>()
	{
		return UCActionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCActionComponent(Z_Construct_UClass_UCActionComponent, &UCActionComponent::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCActionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCActionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
