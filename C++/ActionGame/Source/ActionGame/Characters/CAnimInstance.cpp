#include "CAnimInstance.h"
#include "Global.h"
#include "GameFramework/Character.h"

void UCAnimInstance::NativeBeginPlay()
{
	// Overriding 하면 항상 부모 먼저 Call
	Super::NativeBeginPlay();

	ACharacter* character = Cast<ACharacter>(TryGetPawnOwner());
	CheckNull(character); // TryGetPawnOwner가 NULL 이라면 게임 실행 모드가 아니다.

	// 이벤트 연결은 플레이 될 때 한번만 하면 된다.
	UCActionComponent* action = CHelpers::GetComponent<UCActionComponent>(character);
	CheckNull(action);

	action->OnActionTypeChanged.AddDynamic(this, &UCAnimInstance::OnActionTypeChanged);
}

void UCAnimInstance::NativeUpdateAnimation(float DeltaSeconds) // 실시간으로 가져오는 값들
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ACharacter* character = Cast<ACharacter>(TryGetPawnOwner());
	CheckNull(character); // TryGetPawnOwner가 NULL 이라면 게임 실행 모드가 아니다.

	Speed = character->GetVelocity().Size2D();
	Direction = CalculateDirection(character->GetVelocity(), character->GetControlRotation());
}

void UCAnimInstance::OnActionTypeChanged(EActionType InPreviousType, EActionType InNewType)
{
	ActionType = InNewType;
}
