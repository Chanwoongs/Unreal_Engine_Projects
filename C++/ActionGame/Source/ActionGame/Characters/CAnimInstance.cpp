#include "CAnimInstance.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CActionComponent.h"
#include "Components/CStateComponent.h"
#include "Actions/CAction.h"
#include "Actions/IRifle.h"
#include "Actions/CDoAction_Rifle.h"
#include "Actions/CAim.h"
#include "Actions/CEquipment.h"
#include "Characters/CPlayer_Swat.h"

void UCAnimInstance::NativeBeginPlay()
{
	// Overriding �ϸ� �׻� �θ� ���� Call
	Super::NativeBeginPlay();

	ACharacter* character = Cast<ACharacter>(TryGetPawnOwner());
	CheckNull(character); // TryGetPawnOwner�� NULL �̶�� ���� ���� ��尡 �ƴϴ�.

	// �̺�Ʈ ������ �÷��� �� �� �ѹ��� �ϸ� �ȴ�.
	UCActionComponent* action = CHelpers::GetComponent<UCActionComponent>(character);
	CheckNull(action);

	action->OnActionTypeChanged.AddDynamic(this, &UCAnimInstance::OnActionTypeChanged);
}

void UCAnimInstance::NativeUpdateAnimation(float DeltaSeconds) // �ǽð����� �������� ����
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ACharacter* character = Cast<ACharacter>(TryGetPawnOwner());
	CheckNull(character); // TryGetPawnOwner�� NULL �̶�� ���� ���� ��尡 �ƴϴ�.

	Speed = character->GetVelocity().Size2D();
	Direction = CalculateDirection(character->GetVelocity(), character->GetControlRotation());

	// ���Ʒ� ���� �Ҵ�
	Pitch = character->GetBaseAimRotation().Pitch;

	// �������̽��� ���� ����� ���� Ŭ���� ���� üũ
	IIRifle* rifle = Cast<IIRifle>(character);
	if (!!rifle)
	{
		UCActionComponent* action = CHelpers::GetComponent<UCActionComponent>(character);
		if (action->IsUnarmedMode())
		{
			bEquipped = false;
		}
		else if (action->IsRifleMode())
		{
			bEquipped = true;
		}
		ACDoAction_Rifle* doAction_Rifle = rifle->GetRifle();
		if (doAction_Rifle != nullptr)
		{
			bAim = doAction_Rifle->GetAiming();
		}
	}

	UCFeetComponent* feet = CHelpers::GetComponent<UCFeetComponent>(character);
	if (!!feet)
		FeetData = feet->GetData();
}

void UCAnimInstance::OnActionTypeChanged(EActionType InPreviousType, EActionType InNewType)
{
	ActionType = InNewType;
}
