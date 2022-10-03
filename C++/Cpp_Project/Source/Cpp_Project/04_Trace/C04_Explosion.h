#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C04_Explosion.generated.h"

UCLASS()
class CPP_PROJECT_API AC04_Explosion : public AActor
{
	GENERATED_BODY()

private:
	// SpawnEmitter를 사용하게 되면 호출할 때 Particle이 생기고 끝나면 없어지고 반복, 따라서 여기서 미리 만들어둔다.
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
