// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Components/CBehaviorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBehaviorComponent() {}
// Cross Module References
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_EBehaviorType();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBehaviorComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCBehaviorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics
	{
		struct _Script_ActionGame_eventBehaviorTypeChanged_Parms
		{
			EBehaviorType InPrevType;
			EBehaviorType InNewType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPrevType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPrevType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionGame_eventBehaviorTypeChanged_Parms, InPrevType), Z_Construct_UEnum_ActionGame_EBehaviorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionGame_eventBehaviorTypeChanged_Parms, InNewType), Z_Construct_UEnum_ActionGame_EBehaviorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::NewProp_InPrevType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionGame, nullptr, "BehaviorTypeChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionGame_eventBehaviorTypeChanged_Parms), Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EBehaviorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActionGame_EBehaviorType, Z_Construct_UPackage__Script_ActionGame(), TEXT("EBehaviorType"));
		}
		return Singleton;
	}
	template<> ACTIONGAME_API UEnum* StaticEnum<EBehaviorType>()
	{
		return EBehaviorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBehaviorType(EBehaviorType_StaticEnum, TEXT("/Script/ActionGame"), TEXT("EBehaviorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActionGame_EBehaviorType_Hash() { return 1744788200U; }
	UEnum* Z_Construct_UEnum_ActionGame_EBehaviorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActionGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBehaviorType"), 0, Get_Z_Construct_UEnum_ActionGame_EBehaviorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBehaviorType::Wait", (int64)EBehaviorType::Wait },
				{ "EBehaviorType::Approach", (int64)EBehaviorType::Approach },
				{ "EBehaviorType::Action", (int64)EBehaviorType::Action },
				{ "EBehaviorType::Patrol", (int64)EBehaviorType::Patrol },
				{ "EBehaviorType::Hitted", (int64)EBehaviorType::Hitted },
				{ "EBehaviorType::Avoid", (int64)EBehaviorType::Avoid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Action.Name", "EBehaviorType::Action" },
				{ "Approach.Name", "EBehaviorType::Approach" },
				{ "Avoid.Name", "EBehaviorType::Avoid" },
				{ "BlueprintType", "true" },
				{ "Hitted.Name", "EBehaviorType::Hitted" },
				{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
				{ "Patrol.Name", "EBehaviorType::Patrol" },
				{ "Wait.Name", "EBehaviorType::Wait" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActionGame,
				nullptr,
				"EBehaviorType",
				"EBehaviorType",
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
	DEFINE_FUNCTION(UCBehaviorComponent::execIsAvoidMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAvoidMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCBehaviorComponent::execIsHittedMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHittedMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCBehaviorComponent::execIsPatrolMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPatrolMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCBehaviorComponent::execIsActionMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActionMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCBehaviorComponent::execIsApproachMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsApproachMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCBehaviorComponent::execIsWaitMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWaitMode();
		P_NATIVE_END;
	}
	void UCBehaviorComponent::StaticRegisterNativesUCBehaviorComponent()
	{
		UClass* Class = UCBehaviorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActionMode", &UCBehaviorComponent::execIsActionMode },
			{ "IsApproachMode", &UCBehaviorComponent::execIsApproachMode },
			{ "IsAvoidMode", &UCBehaviorComponent::execIsAvoidMode },
			{ "IsHittedMode", &UCBehaviorComponent::execIsHittedMode },
			{ "IsPatrolMode", &UCBehaviorComponent::execIsPatrolMode },
			{ "IsWaitMode", &UCBehaviorComponent::execIsWaitMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics
	{
		struct CBehaviorComponent_eventIsActionMode_Parms
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
	void Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CBehaviorComponent_eventIsActionMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CBehaviorComponent_eventIsActionMode_Parms), &Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCBehaviorComponent, nullptr, "IsActionMode", nullptr, nullptr, sizeof(CBehaviorComponent_eventIsActionMode_Parms), Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCBehaviorComponent_IsActionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCBehaviorComponent_IsActionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics
	{
		struct CBehaviorComponent_eventIsApproachMode_Parms
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
	void Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CBehaviorComponent_eventIsApproachMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CBehaviorComponent_eventIsApproachMode_Parms), &Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCBehaviorComponent, nullptr, "IsApproachMode", nullptr, nullptr, sizeof(CBehaviorComponent_eventIsApproachMode_Parms), Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics
	{
		struct CBehaviorComponent_eventIsAvoidMode_Parms
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
	void Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CBehaviorComponent_eventIsAvoidMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CBehaviorComponent_eventIsAvoidMode_Parms), &Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCBehaviorComponent, nullptr, "IsAvoidMode", nullptr, nullptr, sizeof(CBehaviorComponent_eventIsAvoidMode_Parms), Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics
	{
		struct CBehaviorComponent_eventIsHittedMode_Parms
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
	void Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CBehaviorComponent_eventIsHittedMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CBehaviorComponent_eventIsHittedMode_Parms), &Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCBehaviorComponent, nullptr, "IsHittedMode", nullptr, nullptr, sizeof(CBehaviorComponent_eventIsHittedMode_Parms), Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics
	{
		struct CBehaviorComponent_eventIsPatrolMode_Parms
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
	void Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CBehaviorComponent_eventIsPatrolMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CBehaviorComponent_eventIsPatrolMode_Parms), &Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCBehaviorComponent, nullptr, "IsPatrolMode", nullptr, nullptr, sizeof(CBehaviorComponent_eventIsPatrolMode_Parms), Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics
	{
		struct CBehaviorComponent_eventIsWaitMode_Parms
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
	void Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CBehaviorComponent_eventIsWaitMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CBehaviorComponent_eventIsWaitMode_Parms), &Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCBehaviorComponent, nullptr, "IsWaitMode", nullptr, nullptr, sizeof(CBehaviorComponent_eventIsWaitMode_Parms), Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCBehaviorComponent_NoRegister()
	{
		return UCBehaviorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCBehaviorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BehaviorKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarpKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WarpKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBehaviorTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBehaviorTypeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBehaviorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCBehaviorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCBehaviorComponent_IsActionMode, "IsActionMode" }, // 3754209500
		{ &Z_Construct_UFunction_UCBehaviorComponent_IsApproachMode, "IsApproachMode" }, // 578516391
		{ &Z_Construct_UFunction_UCBehaviorComponent_IsAvoidMode, "IsAvoidMode" }, // 272664449
		{ &Z_Construct_UFunction_UCBehaviorComponent_IsHittedMode, "IsHittedMode" }, // 1888759806
		{ &Z_Construct_UFunction_UCBehaviorComponent_IsPatrolMode, "IsPatrolMode" }, // 900951078
		{ &Z_Construct_UFunction_UCBehaviorComponent_IsWaitMode, "IsWaitMode" }, // 1262097028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBehaviorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameProject" },
		{ "IncludePath", "Components/CBehaviorComponent.h" },
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData[] = {
		{ "Category", "CBehaviorComponent" },
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey = { "BehaviorKey", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCBehaviorComponent, BehaviorKey), METADATA_PARAMS(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "CBehaviorComponent" },
		{ "Comment", "// Blackboard Key\n" },
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
		{ "ToolTip", "Blackboard Key" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCBehaviorComponent, PlayerKey), METADATA_PARAMS(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_WarpKey_MetaData[] = {
		{ "Category", "CBehaviorComponent" },
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_WarpKey = { "WarpKey", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCBehaviorComponent, WarpKey), METADATA_PARAMS(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_WarpKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_WarpKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_OnBehaviorTypeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Components/CBehaviorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_OnBehaviorTypeChanged = { "OnBehaviorTypeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCBehaviorComponent, OnBehaviorTypeChanged), Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_OnBehaviorTypeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_OnBehaviorTypeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBehaviorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_BehaviorKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_PlayerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_WarpKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBehaviorComponent_Statics::NewProp_OnBehaviorTypeChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBehaviorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBehaviorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCBehaviorComponent_Statics::ClassParams = {
		&UCBehaviorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCBehaviorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCBehaviorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCBehaviorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCBehaviorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCBehaviorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCBehaviorComponent, 2573367510);
	template<> ACTIONGAME_API UClass* StaticClass<UCBehaviorComponent>()
	{
		return UCBehaviorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCBehaviorComponent(Z_Construct_UClass_UCBehaviorComponent, &UCBehaviorComponent::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCBehaviorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBehaviorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
