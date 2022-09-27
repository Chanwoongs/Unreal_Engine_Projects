#include "CAnimInstance.h"
#include "Global.h"
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
}
