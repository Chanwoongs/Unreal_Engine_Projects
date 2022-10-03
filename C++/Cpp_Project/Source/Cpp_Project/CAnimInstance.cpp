#include "CAnimInstance.h"
#include "Global.h"
#include "IRifle.h"
#include "CRifle.h"
#include "GameFramework/Character.h"

void UCAnimInstance::NativeBeginPlay()
{
	// �������� ���� �׻� �θ���� call
	Super::NativeBeginPlay();

	// Owner ��������
	OwnerCharacter = Cast<ACharacter>(TryGetPawnOwner());
}

void UCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	CheckNull(OwnerCharacter);

	// �ӵ� �Ҵ�
	Speed = OwnerCharacter->GetVelocity().Size2D();

	// ���� �Ҵ�
	Direction = CalculateDirection(OwnerCharacter->GetVelocity(), OwnerCharacter->GetControlRotation());

	// ���Ʒ� ���� �Ҵ�
	Pitch = OwnerCharacter->GetBaseAimRotation().Pitch;
	

	// �������̽��� ���� ����� ���� Ŭ���� ���� üũ
	IIRifle* rifle = Cast<IIRifle>(OwnerCharacter);
	if (!!rifle)
	{
		bEquipped = rifle->GetRifle()->GetEquipped();
		bAiming = rifle->GetRifle()->GetAiming();
	}
}
