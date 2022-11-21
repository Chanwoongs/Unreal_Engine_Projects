#include "CGameMode_Shooting.h"
#include "Global.h"

#include "Characters/CPlayer.h"
#include "Components/CStatusComponent.h"

#include "BluePrint/UserWidget.h"

#include "Widgets/CUserWidget_InGameUI.h"
#include "Widgets/CUserWidget_MainMenu.h"

#include "Levels/CLevelScriptActor_MainMenu.h"
ACGameMode_Shooting::ACGameMode_Shooting()
{
	CHelpers::GetClass<APawn>(&ShootingPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");
	CHelpers::GetClass<AHUD>(&HUDClass, "Blueprint'/Game/BP_CHUD.BP_CHUD_C'");

	DefaultPawnClass = ShootingPawnClass;
}

void ACGameMode_Shooting::BeginPlay()
{
}

