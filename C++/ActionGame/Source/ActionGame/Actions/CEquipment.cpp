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

	// Super::BeginPlay() 함수에 BP에 있는 BeginPlay()를 호출하는 함수도 있기 때문에 필요한 변수들을 먼저 세팅한 후 부모 함수를 호출
	Super::BeginPlay();
	

}

void ACEquipment::Equip_Implementation()
{
	State->SetEquipMode();
}
