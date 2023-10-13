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

	// 효과 플레이
	UParticleSystem* hitEffect = Datas[Index].Effect;
	if (!!hitEffect)
	{
		FTransform transform = Datas[Index].EffectTransform;
		transform.AddToTranslation(InOtherCharacter->GetActorLocation());
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitEffect, transform);
	}

	// HitStop 경직
	// SetGlobalTimeDilation : 지정한 배속으로 게임의 속도를 조정
	// UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.1f);
	float hitStop = Datas[Index].HitStop;
	if (FMath::IsNearlyZero(hitStop) == false) // 속도 0이하로 떨어지는 경우가 거의 없으므로 0과 가까운지 판단
	{
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1e-3f);
		UKismetSystemLibrary::K2_SetTimer(this, "RestoreDilation", hitStop * 1e-3f, false); // 게임시간이 느려지면 Delay도 느려지기 때문에 hitStop을 곱해줌
	}

	// Camera Shake Play
	//TSubclassOf<UCameraShake> shake = Datas[Index].ShakeClass;
	//if (shake != NULL)
	//{
	//	UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerCameraManager->PlayWorldCameraShake(shake);
	//}

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

void ACDoAction_Melee::RestoreDilation()
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f);
}
