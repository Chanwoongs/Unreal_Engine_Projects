#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_Log.generated.h"

UCLASS()
class CPP_PROJECT_API AC02_Log : public AActor
{
	GENERATED_BODY()
	
public:	
	AC02_Log();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
