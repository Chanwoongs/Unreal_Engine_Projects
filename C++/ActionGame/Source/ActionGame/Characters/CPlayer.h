#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Characters/ICharacter.h"
#include "Components/CStateComponent.h" // Delegate�� ���� ���漱�� (Enum)
#include "GenericTeamAgentInterface.h"
#include "CPlayer.generated.h"

UCLASS()
class ACTIONGAME_API ACPlayer : public ACharacter, public IICharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

// Widget
protected:
	//UPROPERTY(EditDefaultsOnly)
	//	TSubclassOf<class UCUserWidget_ActionList> ActionListClass;

	UPROPERTY(EditDefaultsOnly)
		uint8 TeamID = 0;

// Scene Components
protected:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* Camera;

// Actor Components
protected:
	UPROPERTY(VisibleDefaultsOnly)
		class UCActionComponent* Action;

	UPROPERTY(VisibleDefaultsOnly)
		class UCTargetComponent* Target;

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(VisibleDefaultsOnly)
		class UCOptionComponent* Option;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStatusComponent* Status;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateComponent* State;

	UPROPERTY(VisibleDefaultsOnly)
		class UCFeetComponent* Feet;

public:
	//FORCEINLINE class UCUserWidget_ActionList* GetActionList() { return ActionList; }

	FORCEINLINE class UCStatusComponent* GetStatus() { return Status; }

public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual FGenericTeamId GetGenericTeamId() const override; // Team ID

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

private:
	void OnMoveForward(float InAxis);
	void OnMoveRight(float InAxis);
	void OnHorizontalLook(float InAxis);
	void OnVerticalLook(float InAxis);
	void OnZoom(float InAxis);

	// �׼� �Է��� parameter�� ����
	void OnRunning();
	void OffRunning();


private:
	void OnAvoid();

private:
	UFUNCTION()
		void OnStateTypeChanged(EStateType InPreviousType, EStateType InNewType);

private:
	void Begin_Roll();
	void Begin_Backstep();

public:
	void End_Roll();
	void End_Backstep();

private:
	void OnDoAction();
	void OnTarget();
	void OnTargetLeft();
	void OnTargetRight();
private:
	void Hitted();
	void Dead();

public:
	virtual void BeginDead() override;
	virtual void EndDead() override;

private:
	class AController* DamageInstigator;
	float DamageValue;
};
