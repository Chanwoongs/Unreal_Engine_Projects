#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CActionComponent.generated.h"

UENUM(BlueprintType)
enum class EActionType : uint8
{
	Unarmed, Fist, OneHand, TwoHand, Warp, FireStorm, IceBall, Rifle, Mutant, Max
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionTypeChanged, EActionType, InPreviousType, EActionType, InNewType);


UCLASS( ClassGroup=(GameProject), meta=(BlueprintSpawnableComponent) )
class ACTIONGAME_API UCActionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	// ���� DataAsset�� �ҷ��� �� �纻 DataAsset�� 
	// ����� ���� ���� �޸� ������ �Ͼ�� �ʵ��� ó��
	UPROPERTY(EditDefaultsOnly, Category = "Weapons")
		class UCActionData* DataAssets[(int32)EActionType::Max];

public:
	UFUNCTION(BlueprintPure)
		FORCEINLINE class UCAction* GetCurrent() { return Datas[(int32)Type]; }

public:
	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsUnarmedMode() { return Type == EActionType::Unarmed; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsFistMode() { return Type == EActionType::Fist; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsOneHandMode() { return Type == EActionType::OneHand; }
	
	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsTwoHandMode() { return Type == EActionType::TwoHand; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsWarpMode() { return Type == EActionType::Warp; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsFireStormMode() { return Type == EActionType::FireStorm; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsIceBallMode() { return Type == EActionType::IceBall; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsRifleMode() { return Type == EActionType::Rifle; }

	UFUNCTION(BlueprintPure)
		FORCEINLINE bool IsMutantMode() { return Type == EActionType::Mutant; }

public:	
	UCActionComponent();

	UFUNCTION(BlueprintCallable)
		void SetUnarmedMode();

	UFUNCTION(BlueprintCallable)
		void SetTwoHandMode();

	UFUNCTION(BlueprintCallable)
		void SetIceBallMode();

	UFUNCTION(BlueprintCallable)
		void SetWarpMode();

	UFUNCTION(BlueprintCallable)
		void SetMutantMode();

	UFUNCTION(BlueprintCallable)
		void SetRifleMode();

	void SetFistMode();
	void SetOneHandMode();
	void SetFireStormMode();

	void OffAllCollision();
	void DestroyAllActions();

public:
	FORCEINLINE bool *IsAiming() { return &bAiming; }

	void DoAction();

	void DoAim();
	void UndoAim();

private:
	void SetAimMode(bool InAim);

protected:
	virtual void BeginPlay() override;

private:
	void SetMode(EActionType InType);
	void ChangeType(EActionType InNewType);

public:
	UPROPERTY(BlueprintAssignable)
		FActionTypeChanged OnActionTypeChanged;

private:
	EActionType Type;
	class UCAction* Datas[(int32)EActionType::Max];
	bool bAiming;
};
