#include "CGameMode.h"
#include "Global.h"

#include "Characters/CPlayer.h"
#include "Components/CStatusComponent.h"

#include "BluePrint/UserWidget.h"

#include "Widgets/CUserWidget_InGameUI.h"
#include "Widgets/CUserWidget_MainMenu.h"

#include "Levels/CLevelScriptActor_MainMenu.h"
ACGameMode::ACGameMode()
{
	CHelpers::GetClass<APawn>(&ActionRPGPawnClass, "Blueprint'/Game/Character/Warrior/BP_CPlayer_Warrior.BP_CPlayer_Warrior_C'");
	CHelpers::GetClass<AHUD>(&HUDClass, "Blueprint'/Game/BP_CHUD.BP_CHUD_C'");
	CHelpers::GetClass<UCUserWidget_InGameUI>(&InGameUIClass, "WidgetBlueprint'/Game/Widgets/WB_InGameUI.WB_InGameUI_C'");

	DefaultPawnClass = ActionRPGPawnClass;
	NumberOfEnemies = 3;
}

void ACGameMode::BeginPlay()
{
	Super::BeginPlay();

	InGameUI = CreateWidget<UCUserWidget_InGameUI>(GetWorld(), InGameUIClass);
	InGameUI->AddToViewport();
	Player = Cast<ACPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	InGameUI->UpdateHealth(Player->GetStatus()->GetMaxHealth(), Player->GetStatus()->GetMaxHealth());
	InGameUI->UpdateRemainEnemy(GetRemainingEnemies());
}

