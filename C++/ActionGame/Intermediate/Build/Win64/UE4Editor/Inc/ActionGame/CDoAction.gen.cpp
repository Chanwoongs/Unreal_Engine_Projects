// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actions/CDoAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACDoAction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACDoAction::execOffAttachmentCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OffAttachmentCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACDoAction::execOnAttachmentCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACDoAction::execOnAttachmentEndOverlap)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InAttacker);
		P_GET_OBJECT(AActor,Z_Param_InAttackCauser);
		P_GET_OBJECT(ACharacter,Z_Param_InOtherCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentEndOverlap(Z_Param_InAttacker,Z_Param_InAttackCauser,Z_Param_InOtherCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACDoAction::execOnAttachmentBeginOverlap)
	{
		P_GET_OBJECT(ACharacter,Z_Param_InAttacker);
		P_GET_OBJECT(AActor,Z_Param_InAttackCauser);
		P_GET_OBJECT(ACharacter,Z_Param_InOtherCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachmentBeginOverlap(Z_Param_InAttacker,Z_Param_InAttackCauser,Z_Param_InOtherCharacter);
		P_NATIVE_END;
	}
	void ACDoAction::StaticRegisterNativesACDoAction()
	{
		UClass* Class = ACDoAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OffAttachmentCollision", &ACDoAction::execOffAttachmentCollision },
			{ "OnAttachmentBeginOverlap", &ACDoAction::execOnAttachmentBeginOverlap },
			{ "OnAttachmentCollision", &ACDoAction::execOnAttachmentCollision },
			{ "OnAttachmentEndOverlap", &ACDoAction::execOnAttachmentEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACDoAction_OffAttachmentCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACDoAction_OffAttachmentCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACDoAction_OffAttachmentCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACDoAction, nullptr, "OffAttachmentCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACDoAction_OffAttachmentCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_OffAttachmentCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACDoAction_OffAttachmentCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACDoAction_OffAttachmentCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics
	{
		struct CDoAction_eventOnAttachmentBeginOverlap_Parms
		{
			ACharacter* InAttacker;
			AActor* InAttackCauser;
			ACharacter* InOtherCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttackCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOtherCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttackCauser = { "InAttackCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InAttackCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InOtherCharacter = { "InOtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentBeginOverlap_Parms, InOtherCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InAttackCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::NewProp_InOtherCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACDoAction, nullptr, "OnAttachmentBeginOverlap", nullptr, nullptr, sizeof(CDoAction_eventOnAttachmentBeginOverlap_Parms), Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACDoAction_OnAttachmentCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACDoAction_OnAttachmentCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACDoAction_OnAttachmentCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACDoAction, nullptr, "OnAttachmentCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACDoAction_OnAttachmentCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_OnAttachmentCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACDoAction_OnAttachmentCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACDoAction_OnAttachmentCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics
	{
		struct CDoAction_eventOnAttachmentEndOverlap_Parms
		{
			ACharacter* InAttacker;
			AActor* InAttackCauser;
			ACharacter* InOtherCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAttackCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOtherCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentEndOverlap_Parms, InAttacker), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::NewProp_InAttackCauser = { "InAttackCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentEndOverlap_Parms, InAttackCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::NewProp_InOtherCharacter = { "InOtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CDoAction_eventOnAttachmentEndOverlap_Parms, InOtherCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::NewProp_InAttacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::NewProp_InAttackCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::NewProp_InOtherCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACDoAction, nullptr, "OnAttachmentEndOverlap", nullptr, nullptr, sizeof(CDoAction_eventOnAttachmentEndOverlap_Parms), Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACDoAction_NoRegister()
	{
		return ACDoAction::StaticClass();
	}
	struct Z_Construct_UClass_ACDoAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDoAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACDoAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACDoAction_OffAttachmentCollision, "OffAttachmentCollision" }, // 1891412431
		{ &Z_Construct_UFunction_ACDoAction_OnAttachmentBeginOverlap, "OnAttachmentBeginOverlap" }, // 1554436158
		{ &Z_Construct_UFunction_ACDoAction_OnAttachmentCollision, "OnAttachmentCollision" }, // 2301259516
		{ &Z_Construct_UFunction_ACDoAction_OnAttachmentEndOverlap, "OnAttachmentEndOverlap" }, // 1076911432
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CDoAction.h" },
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "CDoAction" },
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CDoAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACDoAction_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDoAction_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "CDoAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actions/CDoAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACDoAction_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACDoAction, Status), Z_Construct_UClass_UCStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACDoAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACDoAction_Statics::NewProp_Status,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDoAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDoAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDoAction_Statics::ClassParams = {
		&ACDoAction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACDoAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACDoAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDoAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDoAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDoAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDoAction, 2665960896);
	template<> ACTIONGAME_API UClass* StaticClass<ACDoAction>()
	{
		return ACDoAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDoAction(Z_Construct_UClass_ACDoAction, &ACDoAction::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACDoAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDoAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
