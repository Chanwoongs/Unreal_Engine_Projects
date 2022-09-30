#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Light.generated.h"

UCLASS()
class CPP_PROJECT_API AC03_Light : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(VisibleDefaultsOnly)
		class UPointLightComponent* PointLight;

	UPROPERTY(VisibleDefaultsOnly)
		class UPointLightComponent* PointLight2;
public:	
	AC03_Light();

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
		void OnLight();
	UFUNCTION()
		void OffLight();
	UFUNCTION()
		FString OnRandomLight(FLinearColor InColor);
};