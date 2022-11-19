#include "CUserWidget_Button.h"
#include "Global.h"

#include "Widgets/CUserWidget_MainMenu.h"
#include "Levels/CLevelScriptActor_MainMenu.h"

void UCUserWidget_Button::Click()
{
    GetMainMenu()->Clicked(GetName());
}

void UCUserWidget_Button::Hover()
{
    GetMainMenu()->Hovered(GetName());
}

void UCUserWidget_Button::Unhover()
{
    GetMainMenu()->Unhovered(GetName());
}

UCUserWidget_MainMenu* UCUserWidget_Button::GetMainMenu()
{
    ACLevelScriptActor_MainMenu* level = Cast<ACLevelScriptActor_MainMenu>(GetWorld()->GetCurrentLevel()->GetLevelScriptActor());
    
    return level->GetMainMenu();
}
