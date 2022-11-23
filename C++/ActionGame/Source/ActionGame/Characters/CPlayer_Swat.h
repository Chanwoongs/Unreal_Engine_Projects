#pragma once

#include "CoreMinimal.h"
#include "Actions/IRifle.h"
#include "Characters/CPlayer.h"
#include "CPlayer_Swat.generated.h"

UCLASS()
class ACTIONGAME_API ACPlayer_Swat : public ACPlayer, public IIRifle
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
		TSubclassOf<class UCUserWidget_Crosshair> CrosshairClass;

private:
	UFUNCTION()
		void OnRifle();

protected:
	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomIn();

	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomOut();

public:
	FORCEINLINE class ACDoAction_Rifle* GetRifle() { return Rifle; }
	FORCEINLINE virtual bool IsAiming() { return bAiming; }
	
public:
	ACPlayer_Swat();

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
	// Aim mode
	void OnAim();
	void OffAim();

	void OffFire();

public:
	virtual void ChangeColor(FLinearColor InColor) override;

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* HeadMaterial;
	class UMaterialInstanceDynamic* FaceMaterial;

	class UCUserWidget_Crosshair* Crosshair;

	class ACDoAction_Rifle* Rifle;
	bool bAiming;

};
