#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_SpawnActor.generated.h"

UCLASS()
class CPP_PROJECT_API AC02_SpawnActor : public AActor
{
	GENERATED_BODY()

public:
	AC02_SpawnActor();
		
protected:
	UPROPERTY(VisibleDefaultsOnly)
		//U���λ� : UObject���� ��ӹ��� Ŭ����
		class UStaticMeshComponent* Mesh;

protected:
	virtual void BeginPlay() override;
	
private:
	class UMaterialInstanceDynamic* Material;

private:
	//Delegate�� ���� ���� �Ǵ� �Լ��� ���� UFUNTION�� �پ����
	UFUNCTION()
		void ChangeColor();
};
