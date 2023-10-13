#include "CDoAction_Rifle.h"
#include "Global.h"
#include "IRifle.h"
#include "CBullet.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/Character.h"
#include "Engine/StaticMeshActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "Materials/MaterialInstanceConstant.h"

#include "Characters/CEnemy.h"
#include "Actions/CAim.h"
#include "Actions/CAction.h"
#include "Actions/CAttachment.h"
#include "Actions/CAttachment_Rifle.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"
#include "Components/CActionComponent.h"


ACDoAction_Rifle::ACDoAction_Rifle() : FireInterval(0.15f)
{
	PrimaryActorTick.bCanEverTick = true;

	// 총구 파티클
	CHelpers::GetAsset<UParticleSystem>(&FlashParticle, "ParticleSystem'/Game/Particles_Rifle/Particles/VFX_Muzzleflash.VFX_Muzzleflash'");
	// 탄피 파티클
	//CHelpers::GetAsset<UParticleSystem>(&EjectParticle, "ParticleSystem'/Game/Particles_Rifle/Particles/VFX_Eject_bullet.VFX_Eject_bullet'");
	// 총알 충돌 시 효과
	CHelpers::GetAsset<UParticleSystem>(&ImpactParticle, "ParticleSystem'/Game/Particles_Rifle/Particles/VFX_Impact_Default.VFX_Impact_Default'");
	// 총 사운드
	CHelpers::GetAsset<USoundCue>(&FireSoundCue, "SoundCue'/Game/Sound/S_RifleShoot/S_RifleShoot_Cue.S_RifleShoot_Cue'");
	// 총의 경로
	CHelpers::GetClass<ACBullet>(&BulletClass, "Blueprint'/Game/Actions/BP_CBullet.BP_CBullet_C'");
	// 탄흔
	CHelpers::GetAsset<UMaterialInstanceConstant>(&DecalMaterial, "MaterialInstanceConstant'/Game/Materials/M_Decal_Inst.M_Decal_Inst'");

}

void ACDoAction_Rifle::BeginPlay()
{
	Super::BeginPlay();
}

void ACDoAction_Rifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckFalse(bAiming);

	// IRifle을 상속 받은 것만 처리를 할 수 있도록
	IIRifle* rifle = Cast<IIRifle>(OwnerCharacter);
	CheckNull(rifle);

	FVector start, end, direction;
	rifle->GetLocationAndDirection(start, end, direction);

	//DrawDebugLine(GetWorld(), start, end, FColor::Green, false, 3.0f);

	FCollisionQueryParams params;
	params.AddIgnoredActor(this);
	params.AddIgnoredActor(OwnerCharacter);

	CheckInterval(DeltaTime);

	if (CurrentFireInterval <= 0.0f)
	{
		Firing();
		CurrentFireInterval = FireInterval;
	}


	FHitResult hitResult;
	if (GetWorld()->LineTraceSingleByChannel(hitResult, start, end, ECollisionChannel::ECC_WorldDynamic, params))
	{
		//AStaticMeshActor* staticMeshActor = Cast<AStaticMeshActor>(hitResult.GetActor());
		//if (!!staticMeshActor)
		//{
		//	UStaticMeshComponent* meshComponent = Cast<UStaticMeshComponent>(staticMeshActor->GetRootComponent());
		//	if (!!meshComponent)
		//	{
		//		if (meshComponent->BodyInstance.bSimulatePhysics)
		//		{
		//			rifle->OnFocus();

		//			return;
		//		}
		//	}
		//}
		ACEnemy* enemy = Cast<ACEnemy>(hitResult.GetActor());
		if (!!enemy)
		{
			rifle->OnFocus();

			return;
		}
	}

	rifle->OffFocus();
}

void ACDoAction_Rifle::DoAction()
{
	UCStateComponent* state = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);

	CheckFalse(*bEquipped);
	CheckTrue(state->IsEquipMode());
	CheckFalse(bAiming);
	CheckTrue(bFiring);

	bFiring = true;

	CheckFalse(bAiming);
	CheckFalse(*bEquipped);
	CheckFalse(State->IsIdleMode());

	State->SetActionMode();

	OwnerCharacter->PlayAnimMontage(Datas[0].AnimMontage, Datas[0].PlayRatio, Datas[0].StartSection);
	Datas[0].bCanMove ? Status->SetMove() : Status->SetStop();
}

void ACDoAction_Rifle::Begin_Action()
{

}

void ACDoAction_Rifle::End_Action()
{
}

void ACDoAction_Rifle::End_Fire()
{
	State->SetIdleMode();
	bFiring = false;
}

void ACDoAction_Rifle::Begin_Fire()
{
	UCStateComponent* state = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);

	CheckFalse(*bEquipped);
	CheckTrue(state->IsEquipMode());
	CheckFalse(bAiming);
	CheckTrue(bFiring);

	bFiring = true;
}

void ACDoAction_Rifle::Firing()
{
	CheckFalse(bFiring);

	IIRifle* rifle = Cast<IIRifle>(OwnerCharacter);
	CheckNull(rifle);

	FVector start, end, direction;
	rifle->GetLocationAndDirection(start, end, direction);

	//// Camera Shake Play
	//TSubclassOf<UCameraShake> shake = Datas[0].ShakeClass;
	//if (shake != NULL)
	//{
	//	//UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerCameraManager->PlayCameraShake(shake);
	//}

	UCActionComponent* action = CHelpers::GetComponent<UCActionComponent>(OwnerCharacter);
	ACAttachment_Rifle* attachmentRifle = Cast<ACAttachment_Rifle>(action->GetCurrent()->GetAttachment());
	USkeletalMeshComponent* mesh = attachmentRifle->GetSkeletal();

	UGameplayStatics::SpawnEmitterAttached(FlashParticle, mesh, "MuzzleFlash", FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset); // 어딘가에 Attach하여 플레이
	//UGameplayStatics::SpawnEmitterAttached(EjectParticle, Mesh, "EjectBullet", FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset); // 어딘가에 Attach하여 플레이

	FVector muzzleLocation = mesh->GetSocketLocation("MuzzleFlash");
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), FireSoundCue, muzzleLocation, 0.3f);

	// 총 경로 
	if (!!BulletClass)
	{
		GetWorld()->SpawnActor<ACBullet>(BulletClass, muzzleLocation, direction.Rotation());
	}

	FCollisionQueryParams params;
	params.AddIgnoredActor(this);
	params.AddIgnoredActor(OwnerCharacter);

	FHitResult hitResult;
	// 총알이 맞은 위치 처리, 탄흔, 화면에 보이는것 모두 검출
	if (GetWorld()->LineTraceSingleByChannel(hitResult, start, end, ECollisionChannel::ECC_Visibility, params))
	{
		FRotator rotator = hitResult.ImpactNormal.Rotation(); // 비스듬하게 맞았을 때 비스듬하게 처리를 하기 위해 맞은 면의 수직인 Normal을 가져옴
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticle, hitResult.Location, rotator, FVector(2));
		UGameplayStatics::SpawnDecalAtLocation(GetWorld(), DecalMaterial, FVector(5), hitResult.Location, rotator, 10.0f);
	}

	//LineTraceSingleByChannel : 시작 위치에서 끝 위치 까지 해당 Channel로 된 가장 가까운 액터 찾기
	if (GetWorld()->LineTraceSingleByChannel(hitResult, start, end, ECollisionChannel::ECC_WorldDynamic, params))
	{
		AStaticMeshActor* staticMeshActor = Cast<AStaticMeshActor>(hitResult.GetActor());
		if (!!staticMeshActor)
		{
			UStaticMeshComponent* meshComponent = Cast<UStaticMeshComponent>(staticMeshActor->GetRootComponent());
			if (!!meshComponent)
			{
				if (meshComponent->BodyInstance.bSimulatePhysics)
				{
					direction = staticMeshActor->GetActorLocation() - OwnerCharacter->GetActorLocation();
					direction.Normalize();

					meshComponent->AddImpulseAtLocation(direction * meshComponent->GetMass() * 100, OwnerCharacter->GetActorLocation());

					return;
				}
			}
		}
		FDamageEvent e;
		hitResult.GetActor()->TakeDamage(Datas[0].Power, e, OwnerCharacter->GetController(), this);

		return;
	}

}

void ACDoAction_Rifle::CheckInterval(float DeltaTime)
{
	if (CurrentFireInterval > 0)
		CurrentFireInterval -= DeltaTime;
}

void ACDoAction_Rifle::Begin_Aiming()
{
	bAiming = true;
}

void ACDoAction_Rifle::End_Aiming()
{
	bAiming = false;
}
