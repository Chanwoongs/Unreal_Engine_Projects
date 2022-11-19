#include "CUserWidget_MainMenu.h"
#include "Global.h"

#include "Widgets/CUserWidget_Button.h"
#include "Components/Border.h"
#include "Components/GridPanel.h"

void UCUserWidget_MainMenu::NativeConstruct()
{
	UGridPanel* gridPanel = Cast<UGridPanel>(GetWidgetFromName("Grid"));
	TArray<UWidget*> widgets = gridPanel->GetAllChildren();

	for (UWidget* widget : widgets)
	{
		FUserWidget_MainMenu_Button data;
		data.Button = Cast<UCUserWidget_Button>(widget);

		Datas.Add(data);
	}

	Datas[0].OnUserWidget_MainMenu_Button_Clicked.AddDynamic(this, &UCUserWidget_MainMenu::StartActionGame);
	Datas[1].OnUserWidget_MainMenu_Button_Clicked.AddDynamic(this, &UCUserWidget_MainMenu::StartShootingGame);
	Datas[2].OnUserWidget_MainMenu_Button_Clicked.AddDynamic(this, &UCUserWidget_MainMenu::Settings);
	Datas[3].OnUserWidget_MainMenu_Button_Clicked.AddDynamic(this, &UCUserWidget_MainMenu::QuitGame);

	Super::NativeConstruct();
}

void UCUserWidget_MainMenu::Clicked(FString InName)
{
	for (const FUserWidget_MainMenu_Button& data : Datas)
	{
		// 데이터의 이름과 클릭된 아이템의 이름이 같다면 연결되어 있는 델리게이션을 호출
		if (data.Button->GetName() == InName)
		{
			if (data.OnUserWidget_MainMenu_Button_Clicked.IsBound())
				data.OnUserWidget_MainMenu_Button_Clicked.Broadcast();
			break;
		}
	}
}

void UCUserWidget_MainMenu::Hovered(FString InName)
{
	for (const FUserWidget_MainMenu_Button& data : Datas)
	{
		UBorder* border = Cast<UBorder>(data.Button->GetWidgetFromName("BG_Border"));

		if (data.Button->GetName() == InName)
		{
			border->SetBrushColor(FLinearColor::Red);

			break;
		}
	}
}

void UCUserWidget_MainMenu::Unhovered(FString InName)
{
	for (const FUserWidget_MainMenu_Button& data : Datas)
	{
		UBorder* border = Cast<UBorder>(data.Button->GetWidgetFromName("BG_Border"));

		if (data.Button->GetName() == InName)
		{
			border->SetBrushColor(FLinearColor::White);

			break;
		}
	}
}

void UCUserWidget_MainMenu::StartActionGame()
{
	UGameplayStatics::OpenLevel(this, FName("ActionRPGLevel"));
}

void UCUserWidget_MainMenu::StartShootingGame()
{
}

void UCUserWidget_MainMenu::Settings()
{
}

void UCUserWidget_MainMenu::QuitGame()
{
	UKismetSystemLibrary::QuitGame(this, 0, EQuitPreference::Quit, false);
}
