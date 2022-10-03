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
	Particle->ResetParticles(); // ���� �÷��� ��� �ʱ�ȭ
	Particle->SetActive(true);

	FVector start = GetActorLocation();
	FVector end = FVector(start.X, start.Y, start.Z + 10);

	// �׳� enum�� �ڷ����� ������� �ʱ� ������ �ڷ����� ũ�⸦ �˼� ����.
	/*
	enum class A : uint8
	{

	};
	*/
	// TEnumAsByte : Byte������ �����Ͽ� ����ϰڴ�.
	TArray<TEnumAsByte<EObjectTypeQuery>> queries;
	queries.Add(EObjectTypeQuery::ObjectTypeQuery4); // ������Ʈ ���� �ݸ����� �����¿� ������Ʈ Ÿ���̴�.

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
				// �������� ���������� ���� �޴� �Լ�
				meshComponent->AddRadialImpulse(GetActorLocation(), 1000, meshComponent->GetMass() * 700.0f, ERadialImpulseFalloff::RIF_Linear);
			}
		}
	}
}


