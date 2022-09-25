#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_SpawnActor.generated.h"

UCLASS()
class CPP_PROJECT_API AC02_SpawnActor : public AActor
{
	GENERATED_BODY()
		
protected:
	UPROPERTY(VisibleDefaultsOnly)
		//U접두사 : UObject에서 상속받은 클래스
		class UStaticMeshComponent* Mesh;
	
public:	
	AC02_SpawnActor();

protected:
	virtual void BeginPlay() override;

public:	

};
