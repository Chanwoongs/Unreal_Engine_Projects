#include "CUserWidget_ActionItem.h"
#include "Global.h"
#include "CUserWidget_ActionList.h"
#include "Characters/CPlayer.h"
#include "Characters/CPlayer_Warrior.h"

void UCUserWidget_ActionItem::Click()
{
	GetActionList()->Clicked(GetName());
}

void UCUserWidget_ActionItem::Hover()
{
	GetActionList()->Hovered(GetName());
}

void UCUserWidget_ActionItem::Unhover()
{
	GetActionList()->Unhovered(GetName());
}

UCUserWidget_ActionList* UCUserWidget_ActionItem::GetActionList()
{
	ACPlayer_Warrior* player = Cast<ACPlayer_Warrior>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	return player->GetActionList();	
}
