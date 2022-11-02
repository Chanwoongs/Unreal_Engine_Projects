// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Components/CStatusComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCStatusComponent() {}
// Cross Module References
	ACTIONGAME_API UEnum* Z_Construct_UEnum_ActionGame_ECharacterSpeed();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStatusComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCStatusComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* ECharacterSpeed_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ActionGame_ECharacterSpeed, Z_Construct_UPackage__Script_ActionGame(), TEXT("ECharacterSpeed"));
		}
		return Singleton;
	}
	template<> ACTIONGAME_API UEnum* StaticEnum<ECharacterSpeed>()
	{
		return ECharacterSpeed_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterSpeed(ECharacterSpeed_StaticEnum, TEXT("/Script/ActionGame"), TEXT("ECharacterSpeed"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ActionGame_ECharacterSpeed_Hash() { return 2406094416U; }
	UEnum* Z_Construct_UEnum_ActionGame_ECharacterSpeed()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ActionGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterSpeed"), 0, Get_Z_Construct_UEnum_ActionGame_ECharacterSpeed_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterSpeed::Walk", (int64)ECharacterSpeed::Walk },
				{ "ECharacterSpeed::Run", (int64)ECharacterSpeed::Run },
				{ "ECharacterSpeed::Sprint", (int64)ECharacterSpeed::Sprint },
				{ "ECharacterSpeed::Max", (int64)ECharacterSpeed::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Max.Name", "ECharacterSpeed::Max" },
				{ "ModuleRelativePath", "Components/CStatusComponent.h" },
				{ "Run.Name", "ECharacterSpeed::Run" },
				{ "Sprint.Name", "ECharacterSpeed::Sprint" },
				{ "Walk.Name", "ECharacterSpeed::Walk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ActionGame,
				nullptr,
				"ECharacterSpeed",
				"ECharacterSpeed",
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
	void UCStatusComponent::StaticRegisterNativesUCStatusComponent()
	{
	}
	UClass* Z_Construct_UClass_UCStatusComponent_NoRegister()
	{
		return UCStatusComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCStatusComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCStatusComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameProject" },
		{ "Comment", "// CLASS ?\xc3\xb7??\xcc\xbe??? ???\xc8\xb8? ????\n" },
		{ "IncludePath", "Components/CStatusComponent.h" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
		{ "ToolTip", "CLASS ?\xc3\xb7??\xcc\xbe??? ???\xc8\xb8? ????" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "ArraySizeEnum", "/Script/ActionGame.ECharacterSpeed" },
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Speed, UCStatusComponent), STRUCT_OFFSET(UCStatusComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/CStatusComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCStatusComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCStatusComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStatusComponent_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCStatusComponent_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCStatusComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCStatusComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCStatusComponent_Statics::ClassParams = {
		&UCStatusComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCStatusComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCStatusComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCStatusComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCStatusComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCStatusComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCStatusComponent, 3453786770);
	template<> ACTIONGAME_API UClass* StaticClass<UCStatusComponent>()
	{
		return UCStatusComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCStatusComponent(Z_Construct_UClass_UCStatusComponent, &UCStatusComponent::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCStatusComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCStatusComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
