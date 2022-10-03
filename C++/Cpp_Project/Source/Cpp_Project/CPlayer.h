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

	// 입력을 받아 원하는대로 처리할 수 있도록 해주는 함수
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void OnFocus() override;
	void OffFocus() override;

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

	// Aim mode
	void OnAim();
	void OffAim();

public:
	// BlueprintCallable : BP에서 call 가능
	UFUNCTION(BlueprintCallable)
		void ChangeColor(FLinearColor InColor);

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

private:
	class ACRifle* Rifle;
	class UCUserWidget_Crosshair* Crosshair;
};
