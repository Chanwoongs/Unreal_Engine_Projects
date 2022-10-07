#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CEquipment.generated.h"

UCLASS()
class ACTIONGAME_API ACEquipment : public AActor
{
	GENERATED_BODY()
	
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

protected:
	UPROPERTY(BlueprintReadOnly)
		class ACharacter* OwnerCharacter;

	UPROPERTY(BlueprintReadOnly)
		class UCStateComponent* State;

	UPROPERTY(BlueprintReadOnly)
		class UCStatusComponent* Status;
};
