#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget_InGameUI.generated.h"

UCLASS()
class ACTIONGAME_API UCUserWidget_InGameUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent)
		void UpdateHealth(float Health, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent)
		void UpdateRemainEnemy(int32 RemainEnemy);
};
