#pragma once

#include "CoreMinimal.h"
#include "Actions/CDoAction.h"
#include "CDoAction_FireStorm.generated.h"

UCLASS()
class ACTIONGAME_API ACDoAction_FireStorm : public ACDoAction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
		float Time = 5.0f; // 불기둥 유지 시간

	UPROPERTY(EditAnywhere)
		float Distance = 200.0f; // 불기둥과 player와의 간격

	UPROPERTY(EditAnywhere)
		float Speed = 100.0f; // 불기둥의 속도 
	
	// BeginPlay에서 Decal을 가져온다. Decal의 위치는 Action의 Tick에서 움직인다.
	virtual void BeginPlay() override;

public:
	virtual void DoAction() override;
	virtual void Begin_Action() override;
	virtual void End_Action() override;

	virtual void Tick(float DeltaTime) override;

private:
	class UBoxComponent* Box;
	class UParticleSystemComponent* Attached;

private:
	UFUNCTION()
		void Finish();

	float Angle;

};
