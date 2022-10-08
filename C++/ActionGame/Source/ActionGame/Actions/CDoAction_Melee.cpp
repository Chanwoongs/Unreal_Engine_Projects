#include "CDoAction_Melee.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

void ACDoAction_Melee::DoAction()
{
	Super::DoAction();

	CheckFalse(Datas.Num() > 0);

	// 콤보 허용 구간 체크
	if (bEnable == true)
	{
		bExist = true;
		bEnable = false;

		return;
	}

	CheckFalse(State->IsIdleMode());

	State->SetActionMode();

	const FDoActionData& data = Datas[0];
	OwnerCharacter->PlayAnimMontage(data.AnimMontage, data.PlayRatio, data.StartSection);

	data.bCanMove ? Status->SetMove() : Status->SetStop();
}

void ACDoAction_Melee::Begin_Action()
{
	Super::Begin_Action();

	CheckFalse(bExist);
	bExist = false;

	// StopAnimMontage : 현재 플레이 중인 모든 몽타주 중지, 이후에 Fist의 마지막 동작을 끊어서 사용하기 위하여
	OwnerCharacter->StopAnimMontage(); 

	Index++;

	const FDoActionData& data = Datas[Index];
	OwnerCharacter->PlayAnimMontage(data.AnimMontage, data.PlayRatio, data.StartSection);

	data.bCanMove ? Status->SetMove() : Status->SetStop();
}

void ACDoAction_Melee::End_Action()
{
	Super::End_Action();

	const FDoActionData& data = Datas[Index];
	OwnerCharacter->StopAnimMontage(data.AnimMontage); // 현재 동작만 중단

	State->SetIdleMode();
	Status->SetMove();

	Index = 0;
}

void ACDoAction_Melee::OnAttachmentBeginOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter)
{
	Super::OnAttachmentBeginOverlap(InAttacker, InAttackCauser, InOtherCharacter);
	CheckNull(InOtherCharacter);

	// 피격 중복 방지 처리
	for (const ACharacter* other : HittedCharacters)
	{
		if (InOtherCharacter == other)
		{
			return;
		}
	}
	HittedCharacters.Add(InOtherCharacter);

	// 타격
	FDamageEvent e;
	InOtherCharacter->TakeDamage(Datas[Index].Power, e, OwnerCharacter->GetController(), this);
}

void ACDoAction_Melee::OnAttachmentEndOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter)
{
	Super::OnAttachmentEndOverlap(InAttacker, InAttackCauser, InOtherCharacter);

}

void ACDoAction_Melee::OnAttachmentCollision()
{

}

void ACDoAction_Melee::OffAttachmentCollision()
{
	HittedCharacters.Empty();
}
