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
		//U접두사 : UObject에서 상속받은 클래스
		class UStaticMeshComponent* Mesh;

protected:
	virtual void BeginPlay() override;
	
private:
	class UMaterialInstanceDynamic* Material;

private:
	//Delegate에 의해 콜이 되는 함수는 전부 UFUNTION이 붙어야함
	UFUNCTION()
		void ChangeColor();
};
