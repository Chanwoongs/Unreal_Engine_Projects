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

public:
	FORCEINLINE class UCUserWidget_InGameUI* GetInGameUI() { return InGameUI; }

protected:

private:
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UCUserWidget_InGameUI> InGameUIClass;

private:
	ACPlayer* Player;

protected:
	class UCUserWidget_InGameUI* InGameUI;


};
