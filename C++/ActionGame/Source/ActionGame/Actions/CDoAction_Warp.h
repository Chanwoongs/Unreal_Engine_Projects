#pragma once

#include "CoreMinimal.h"
#include "Actions/CDoAction.h"
#include "CDoAction_Warp.generated.h"

UCLASS()
class ACTIONGAME_API ACDoAction_Warp : public ACDoAction
{
	GENERATED_BODY()

protected:
	// BeginPlay���� Decal�� �����´�. Decal�� ��ġ�� Action�� Tick���� �����δ�.
	virtual void BeginPlay() override;
	
public:
	virtual void DoAction() override;
	virtual void Begin_Action() override;
	virtual void End_Action() override;

	virtual void Tick(float DeltaTime) override;

private:
	bool UseCursorLocation();
	bool GetCursorLocationAndRotation(FVector& OutLocation, FRotator& OutRotator);

private:
	class UDecalComponent* Decal;
	FVector Location;
};
