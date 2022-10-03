#include "CAnimInstance.h"
#include "Global.h"
#include "IRifle.h"
#include "CRifle.h"
#include "GameFramework/Character.h"

void UCAnimInstance::NativeBeginPlay()
{
	// 재정의한 것은 항상 부모부터 call
	Super::NativeBeginPlay();

	// Owner 가져오기
	OwnerCharacter = Cast<ACharacter>(TryGetPawnOwner());
}

void UCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	CheckNull(OwnerCharacter);

	// 속도 할당
	Speed = OwnerCharacter->GetVelocity().Size2D();

	// 방향 할당
	Direction = CalculateDirection(OwnerCharacter->GetVelocity(), OwnerCharacter->GetControlRotation());

	// 위아래 조준 할당
	Pitch = OwnerCharacter->GetBaseAimRotation().Pitch;
	

	// 인터페이스로 부터 상속을 받은 클래스 인지 체크
	IIRifle* rifle = Cast<IIRifle>(OwnerCharacter);
	if (!!rifle)
	{
		bEquipped = rifle->GetRifle()->GetEquipped();
		bAiming = rifle->GetRifle()->GetAiming();
	}
}
