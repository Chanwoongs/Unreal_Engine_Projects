#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actions/CActionData.h"
#include "CEquipment.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEquipmentDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUnequipmentDelegate);

UCLASS()
class ACTIONGAME_API ACEquipment : public AActor
{
	GENERATED_BODY()

public:
	FORCEINLINE void SetData(FEquipmentData InData) { Data = InData; }
	FORCEINLINE void SetColor(FLinearColor InColor) { Color = InColor; }
	FORCEINLINE const bool* GetEquipped() { return &bEquipped; }

public:
	ACEquipment();

public:
	// 장착 명령
	UFUNCTION(BlueprintNativeEvent)
		void Equip();
	void Equip_Implementation(); // C++ 로 정의하고 BP에서 재정의 가능

	// 장착 개시
	UFUNCTION(BlueprintNativeEvent)
		void Begin_Equip();
	void Begin_Equip_Implementation(); // C++ 로 정의하고 BP에서 재정의 가능

	// 장착 완료
	UFUNCTION(BlueprintNativeEvent)
		void End_Equip();
	void End_Equip_Implementation(); // C++ 로 정의하고 BP에서 재정의 가능

	// 해제 명령
	UFUNCTION(BlueprintNativeEvent)
		void Unequip();
	void Unequip_Implementation(); // C++ 로 정의하고 BP에서 재정의 가능


protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(BlueprintAssignable)
		FEquipmentDelegate OnEquipmentDelegate;

	UPROPERTY(BlueprintAssignable)
		FUnequipmentDelegate OnUnequipmentDelegate;

protected:
	UPROPERTY(BlueprintReadOnly)
		class ACharacter* OwnerCharacter;

	UPROPERTY(BlueprintReadOnly)
		class UCStateComponent* State;

	UPROPERTY(BlueprintReadOnly)
		class UCStatusComponent* Status;

private:
	bool bEquipped;
	FEquipmentData Data;
	FLinearColor Color;
};
