#include "CEquipment.h"
#include "Global.h"
#include "Characters/ICharacter.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
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

	if (Data.AnimMontage != NULL)
	{
		OwnerCharacter->PlayAnimMontage(Data.AnimMontage, Data.PlayRatio, Data.StartSection);
	}
	else
	{
		End_Equip();
	}

	if (Data.bPawnControl == true)
	{
		// Sword 사용시 정면을 볼 수 있게
		OwnerCharacter->bUseControllerRotationYaw = true;
		OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
	}

	IICharacter* character = Cast<IICharacter>(OwnerCharacter);
	CheckNull(character);

	character->ChangeColor(Color);
}

void ACEquipment::Begin_Equip_Implementation()
{
	if (OnEquipmentDelegate.IsBound())
	{
		OnEquipmentDelegate.Broadcast();
	}
}

void ACEquipment::End_Equip_Implementation()
{
	// 장비가 완료 되었다.
	bEquipped = true;

	State->SetIdleMode();
}

void ACEquipment::Unequip_Implementation()
{
	// 장비가 해제 되었다.
	bEquipped = false;

	if (OnUnequipmentDelegate.IsBound())
	{
		OnUnequipmentDelegate.Broadcast();
	}

	OwnerCharacter->bUseControllerRotationYaw = false;
	OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
}
