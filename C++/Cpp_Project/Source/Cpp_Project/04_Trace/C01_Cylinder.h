#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Cylinder.generated.h"

UCLASS()
class CPP_PROJECT_API AC01_Cylinder : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(VisibleDefaultsOnly)
		class UStaticMeshComponent* Mesh;
	
public:	
	AC01_Cylinder();

protected:
	virtual void BeginPlay() override;

};
