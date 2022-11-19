#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget_MainMenu.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUserWidget_MainMenu_Button_Clicked);

USTRUCT(BlueprintType)
struct FUserWidget_MainMenu_Button
{
	GENERATED_BODY()

public:
	class UCUserWidget_Button* Button;
	FUserWidget_MainMenu_Button_Clicked OnUserWidget_MainMenu_Button_Clicked;
};


UCLASS()
class ACTIONGAME_API UCUserWidget_MainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	FORCEINLINE FUserWidget_MainMenu_Button& GetData(uint32 InIndex) { return Datas[InIndex]; }

protected:
	virtual void NativeConstruct() override;

public:
	UFUNCTION()
		void StartActionGame();

	UFUNCTION()
		void StartShootingGame();

	UFUNCTION()
		void Settings();

	UFUNCTION()
		void QuitGame();

public:
	void Clicked(FString InName);
	void Hovered(FString InName);
	void Unhovered(FString InName);

private:
	TArray<FUserWidget_MainMenu_Button> Datas;
};
