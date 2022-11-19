#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CGameMode.generated.h"

UCLASS()
class ACTIONGAME_API ACGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ACGameMode();

	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UCUserWidget_InGameUI> InGameUIClass;

protected:
	class UCUserWidget_InGameUI* InGameUI;


public:
	FORCEINLINE class UCUserWidget_InGameUI* GetInGameUI() { return InGameUI; }
	FORCEINLINE int32 GetRemainingEnemies() { return NumberOfEnemies; }

private:
	ACPlayer* Player;
	int32 NumberOfEnemies;
};
