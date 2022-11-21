#pragma once

#include "CoreMinimal.h"
#include "Characters/CPlayer.h"
#include "CPlayer_Warrior.generated.h"

UCLASS()
class ACTIONGAME_API ACPlayer_Warrior : public ACPlayer
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UCUserWidget_ActionList> ActionListClass;

public:
	FORCEINLINE class UCUserWidget_ActionList* GetActionList() { return ActionList; }

public:
	ACPlayer_Warrior();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UFUNCTION()
		void OnFist();
	UFUNCTION()
		void OnOneHand();
	UFUNCTION()
		void OnTwoHand();
	UFUNCTION()
		void OnWarp();
	UFUNCTION()
		void OnFireStorm();
	UFUNCTION()
		void OnIceBall();

	void OnViewActionList();
	void OffViewActionList();

public:
	virtual void ChangeColor(FLinearColor InColor) override;

private:
	class UMaterialInstanceDynamic* BodyMaterial;

protected:
	class UCUserWidget_ActionList* ActionList;


};
