#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Particles.generated.h"

UCLASS()
class CPP_PROJECT_API AC03_Particles : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(VisibleDefaultsOnly)
		class UParticleSystem* Particles[3];


public:	
	AC03_Particles();

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
		void PlayParticle(int32 InIndex);
};
