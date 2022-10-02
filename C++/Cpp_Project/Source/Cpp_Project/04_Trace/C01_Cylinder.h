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
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(VisibleDefaultsOnly)
		class UStaticMeshComponent* Mesh;
	
public:	
	AC01_Cylinder();

protected:
	virtual void BeginPlay() override;

};
