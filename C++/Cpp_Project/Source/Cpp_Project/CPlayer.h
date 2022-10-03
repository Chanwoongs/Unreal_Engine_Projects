#pragma once

#include "CoreMinimal.h"
#include "IRifle.h"
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

// �� ���̿� delegate �� ����ü �ܴ̿� �� �ȵ���

UCLASS()
class CPP_PROJECT_API ACPlayer : public ACharacter, public IIRifle
{
	// �� ���̿��� �ƹ��� �ڵ嵵 ���� �ȵȴ�.
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
		TSubclassOf<class UCUserWidget_Crosshair> CrosshairClass;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;

protected:
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
		class UCameraComponent* Camera;

protected:
	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomIn();
	

	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomOut();
		
public:
	FORCEINLINE class ACRifle* GetRifle() override { return Rifle; }

public:
	ACPlayer();

public:
	void GetLocationAndDirection(FVector& OutStart, FVector& OutEnd, FVector& OutDirection) override;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// �Է��� �޾� ���ϴ´�� ó���� �� �ֵ��� ���ִ� �Լ�
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void OnFocus() override;
	void OffFocus() override;

private:
	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);
	void OnHorizontalLook(float Axis);
	void OnVerticalLook(float Axis);

	// �׼� �Է��� parameter�� ����
	void OnRunning();
	void OffRunning();

	// �� Action
	void OnRifle();

	// Aim mode
	void OnAim();
	void OffAim();

public:
	// BlueprintCallable : BP���� call ����
	UFUNCTION(BlueprintCallable)
		void ChangeColor(FLinearColor InColor);

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

private:
	class ACRifle* Rifle;
	class UCUserWidget_Crosshair* Crosshair;
};
