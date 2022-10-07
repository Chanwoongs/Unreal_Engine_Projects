#include "CEquipment.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

ACEquipment::ACEquipment()
{

}

void ACEquipment::BeginPlay()
{
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	State = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);
	Status = CHelpers::GetComponent<UCStatusComponent>(OwnerCharacter);

	// Super::BeginPlay() �Լ��� BP�� �ִ� BeginPlay()�� ȣ���ϴ� �Լ��� �ֱ� ������ �ʿ��� �������� ���� ������ �� �θ� �Լ��� ȣ��
	Super::BeginPlay();
	

}

void ACEquipment::Equip_Implementation()
{
	State->SetEquipMode();
}
