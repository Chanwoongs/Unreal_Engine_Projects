#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CGameMode_Shooting.generated.h"

UCLASS()
class ACTIONGAME_API ACGameMode_Shooting : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACGameMode_Shooting();

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<APawn> ShootingPawnClass;

};



