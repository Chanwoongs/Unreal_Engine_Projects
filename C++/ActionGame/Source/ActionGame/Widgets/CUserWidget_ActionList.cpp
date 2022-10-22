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
		// �������� �̸��� Ŭ���� �������� �̸��� ���ٸ� ����Ǿ� �ִ� �������̼��� ȣ��
		if (data.item->GetName() == InName)
		{
			if (data.OnUserWidget_ActionItem_Clicked.IsBound())
				data.OnUserWidget_ActionItem_Clicked.Broadcast();

			SetVisibility(ESlateVisibility::Hidden);

			UGameplayStatics::GetPlayerController(GetWorld(), 0)->bShowMouseCursor = false;
			UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeGameOnly()); // ���� ������� UI ������� ����

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
