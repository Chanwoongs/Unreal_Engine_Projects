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
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* Camera;

public:
	FORCEINLINE class ACRifle* GetRifle() override { return Rifle; }

public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// �Է��� �޾� ���ϴ´�� ó���� �� �ֵ��� ���ִ� �Լ�
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

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

public:
	// BlueprintCallable : BP���� call ����
	UFUNCTION(BlueprintCallable)
		void ChangeColor(FLinearColor InColor);

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

private:
	class ACRifle* Rifle;

};
