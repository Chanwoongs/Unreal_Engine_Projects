#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_SpotLight.generated.h"

UCLASS()
class CPP_PROJECT_API AC03_SpotLight : public AActor
{
	GENERATED_BODY()
	
public:	
	AC03_SpotLight();

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(VisibleDefaultsOnly)
		class USpotLightComponent* SpotLights[3];


protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
		void OnLightColor(int32 InIndex, FLinearColor InColor);
};
