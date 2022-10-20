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

	ACAttachment* attachment = Cast<ACAttachment>(Box->GetOwner()); // Box의 owner는 attachment
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
	// Action 모드를 유지하다가 Particle이 끝나면 Idle모드로
	State->SetIdleMode();
	Attached->DestroyComponent();

	// 충돌체 끄기
	ACAttachment* attachment = Cast<ACAttachment>(Box->GetOwner()); // Box의 owner는 attachment
	attachment->OffCollision();

	// Damage 처리 : 충돌이 유지되는 이벤트가 없으므로, 충돌 시작시 배열에 넣고 데미지를 주고
	// 충돌이 끝나면 배열에서 제거한다.
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

	FVector axis = FVector(Distance, 0, 0); // 전방으로부터 떨어트리고
	FVector value = axis.RotateAngleAxis(Angle, FVector(0, 0, 1)); // 지정한 방향으로 지정한 각도 만큼 회전된 위치 리턴
	
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
