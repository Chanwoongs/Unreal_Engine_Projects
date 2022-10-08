// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Components/CStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCStateComponent() {}
// Cross Module References
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_EStateType();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics
	{
		struct _Script_ActionGame_eventStateTypeChanged_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionGame_eventStateTypeChanged_Parms, InNewType), Z_Construct_UEnum_ActionGame_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::NewProp_InPreviousType = { "InPreviousType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ActionGame_eventStateTypeChanged_Parms, InPreviousType), Z_Construct_UEnum_ActionGame_EStateType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::NewProp_InPreviousType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::NewProp_InPreviousType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::NewProp_InPreviousType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???\xc2\xb0? ?\xd9\xb2? ?? ???\xc2\xb0? ?\xd9\xb2? ???? ???????? Dynamic Delegate\n" },
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
		{ "ToolTip", "???\xc2\xb0? ?\xd9\xb2? ?? ???\xc2\xb0? ?\xd9\xb2? ???? ???????? Dynamic Delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ActionGame, nullptr, "StateTypeChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_ActionGame_eventStateTypeChanged_Parms), Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActionGame_EStateType, Z_Construct_UPackage__Script_ActionGame(), TEXT("EStateType"));
		}
		return Singleton;
	}
	template<> ACTIONGAME_API UEnum* StaticEnum<EStateType>()
	{
		return EStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStateType(EStateType_StaticEnum, TEXT("/Script/ActionGame"), TEXT("EStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActionGame_EStateType_Hash() { return 4219227020U; }
	UEnum* Z_Construct_UEnum_ActionGame_EStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActionGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStateType"), 0, Get_Z_Construct_UEnum_ActionGame_EStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStateType::Idle", (int64)EStateType::Idle },
				{ "EStateType::Roll", (int64)EStateType::Roll },
				{ "EStateType::Backstep", (int64)EStateType::Backstep },
				{ "EStateType::Equip", (int64)EStateType::Equip },
				{ "EStateType::Action", (int64)EStateType::Action },
				{ "EStateType::Max", (int64)EStateType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Action.Name", "EStateType::Action" },
				{ "Backstep.Name", "EStateType::Backstep" },
				{ "BlueprintType", "true" },
				{ "Comment", "// 8byte unsigned int ?\xda\xb7??? ????\n" },
				{ "Equip.Name", "EStateType::Equip" },
				{ "Idle.Name", "EStateType::Idle" },
				{ "Max.Name", "EStateType::Max" },
				{ "ModuleRelativePath", "Components/CStateComponent.h" },
				{ "Roll.Name", "EStateType::Roll" },
				{ "ToolTip", "8byte unsigned int ?\xda\xb7??? ????" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActionGame,
				nullptr,
				"EStateType",
				"EStateType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UCStateComponent::execIsActionMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActionMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCStateComponent::execIsEquipMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCStateComponent::execIsBackstepMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBackstepMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCStateComponent::execIsRollMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRollMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCStateComponent::execIsIdleMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsIdleMode();
		P_NATIVE_END;
	}
	void UCStateComponent::StaticRegisterNativesUCStateComponent()
	{
		UClass* Class = UCStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActionMode", &UCStateComponent::execIsActionMode },
			{ "IsBackstepMode", &UCStateComponent::execIsBackstepMode },
			{ "IsEquipMode", &UCStateComponent::execIsEquipMode },
			{ "IsIdleMode", &UCStateComponent::execIsIdleMode },
			{ "IsRollMode", &UCStateComponent::execIsRollMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics
	{
		struct CStateComponent_eventIsActionMode_Parms
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
	void Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CStateComponent_eventIsActionMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventIsActionMode_Parms), &Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "IsActionMode", nullptr, nullptr, sizeof(CStateComponent_eventIsActionMode_Parms), Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_IsActionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_IsActionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics
	{
		struct CStateComponent_eventIsBackstepMode_Parms
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
	void Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CStateComponent_eventIsBackstepMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventIsBackstepMode_Parms), &Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "IsBackstepMode", nullptr, nullptr, sizeof(CStateComponent_eventIsBackstepMode_Parms), Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_IsBackstepMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_IsBackstepMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics
	{
		struct CStateComponent_eventIsEquipMode_Parms
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
	void Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CStateComponent_eventIsEquipMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventIsEquipMode_Parms), &Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "IsEquipMode", nullptr, nullptr, sizeof(CStateComponent_eventIsEquipMode_Parms), Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_IsEquipMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_IsEquipMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics
	{
		struct CStateComponent_eventIsIdleMode_Parms
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
	void Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CStateComponent_eventIsIdleMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventIsIdleMode_Parms), &Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "IsIdleMode", nullptr, nullptr, sizeof(CStateComponent_eventIsIdleMode_Parms), Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_IsIdleMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_IsIdleMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics
	{
		struct CStateComponent_eventIsRollMode_Parms
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
	void Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CStateComponent_eventIsRollMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CStateComponent_eventIsRollMode_Parms), &Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCStateComponent, nullptr, "IsRollMode", nullptr, nullptr, sizeof(CStateComponent_eventIsRollMode_Parms), Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCStateComponent_IsRollMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCStateComponent_IsRollMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCStateComponent_NoRegister()
	{
		return UCStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateTypeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCStateComponent_IsActionMode, "IsActionMode" }, // 59252800
		{ &Z_Construct_UFunction_UCStateComponent_IsBackstepMode, "IsBackstepMode" }, // 1794936434
		{ &Z_Construct_UFunction_UCStateComponent_IsEquipMode, "IsEquipMode" }, // 3398613677
		{ &Z_Construct_UFunction_UCStateComponent_IsIdleMode, "IsIdleMode" }, // 194709872
		{ &Z_Construct_UFunction_UCStateComponent_IsRollMode, "IsRollMode" }, // 3443837502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameProject" },
		{ "Comment", "// CLASS ?\xc3\xb7??\xcc\xbe??? ???\xc2\xb8? ????\n" },
		{ "IncludePath", "Components/CStateComponent.h" },
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
		{ "ToolTip", "CLASS ?\xc3\xb7??\xcc\xbe??? ???\xc2\xb8? ????" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Components/CStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged = { "OnStateTypeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCStateComponent, OnStateTypeChanged), Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStateComponent_Statics::NewProp_OnStateTypeChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCStateComponent_Statics::ClassParams = {
		&UCStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCStateComponent, 2187738367);
	template<> ACTIONGAME_API UClass* StaticClass<UCStateComponent>()
	{
		return UCStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCStateComponent(Z_Construct_UClass_UCStateComponent, &UCStateComponent::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
