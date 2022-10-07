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
	// ���� ���
	UFUNCTION(BlueprintNativeEvent)
		void Equip();
	void Equip_Implementation(); // C++ �� �����ϰ� BP���� ������ ����

	// ���� ����
	UFUNCTION(BlueprintNativeEvent)
		void Begin_Equip();
	void Begin_Equip_Implementation(); // C++ �� �����ϰ� BP���� ������ ����

	// ���� �Ϸ�
	UFUNCTION(BlueprintNativeEvent)
		void End_Equip();
	void End_Equip_Implementation(); // C++ �� �����ϰ� BP���� ������ ����

	// ���� ���
	UFUNCTION(BlueprintNativeEvent)
		void Unequip();
	void Unequip_Implementation(); // C++ �� �����ϰ� BP���� ������ ����


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
