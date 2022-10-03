#pragma once

#include "CoreMinimal.h"
#include "IRifle.h"
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

// 이 사이에 delegate 나 구조체 이외는 잘 안들어간다

UCLASS()
class CPP_PROJECT_API ACPlayer : public ACharacter, public IIRifle
{
	// 이 사이에는 아무런 코드도 들어가면 안된다.
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

	// 입력을 받아 원하는대로 처리할 수 있도록 해주는 함수
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);
	void OnHorizontalLook(float Axis);
	void OnVerticalLook(float Axis);

	// 액션 입력은 parameter가 없다
	void OnRunning();
	void OffRunning();

	// 총 Action
	void OnRifle();

public:
	// BlueprintCallable : BP에서 call 가능
	UFUNCTION(BlueprintCallable)
		void ChangeColor(FLinearColor InColor);

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

private:
	class ACRifle* Rifle;

};
