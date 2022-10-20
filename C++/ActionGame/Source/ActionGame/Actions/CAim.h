#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CAim.generated.h"
UCLASS()
class ACTIONGAME_API UCAim : public UObject
{
	GENERATED_BODY()

public:
	FORCEINLINE bool IsAvailable() { return SpringArm != NULL && Camera != NULL; }
	FORCEINLINE bool IsZoom() { return bInZoom; }


	
public:
	UCAim();

	void BeginPlay(class ACharacter* InCharacter);

	void OnZoom();
	void OffZoom();

	void Tick(float DeltaTime);

private:
	class ACharacter* OwnerCharacter;
	class UCStateComponent* State;
	class USpringArmComponent* SpringArm;
	class UCameraComponent* Camera;

	bool bInZoom;
};
