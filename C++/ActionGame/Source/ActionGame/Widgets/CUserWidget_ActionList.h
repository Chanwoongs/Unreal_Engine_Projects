#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget_ActionList.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUserWidget_ActionItem_Clicked);

USTRUCT(BlueprintType)
struct FUserWidget_ActionData
{
	GENERATED_BODY()

public:
	class UCUserWidget_ActionItem* item;
	FUserWidget_ActionItem_Clicked OnUserWidget_ActionItem_Clicked;
};

UCLASS()
class ACTIONGAME_API UCUserWidget_ActionList : public UUserWidget
{
	GENERATED_BODY()

public:
	FORCEINLINE FUserWidget_ActionData& GetData(uint32 InIndex) { return Datas[InIndex]; }

protected:
	virtual void NativeConstruct() override;

public:
	void Clicked(FString InName);
	void Hovered(FString InName);
	void Unhovered(FString InName);

private:
	TArray<FUserWidget_ActionData> Datas;
};
