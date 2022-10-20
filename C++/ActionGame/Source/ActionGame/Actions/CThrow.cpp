#include "CThrow.h"
#include "Global.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

ACThrow::ACThrow()
{
	// 충돌체가 먼저 나와야 충돌이 된다.
	CHelpers::CreateComponent<USphereComponent>(this, &Sphere, "Sphere");
	CHelpers::CreateComponent<UParticleSystemComponent>(this, &Particle, "Particle", Sphere);
	CHelpers::CreateActorComponent<UProjectileMovementComponent>(this, &Projectile, "Projectile");

	InitialLifeSpan = 3.0f;

	Projectile->InitialSpeed = 4000.0f;
	Projectile->MaxSpeed = 8000.0f;
	Projectile->ProjectileGravityScale = 0.0f;

}

void ACThrow::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<USphereComponent*> components;
	GetComponents<USphereComponent>(components);

	for (USphereComponent* sphere : components)
	{
		sphere->OnComponentBeginOverlap.AddDynamic(this, &ACThrow::OnComponentBeginOverlap);
	}
}

void ACThrow::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!!Explosion)
	{
		FTransform transform = ExplosionTransform;
		transform.AddToTranslation(SweepResult.Location); // 충돌한 애 위치
		transform.SetRotation(FQuat(SweepResult.ImpactNormal.Rotation())); // 충돌 받은 면의 수직 벡터로 회전을 처리

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion, transform);
	}

	if (OnThrowBeginOverlap.IsBound())
		OnThrowBeginOverlap.Broadcast(SweepResult);
		
	Destroy();
}


