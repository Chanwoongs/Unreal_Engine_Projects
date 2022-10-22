#include "CUserWidget_ActionList.h"
#include "Global.h"
#include "Components/GridPanel.h"
#include "Components/Border.h"
#include "Widgets/CUserWidget_ActionItem.h"

void UCUserWidget_ActionList::NativeConstruct()
{
	UGridPanel* gridPanel = Cast<UGridPanel>(GetWidgetFromName("Grid"));
	TArray<UWidget*> widgets = gridPanel->GetAllChildren();

	for (UWidget* widget : widgets)
	{
		FUserWidget_ActionData data;
		data.item = Cast<UCUserWidget_ActionItem>(widget);

		Datas.Add(data);

	}

	Super::NativeConstruct();
}

void UCUserWidget_ActionList::Clicked(FString InName)
{
	for (const FUserWidget_ActionData& data : Datas)
	{
		// 데이터의 이름과 클릭된 아이템의 이름이 같다면 연결되어 있는 델리게이션을 호출
		if (data.item->GetName() == InName)
		{
			if (data.OnUserWidget_ActionItem_Clicked.IsBound())
				data.OnUserWidget_ActionItem_Clicked.Broadcast();

			SetVisibility(ESlateVisibility::Hidden);

			UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = false;
			UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeGameOnly()); // 게임 모드인지 UI 모드인지 정함

			UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f); 

			break;
		}
	}
}

void UCUserWidget_ActionList::Hovered(FString InName)
{
	for (const FUserWidget_ActionData& data : Datas)
	{
		UBorder* border = Cast<UBorder>(data.item->GetWidgetFromName("BG_Border"));

		if (data.item->GetName() == InName)
		{
			border->SetBrushColor(FLinearColor::Red);

			break;
		}
	}
}

void UCUserWidget_ActionList::Unhovered(FString InName)
{
	for (const FUserWidget_ActionData& data : Datas)
	{
		UBorder* border = Cast<UBorder>(data.item->GetWidgetFromName("BG_Border"));

		if (data.item->GetName() == InName)
		{
			border->SetBrushColor(FLinearColor::White);

			break;
		}
	}
}
