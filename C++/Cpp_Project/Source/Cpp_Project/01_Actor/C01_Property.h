#pragma once

#include "CoreMinimal.h" // 언리얼에서 필수적으로 사용될 클래스들이 모여있는 헤더
#include "GameFramework/Actor.h"
#include "C01_Property.generated.h" // generated.h uclass GENERATED_BODY() 짝꿍

UCLASS()
class CPP_PROJECT_API AC01_Property : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
		int A = 10;
	UPROPERTY(EditInstanceOnly)
		int B = 20;
	UPROPERTY(EditDefaultsOnly)
		int C;

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int Test = 20;

public:	
	AC01_Property();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
