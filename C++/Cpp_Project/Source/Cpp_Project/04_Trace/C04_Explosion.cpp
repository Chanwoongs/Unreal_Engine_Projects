#include "C04_Explosion.h"
#include "Global.h"
#include "Particles/ParticleSystemComponent.h"

AC04_Explosion::AC04_Explosion()
{
	CHelpers::CreateComponent<UParticleSystemComponent>(this, &Particle, "Particle");

	UParticleSystem* particle;
	CHelpers::GetAsset< UParticleSystem>(&particle, "ParticleSystem'/Game/Effects/P_Explosion2.P_Explosion2'");
	Particle->SetTemplate(particle);
	Particle->bAutoActivate = false;

}

void AC04_Explosion::BeginPlay()
{
	Super::BeginPlay();
	
}

void AC04_Explosion::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	Particle->ResetParticles(); // 기존 플레이 결과 초기화
	Particle->SetActive(true);

	FVector start = GetActorLocation();
	FVector end = FVector(start.X, start.Y, start.Z + 10);

	// 그냥 enum은 자료형을 명시하지 않기 때문에 자료형의 크기를 알수 없다.
	/*
	enum class A : uint8
	{

	};
	*/
	// TEnumAsByte : Byte형으로 저장하여 사용하겠다.
	TArray<TEnumAsByte<EObjectTypeQuery>> queries;
	queries.Add(EObjectTypeQuery::ObjectTypeQuery4); // 프로젝트 세팅 콜리전에 프리셋에 오브젝트 타입이다.

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(this);

	TArray<FHitResult> hitResults;

	if (UKismetSystemLibrary::SphereTraceMultiForObjects(GetWorld(), start, end, 200, queries, false, ignoreActors, EDrawDebugTrace::ForOneFrame, hitResults, true))
	{
		for (const FHitResult& hitResult : hitResults)
		{
			UStaticMeshComponent* meshComponent = Cast<UStaticMeshComponent>(hitResult.GetActor()->GetRootComponent());
			
			if (!!meshComponent)
			{
				// 구형으로 퍼져나가는 힘을 받는 함수
				meshComponent->AddRadialImpulse(GetActorLocation(), 1000, meshComponent->GetMass() * 700.0f, ERadialImpulseFalloff::RIF_Linear);
			}
		}
	}
}


