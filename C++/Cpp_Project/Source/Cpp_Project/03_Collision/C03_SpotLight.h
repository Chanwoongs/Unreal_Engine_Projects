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
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

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
