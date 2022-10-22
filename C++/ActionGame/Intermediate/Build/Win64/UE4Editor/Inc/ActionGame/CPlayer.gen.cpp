// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Characters/CPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlayer() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_EStateType();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCFeetComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCOptionComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCMontagesComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCTargetComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCActionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCUserWidget_ActionList_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UICharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACPlayer::execOnDoAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDoAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPlayer::execOnIceBall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIceBall();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPlayer::execOnFireStorm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFireStorm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPlayer::execOnWarp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWarp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPlayer::execOnTwoHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTwoHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPlayer::execOnOneHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOneHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPlayer::execOnFist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPlayer::execOnStateTypeChanged)
	{
		P_GET_ENUM(EStateType,Z_Param_InPreviousType);
		P_GET_ENUM(EStateType,Z_Param_InNewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateTypeChanged(EStateType(Z_Param_InPreviousType),EStateType(Z_Param_InNewType));
		P_NATIVE_END;
	}
	void ACPlayer::StaticRegisterNativesACPlayer()
	{
		UClass* Class = ACPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDoAction", &ACPlayer::execOnDoAction },
			{ "OnFireStorm", &ACPlayer::execOnFireStorm },
			{ "OnFist", &ACPlayer::execOnFist },
			{ "OnIceBall", &ACPlayer::execOnIceBall },
			{ "OnOneHand", &ACPlayer::execOnOneHand },
			{ "OnStateTypeChanged", &ACPlayer::execOnStateTypeChanged },
			{ "OnTwoHand", &ACPlayer::execOnTwoHand },
			{ "OnWarp", &ACPlayer::execOnWarp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPlayer_OnDoAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_OnDoAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_OnDoAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "OnDoAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_OnDoAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnDoAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_OnDoAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_OnDoAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPlayer_OnFireStorm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_OnFireStorm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_OnFireStorm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "OnFireStorm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_OnFireStorm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnFireStorm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_OnFireStorm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_OnFireStorm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPlayer_OnFist_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_OnFist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_OnFist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "OnFist", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_OnFist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnFist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_OnFist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_OnFist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPlayer_OnIceBall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_OnIceBall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_OnIceBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "OnIceBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_OnIceBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnIceBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_OnIceBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_OnIceBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPlayer_OnOneHand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_OnOneHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_OnOneHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "OnOneHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_OnOneHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnOneHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_OnOneHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_OnOneHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics
	{
		struct CPlayer_eventOnStateTypeChanged_Parms
		{
			EStateType InPreviousType;
			EStateType InNewType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPreviousType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPreviousType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayer_eventOnStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_ActionGame_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::NewProp_InPreviousType = { "InPreviousType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPlayer_eventOnStateTypeChanged_Parms, InPreviousType), Z_Construct_UEnum_ActionGame_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::NewProp_InPreviousType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::NewProp_InNewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::NewProp_InPreviousType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::NewProp_InPreviousType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "OnStateTypeChanged", nullptr, nullptr, sizeof(CPlayer_eventOnStateTypeChanged_Parms), Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_OnStateTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_OnStateTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPlayer_OnTwoHand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_OnTwoHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_OnTwoHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "OnTwoHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_OnTwoHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnTwoHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_OnTwoHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_OnTwoHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPlayer_OnWarp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPlayer_OnWarp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPlayer_OnWarp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPlayer, nullptr, "OnWarp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPlayer_OnWarp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPlayer_OnWarp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPlayer_OnWarp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPlayer_OnWarp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACPlayer_NoRegister()
	{
		return ACPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionListClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionListClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPlayer_OnDoAction, "OnDoAction" }, // 495787428
		{ &Z_Construct_UFunction_ACPlayer_OnFireStorm, "OnFireStorm" }, // 3267542814
		{ &Z_Construct_UFunction_ACPlayer_OnFist, "OnFist" }, // 3227509037
		{ &Z_Construct_UFunction_ACPlayer_OnIceBall, "OnIceBall" }, // 2526254752
		{ &Z_Construct_UFunction_ACPlayer_OnOneHand, "OnOneHand" }, // 3316102057
		{ &Z_Construct_UFunction_ACPlayer_OnStateTypeChanged, "OnStateTypeChanged" }, // 3085792560
		{ &Z_Construct_UFunction_ACPlayer_OnTwoHand, "OnTwoHand" }, // 475488713
		{ &Z_Construct_UFunction_ACPlayer_OnWarp, "OnWarp" }, // 3814481621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CPlayer.h" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_Feet_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_Feet = { "Feet", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, Feet), Z_Construct_UClass_UCFeetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_Feet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_Feet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, Status), Z_Construct_UClass_UCStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_Option_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, Option), Z_Construct_UClass_UCOptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_Option_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_Montages_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, Montages), Z_Construct_UClass_UCMontagesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_Montages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, Target), Z_Construct_UClass_UCTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, Action), Z_Construct_UClass_UCActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_ActionListClass_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "ModuleRelativePath", "Characters/CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_ActionListClass = { "ActionListClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, ActionListClass), Z_Construct_UClass_UCUserWidget_ActionList_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_ActionListClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_ActionListClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_Feet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_Option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_Montages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_ActionListClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UICharacter_NoRegister, (int32)VTABLE_OFFSET(ACPlayer, IICharacter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPlayer_Statics::ClassParams = {
		&ACPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPlayer, 3631798650);
	template<> ACTIONGAME_API UClass* StaticClass<ACPlayer>()
	{
		return ACPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPlayer(Z_Construct_UClass_ACPlayer, &ACPlayer::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
