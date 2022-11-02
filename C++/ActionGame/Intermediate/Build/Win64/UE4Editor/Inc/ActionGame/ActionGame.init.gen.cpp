// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionGame_init() {}
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_AttachmentBeginOverlap__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_AttachmentEndOverlap__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_AttachmentCollision__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_EquipmentDelegate__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_UnequipmentDelegate__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_ThrowBeginOverlap__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature();
	ACTIONGAME_API UFunction* Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ActionGame()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_AttachmentBeginOverlap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_AttachmentEndOverlap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_AttachmentCollision__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_EquipmentDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_UnequipmentDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_ThrowBeginOverlap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_ActionTypeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_StateTypeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_BehaviorTypeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ActionGame_UserWidget_ActionItem_Clicked__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ActionGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEEDE997F,
				0x83B8D5C1,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
