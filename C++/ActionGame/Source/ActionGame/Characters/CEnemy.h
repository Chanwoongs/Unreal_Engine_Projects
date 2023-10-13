#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Characters/ICharacter.h"
#include "CEnemy.generated.h"

UCLASS()
class ACTIONGAME_API ACEnemy : public ACharacter, public IICharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Hitted")
		float LaunchAmount = 100.0f;

// Scene Components
protected:
	UPROPERTY(VisibleDefaultsOnly)
		class UWidgetComponent* HealthWidget;

// Actor Components
protected:
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
		class UCActionComponent* Action;

protected:

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStatusComponent* Status;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateComponent* State;


public:
	ACEnemy();

	float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;


protected:
	virtual void BeginPlay() override;
	virtual void ChangeColor(FLinearColor InColor) {}
	virtual void Hitted();

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
		void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

private:
	void Dead();
	void UpdateVisibilityHealbar();

public:
	virtual void BeginDead() override;
	virtual void EndDead() override;
	bool IsAlreadyDead() { return IsDead; }

private:
	class AController* DamageInstigator;
	float DamageValue;
	bool IsDead;

};
