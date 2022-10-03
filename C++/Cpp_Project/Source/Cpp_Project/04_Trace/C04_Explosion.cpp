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
}


