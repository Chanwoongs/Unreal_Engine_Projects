#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Box.generated.h"

UCLASS()
class CPP_PROJECT_API AC03_Box : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(VisibleDefaultsOnly)
		class UStaticMeshComponent* Mesh[3];

private:
	UMaterialInstanceDynamic* Materials[3];
	
	FVector WorldLocation[3];

public:	
	AC03_Box();

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION() // Delegate 반드시 UFUNCTION 추가 해야함
		void OnPhysics(int32 InIndex, FLinearColor InColor);
};
