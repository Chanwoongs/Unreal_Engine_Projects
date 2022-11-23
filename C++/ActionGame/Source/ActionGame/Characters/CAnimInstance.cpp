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

	// 위아래 조준 할당
	Pitch = character->GetBaseAimRotation().Pitch;

	// 인터페이스로 부터 상속을 받은 클래스 인지 체크
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
