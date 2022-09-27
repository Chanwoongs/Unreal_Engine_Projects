#include "CAnimInstance.h"
#include "Global.h"
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
}
