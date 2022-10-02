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
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

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
