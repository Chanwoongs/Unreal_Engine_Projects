#include "CLevelScriptActor_MainMenu.h"
#include "Global.h"

#include "BluePrint/UserWidget.h"
#include "Widgets/CUserWidget_MainMenu.h"

ACLevelScriptActor_MainMenu::ACLevelScriptActor_MainMenu()
{
	CHelpers::GetClass<UCUserWidget_MainMenu>(&MainMenuClass, "WidgetBlueprint'/Game/Widgets/WB_MainMenu.WB_MainMenu_C'");
}

void ACLevelScriptActor_MainMenu::BeginPlay()
{
	Super::BeginPlay();

	if (MainMenuClass)
	{
		MainMenu = CreateWidget<UCUserWidget_MainMenu>(GetWorld(), MainMenuClass);
		if (MainMenu)
		{
			MainMenu->AddToViewport();
			UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = true;
		}
	}
}
