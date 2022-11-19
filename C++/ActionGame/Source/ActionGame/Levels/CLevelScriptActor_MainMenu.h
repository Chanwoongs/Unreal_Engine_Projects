#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "CLevelScriptActor_MainMenu.generated.h"

UCLASS()
class ACTIONGAME_API ACLevelScriptActor_MainMenu : public ALevelScriptActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<class UCUserWidget_MainMenu> MainMenuClass;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
		class UCUserWidget_MainMenu* MainMenu;

public:
	FORCEINLINE UCUserWidget_MainMenu* GetMainMenu() { return MainMenu; }

public:
	ACLevelScriptActor_MainMenu();

protected:
	virtual void BeginPlay() override;
};
