#include "CAnimInstance.h"
#include "Global.h"
#include "GameFramework/Character.h"

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
}

void UCAnimInstance::OnActionTypeChanged(EActionType InPreviousType, EActionType InNewType)
{
	ActionType = InNewType;
}
