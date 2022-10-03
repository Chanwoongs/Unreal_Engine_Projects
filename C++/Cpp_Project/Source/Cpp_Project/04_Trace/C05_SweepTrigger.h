#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C05_SweepTrigger.generated.h"

UCLASS()
class CPP_PROJECT_API AC05_SweepTrigger : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;


public:	
	AC05_SweepTrigger();

protected:
	virtual void BeginPlay() override;

public:	

};
