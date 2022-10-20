#pragma once

#include "CoreMinimal.h"
#include "Actions/CDoAction.h"
#include "CDoAction_Throw.generated.h"

UCLASS()
class ACTIONGAME_API ACDoAction_Throw : public ACDoAction
{
	GENERATED_BODY()
	
protected:
		virtual void BeginPlay() override;

public:
	virtual void DoAction() override;
	virtual void Begin_Action() override;
	virtual void End_Action() override;

	virtual void OnAim() override;
	virtual void OffAim() override;

	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
		void OnThrowBeginOverlap(FHitResult InHitResult);

private:
	class UCAim* Aim;
};
