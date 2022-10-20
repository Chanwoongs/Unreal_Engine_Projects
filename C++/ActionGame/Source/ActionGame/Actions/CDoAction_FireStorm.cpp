#include "CDoAction_FireStorm.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Actions/CAttachment.h"
#include "Components/BoxComponent.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"
#include "Particles/ParticleSystemComponent.h"

void ACDoAction_FireStorm::BeginPlay()
{
	Super::BeginPlay();

	for (AActor* actor : OwnerCharacter->Children)
	{
		if (actor->IsA<ACAttachment>() && actor->GetActorLabel().Contains("FireStorm"))
		{
			Box = CHelpers::GetComponent<UBoxComponent>(actor);

			break;
		}
	}
}

void ACDoAction_FireStorm::DoAction()
{
	CheckFalse(*bEquipped);

	CheckFalse(State->IsIdleMode());
	State->SetActionMode();


	OwnerCharacter->PlayAnimMontage(Datas[0].AnimMontage, Datas[0].PlayRatio, Datas[0].StartSection);
	Datas[0].bCanMove ? Status->SetMove() : Status->SetStop();

}

void ACDoAction_FireStorm::Begin_Action()
{
	Angle = UKismetMathLibrary::RandomFloatInRange(0.0f, 360.0f);

	Attached = UGameplayStatics::SpawnEmitterAttached(Datas[0].Effect, Box, "");
	Attached->SetRelativeLocation(Datas[0].EffectTransform.GetLocation());
	Attached->SetRelativeScale3D(Datas[0].EffectTransform.GetScale3D());

	ACAttachment* attachment = Cast<ACAttachment>(Box->GetOwner()); // Box�� owner�� attachment
	attachment->OnCollision();

	UKismetSystemLibrary::K2_SetTimer(this, "Hitted", HitTime, true);
}

void ACDoAction_FireStorm::End_Action()
{
	Status->SetMove();

	FTimerDynamicDelegate timerDelegate;
	timerDelegate.BindUFunction(this, "Finish");

	UKismetSystemLibrary::K2_SetTimerDelegate(timerDelegate, Time, false);
}

void ACDoAction_FireStorm::Finish()
{
	// Action ��带 �����ϴٰ� Particle�� ������ Idle����
	State->SetIdleMode();
	Attached->DestroyComponent();

	// �浹ü ����
	ACAttachment* attachment = Cast<ACAttachment>(Box->GetOwner()); // Box�� owner�� attachment
	attachment->OffCollision();

	// Damage ó�� : �浹�� �����Ǵ� �̺�Ʈ�� �����Ƿ�, �浹 ���۽� �迭�� �ְ� �������� �ְ�
	// �浹�� ������ �迭���� �����Ѵ�.
	UKismetSystemLibrary::K2_ClearTimer(this, "Hitted");
}

void ACDoAction_FireStorm::Hitted()
{
	FDamageEvent e;
	for (ACharacter* character : HittedCharacter)
	{
		character->TakeDamage(Datas[0].Power, e, OwnerCharacter->GetController(), this);
	}
}

void ACDoAction_FireStorm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckFalse(*bEquipped);
	CheckFalse(State->IsActionMode());

	FVector location = OwnerCharacter->GetActorLocation();

	Angle += Speed * DeltaTime;
	if (FMath::IsNearlyEqual(Angle, 360))
		Angle = 0.0f;

	FVector axis = FVector(Distance, 0, 0); // �������κ��� ����Ʈ����
	FVector value = axis.RotateAngleAxis(Angle, FVector(0, 0, 1)); // ������ �������� ������ ���� ��ŭ ȸ���� ��ġ ����
	
	location += value;

	Box->SetWorldLocation(location);
}

void ACDoAction_FireStorm::OnAttachmentBeginOverlap(ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOtherCharacter)
{
	HittedCharacter.AddUnique(InOtherCharacter);
}

void ACDoAction_FireStorm::OnAttachmentEndOverlap(ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOtherCharacter)
{
	HittedCharacter.Remove(InOtherCharacter);
}
