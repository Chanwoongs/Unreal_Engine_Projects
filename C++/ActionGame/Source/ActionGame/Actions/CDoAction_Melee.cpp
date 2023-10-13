#include "CDoAction_Melee.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

void ACDoAction_Melee::DoAction()
{
	Super::DoAction();

	CheckFalse(Datas.Num() > 0);

	// �޺� ��� ���� üũ
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

	// StopAnimMontage : ���� �÷��� ���� ��� ��Ÿ�� ����, ���Ŀ� Fist�� ������ ������ ��� ����ϱ� ���Ͽ�
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
	OwnerCharacter->StopAnimMontage(data.AnimMontage); // ���� ���۸� �ߴ�

	State->SetIdleMode();
	Status->SetMove();

	Index = 0;
}

void ACDoAction_Melee::OnAttachmentBeginOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter)
{
	Super::OnAttachmentBeginOverlap(InAttacker, InAttackCauser, InOtherCharacter);
	CheckNull(InOtherCharacter);

	// �ǰ� �ߺ� ���� ó��
	for (const ACharacter* other : HittedCharacters)
	{
		if (InOtherCharacter == other)
		{
			return;
		}
	}
	HittedCharacters.Add(InOtherCharacter);

	// ȿ�� �÷���
	UParticleSystem* hitEffect = Datas[Index].Effect;
	if (!!hitEffect)
	{
		FTransform transform = Datas[Index].EffectTransform;
		transform.AddToTranslation(InOtherCharacter->GetActorLocation());
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitEffect, transform);
	}

	// HitStop ����
	// SetGlobalTimeDilation : ������ ������� ������ �ӵ��� ����
	// UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.1f);
	float hitStop = Datas[Index].HitStop;
	if (FMath::IsNearlyZero(hitStop) == false) // �ӵ� 0���Ϸ� �������� ��찡 ���� �����Ƿ� 0�� ������� �Ǵ�
	{
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1e-3f);
		UKismetSystemLibrary::K2_SetTimer(this, "RestoreDilation", hitStop * 1e-3f, false); // ���ӽð��� �������� Delay�� �������� ������ hitStop�� ������
	}

	// Camera Shake Play
	//TSubclassOf<UCameraShake> shake = Datas[Index].ShakeClass;
	//if (shake != NULL)
	//{
	//	UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerCameraManager->PlayWorldCameraShake(shake);
	//}

	// Ÿ��
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
