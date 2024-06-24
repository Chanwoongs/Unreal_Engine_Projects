// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Components/CFeetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCFeetComponent() {}
// Cross Module References
	ACTIONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFeetData();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCFeetComponent_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_UCFeetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
// End Cross Module References
class UScriptStruct* FFeetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONGAME_API uint32 Get_Z_Construct_UScriptStruct_FFeetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeetData, Z_Construct_UPackage__Script_ActionGame(), TEXT("FeetData"), sizeof(FFeetData), Get_Z_Construct_UScriptStruct_FFeetData_Hash());
	}
	return Singleton;
}
template<> ACTIONGAME_API UScriptStruct* StaticStruct<FFeetData>()
{
	return FFeetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeetData(FFeetData::StaticStruct, TEXT("/Script/ActionGame"), TEXT("FeetData"), false, nullptr, nullptr);
static struct FScriptStruct_ActionGame_StaticRegisterNativesFFeetData
{
	FScriptStruct_ActionGame_StaticRegisterNativesFFeetData()
	{
		UScriptStruct::DeferCppStructOps<FFeetData>(FName(TEXT("FeetData")));
	}
} ScriptStruct_ActionGame_StaticRegisterNativesFFeetData;
	struct Z_Construct_UScriptStruct_FFeetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftDistance_MetaData[] = {
		{ "Category", "FeetData" },
		{ "Comment", "// Foot_L ???? ?\xce\xb8\xf0\xbf\xa1\xbc????? ?????\xc7\xbe??? \xc8\xb8???????? ???\xcc\xb0? X???? ?\xc8\xb4?.\n" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
		{ "ToolTip", "Foot_L ???? ?\xce\xb8\xf0\xbf\xa1\xbc????? ?????\xc7\xbe??? \xc8\xb8???????? ???\xcc\xb0? X???? ?\xc8\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftDistance = { "LeftDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeetData, LeftDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightDistance_MetaData[] = {
		{ "Category", "FeetData" },
		{ "Comment", "// ?\xde\xb9??? ?????? ???? ?? ?\xd9\xbe??? ?? ?????? ????, X?\xe0\xb8\xb8 ????\n" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
		{ "ToolTip", "?\xde\xb9??? ?????? ???? ?? ?\xd9\xbe??? ?? ?????? ????, X?\xe0\xb8\xb8 ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightDistance = { "RightDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeetData, RightDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_PelvisDistance_MetaData[] = {
		{ "Category", "FeetData" },
		{ "Comment", "// ???????? ?????? ???? ?? ?\xd9\xbe??? ?? ?????? ????, X?\xe0\xb8\xb8 ???? \n" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
		{ "ToolTip", "???????? ?????? ???? ?? ?\xd9\xbe??? ?? ?????? ????, X?\xe0\xb8\xb8 ????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_PelvisDistance = { "PelvisDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeetData, PelvisDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_PelvisDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_PelvisDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftRotation_MetaData[] = {
		{ "Category", "FeetData" },
		{ "Comment", "// ?\xe3\xb8\xae ????, Z?\xe0\xb8\xb8 ????\n// Root?? Pelvis?? ???? ???? ???? \xc8\xb8?? ?????? ?????\xd8\xbe???\n// Root?? ?????\xcc\xb1? ???? ???? ???\xcc\xb8? Pelvis?? ???? ?????\xcc\xb4?.\n// ???? ???? ?????? ?\xd7\xbb? ???? ?????\xcc\xb4?.\n" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
		{ "ToolTip", "?\xe3\xb8\xae ????, Z?\xe0\xb8\xb8 ????\nRoot?? Pelvis?? ???? ???? ???? \xc8\xb8?? ?????? ?????\xd8\xbe???\nRoot?? ?????\xcc\xb1? ???? ???? ???\xcc\xb8? Pelvis?? ???? ?????\xcc\xb4?.\n???? ???? ?????? ?\xd7\xbb? ???? ?????\xcc\xb4?." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftRotation = { "LeftRotation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeetData, LeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightRotation_MetaData[] = {
		{ "Category", "FeetData" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightRotation = { "RightRotation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeetData, RightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_PelvisDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_LeftRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeetData_Statics::NewProp_RightRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
		nullptr,
		&NewStructOps,
		"FeetData",
		sizeof(FFeetData),
		alignof(FFeetData),
		Z_Construct_UScriptStruct_FFeetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeetData"), sizeof(FFeetData), Get_Z_Construct_UScriptStruct_FFeetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeetData_Hash() { return 4037487793U; }
	void UCFeetComponent::StaticRegisterNativesUCFeetComponent()
	{
	}
	UClass* Z_Construct_UClass_UCFeetComponent_NoRegister()
	{
		return UCFeetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCFeetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCFeetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCFeetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameProject" },
		{ "IncludePath", "Components/CFeetComponent.h" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCFeetComponent_Statics::NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "InverseKinemetics" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCFeetComponent_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCFeetComponent, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_DrawDebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_DrawDebugType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCFeetComponent_Statics::NewProp_LeftSocket_MetaData[] = {
		{ "Category", "InverseKinemetics" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCFeetComponent_Statics::NewProp_LeftSocket = { "LeftSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCFeetComponent, LeftSocket), METADATA_PARAMS(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_LeftSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_LeftSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCFeetComponent_Statics::NewProp_RightSocket_MetaData[] = {
		{ "Category", "InverseKinemetics" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCFeetComponent_Statics::NewProp_RightSocket = { "RightSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCFeetComponent, RightSocket), METADATA_PARAMS(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_RightSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_RightSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCFeetComponent_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "InverseKinemetics" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCFeetComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCFeetComponent, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_TraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_TraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCFeetComponent_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "InverseKinemetics" },
		{ "Comment", "// ?????? ????\n" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCFeetComponent_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCFeetComponent, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCFeetComponent_Statics::NewProp_OffsetDistance_MetaData[] = {
		{ "Category", "InverseKinemetics" },
		{ "Comment", "// ?????? \n" },
		{ "ModuleRelativePath", "Components/CFeetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCFeetComponent_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCFeetComponent, OffsetDistance), METADATA_PARAMS(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_OffsetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCFeetComponent_Statics::NewProp_OffsetDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCFeetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCFeetComponent_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCFeetComponent_Statics::NewProp_LeftSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCFeetComponent_Statics::NewProp_RightSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCFeetComponent_Statics::NewProp_TraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCFeetComponent_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCFeetComponent_Statics::NewProp_OffsetDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCFeetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCFeetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCFeetComponent_Statics::ClassParams = {
		&UCFeetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCFeetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCFeetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCFeetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCFeetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCFeetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCFeetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCFeetComponent, 1577584134);
	template<> ACTIONGAME_API UClass* StaticClass<UCFeetComponent>()
	{
		return UCFeetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCFeetComponent(Z_Construct_UClass_UCFeetComponent, &UCFeetComponent::StaticClass, TEXT("/Script/ActionGame"), TEXT("UCFeetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCFeetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
