#include "CDoAction_Throw.h"
#include "Global.h"
#include "CAim.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"
#include "Actions/CThrow.h"

void ACDoAction_Throw::BeginPlay()
{
	Super::BeginPlay();

	// NewObject : BeginPlay 이후 동적 할당 수행, 가비지 컬렉션에 의해 자동으로 제거되도록 해주는 함수
	Aim = NewObject<UCAim>(); 
	//Aim->ConditionalFinishDestroy(); 바로 삭제, BeginDestory는 가비지 컬렉터에 등재
	Aim->BeginPlay(OwnerCharacter);
}


void ACDoAction_Throw::DoAction()
{
	if (Aim->IsAvailable())
		CheckFalse(Aim->IsZoom());

	CheckFalse(*bEquipped);

	CheckFalse(State->IsIdleMode());
	State->SetActionMode();

	OwnerCharacter->PlayAnimMontage(Datas[0].AnimMontage, Datas[0].PlayRatio, Datas[0].StartSection);
	Datas[0].bCanMove ? Status->SetMove() : Status->SetStop();
}

void ACDoAction_Throw::Begin_Action()
{
	FVector location = OwnerCharacter->GetMesh()->GetSocketLocation("Hand_Throw_Projectile");
	FRotator rotator = OwnerCharacter->GetController()->GetControlRotation();

	FTransform transform = Datas[0].EffectTransform;
	transform.AddToTranslation(location);
	transform.SetRotation(FQuat(rotator));

	FActorSpawnParameters params; 
	params.Owner = OwnerCharacter;

	// ACThrow* throwObject = OwnerCharacter->GetWorld()->SpawnActor<ACThrow>(Datas[0].ThrowClass, transform, params); 생성하려는 곳에 다른 Actor가 있다면 생성이 안될 수도 있다.
	ACThrow* throwObject = OwnerCharacter->GetWorld()->SpawnActorDeferred<ACThrow>(Datas[0].ThrowClass, transform, OwnerCharacter, NULL, ESpawnActorCollisionHandlingMethod::AlwaysSpawn); // ESpawnActorCollisionHandlingMethod으로 결정
	throwObject->OnThrowBeginOverlap.AddDynamic(this, &ACDoAction_Throw::OnThrowBeginOverlap);
	UGameplayStatics::FinishSpawningActor(throwObject, transform); // 등장 확정 시키기
}

void ACDoAction_Throw::End_Action()
{
	State->SetIdleMode();
	Status->SetMove();
}

void ACDoAction_Throw::OnAim()
{
	Aim->OnZoom();
}

void ACDoAction_Throw::OffAim()
{
	Aim->OffZoom();
}

void ACDoAction_Throw::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Aim->Tick(DeltaTime);
}

void ACDoAction_Throw::OnThrowBeginOverlap(FHitResult InHitResult)
{
	FDamageEvent e;
	InHitResult.GetActor()->TakeDamage(Datas[0].Power, e, OwnerCharacter->GetController(), this);
}
