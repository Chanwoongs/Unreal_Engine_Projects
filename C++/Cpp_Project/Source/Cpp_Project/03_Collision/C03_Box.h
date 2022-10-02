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
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

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
	UFUNCTION() // Delegate �ݵ�� UFUNCTION �߰� �ؾ���
		void OnPhysics(int32 InIndex, FLinearColor InColor);
};
