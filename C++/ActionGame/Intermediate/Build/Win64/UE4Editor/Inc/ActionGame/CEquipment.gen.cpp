// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Actions/CEquipment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEquipment() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEquipment_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ACEquipment();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACEquipment::execUnequip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unequip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACEquipment::execEnd_Equip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->End_Equip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACEquipment::execBegin_Equip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Begin_Equip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACEquipment::execEquip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Equip_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACEquipment_Begin_Equip = FName(TEXT("Begin_Equip"));
	void ACEquipment::Begin_Equip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACEquipment_Begin_Equip),NULL);
	}
	static FName NAME_ACEquipment_End_Equip = FName(TEXT("End_Equip"));
	void ACEquipment::End_Equip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACEquipment_End_Equip),NULL);
	}
	static FName NAME_ACEquipment_Equip = FName(TEXT("Equip"));
	void ACEquipment::Equip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACEquipment_Equip),NULL);
	}
	static FName NAME_ACEquipment_Unequip = FName(TEXT("Unequip"));
	void ACEquipment::Unequip()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACEquipment_Unequip),NULL);
	}
	void ACEquipment::StaticRegisterNativesACEquipment()
	{
		UClass* Class = ACEquipment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Begin_Equip", &ACEquipment::execBegin_Equip },
			{ "End_Equip", &ACEquipment::execEnd_Equip },
			{ "Equip", &ACEquipment::execEquip },
			{ "Unequip", &ACEquipment::execUnequip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACEquipment_Begin_Equip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEquipment_Begin_Equip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ????\n" },
		{ "ModuleRelativePath", "Actions/CEquipment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEquipment_Begin_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEquipment, nullptr, "Begin_Equip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACEquipment_Begin_Equip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEquipment_Begin_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACEquipment_Begin_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACEquipment_Begin_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACEquipment_End_Equip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEquipment_End_Equip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ?\xcf\xb7?\n" },
		{ "ModuleRelativePath", "Actions/CEquipment.h" },
		{ "ToolTip", "???? ?\xcf\xb7?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEquipment_End_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEquipment, nullptr, "End_Equip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACEquipment_End_Equip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEquipment_End_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACEquipment_End_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACEquipment_End_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACEquipment_Equip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEquipment_Equip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ????\n" },
		{ "ModuleRelativePath", "Actions/CEquipment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEquipment_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEquipment, nullptr, "Equip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACEquipment_Equip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEquipment_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACEquipment_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACEquipment_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACEquipment_Unequip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACEquipment_Unequip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ???? ????\n" },
		{ "ModuleRelativePath", "Actions/CEquipment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACEquipment_Unequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACEquipment, nullptr, "Unequip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACEquipment_Unequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACEquipment_Unequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACEquipment_Unequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACEquipment_Unequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACEquipment_NoRegister()
	{
		return ACEquipment::StaticClass();
	}
	struct Z_Construct_UClass_ACEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACEquipment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACEquipment_Begin_Equip, "Begin_Equip" }, // 1469941872
		{ &Z_Construct_UFunction_ACEquipment_End_Equip, "End_Equip" }, // 814690581
		{ &Z_Construct_UFunction_ACEquipment_Equip, "Equip" }, // 4110643711
		{ &Z_Construct_UFunction_ACEquipment_Unequip, "Unequip" }, // 937139533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEquipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CEquipment.h" },
		{ "ModuleRelativePath", "Actions/CEquipment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEquipment_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "CEquipment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actions/CEquipment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEquipment_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEquipment, Status), Z_Construct_UClass_UCStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEquipment_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEquipment_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEquipment_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CEquipment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actions/CEquipment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEquipment_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEquipment, State), Z_Construct_UClass_UCStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEquipment_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEquipment_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEquipment_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "Category", "CEquipment" },
		{ "ModuleRelativePath", "Actions/CEquipment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEquipment_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACEquipment, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACEquipment_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACEquipment_Statics::NewProp_OwnerCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEquipment_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEquipment_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEquipment_Statics::NewProp_OwnerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEquipment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACEquipment_Statics::ClassParams = {
		&ACEquipment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACEquipment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACEquipment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACEquipment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACEquipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACEquipment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACEquipment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACEquipment, 3436789876);
	template<> ACTIONGAME_API UClass* StaticClass<ACEquipment>()
	{
		return ACEquipment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACEquipment(Z_Construct_UClass_ACEquipment, &ACEquipment::StaticClass, TEXT("/Script/ActionGame"), TEXT("ACEquipment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEquipment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
