#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C04_Explosion.generated.h"

UCLASS()
class CPP_PROJECT_API AC04_Explosion : public AActor
{
	GENERATED_BODY()

private:
	// SpawnEmitter�� ����ϰ� �Ǹ� ȣ���� �� Particle�� ����� ������ �������� �ݺ�, ���� ���⼭ �̸� �����д�.
	UPROPERTY(VisibleDefaultsOnly)
		class UParticleSystemComponent* Particle;
public:	
	AC04_Explosion();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
};
