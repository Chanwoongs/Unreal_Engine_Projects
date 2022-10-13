#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h" // TEnumAsByte를 위한 헤더
#include "CTargetComponent.generated.h"


UCLASS( ClassGroup=(GameProject), meta=(BlueprintSpawnableComponent) )
class ACTIONGAME_API UCTargetComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
		float TraceRadius = 1000.0f;

	UPROPERTY(EditAnywhere)
		TEnumAsByte<EDrawDebugTrace::Type> Debug;

	UPROPERTY(EditAnywhere)
		class UParticleSystem* Particle;

public:	
	UCTargetComponent();

protected:
	virtual void BeginPlay() override;

public:
	void ToggleTarget();

private:
	void StartTargeting();
	void EndTargeting();

	void SetTraceTargets();
	void SetTarget();

	void ChangeCursor(class ACharacter* InTarget);

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	class ACharacter* OwnerCharacter;
	class ACharacter* Target;		
	class UParticleSystemComponent* Attached;

	TArray<class ACharacter*> TraceTargets;
};
