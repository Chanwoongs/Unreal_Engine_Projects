#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_LineTrace.generated.h"

// 일반 Delegate와 차이 : BP에서도 사용가능하다, Parameter type 과 name까지 맞추어 주어야한다.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTraceResult, class AActor*, InActor, FLinearColor, InColor);

UCLASS()
class CPP_PROJECT_API AC02_LineTrace : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	
public:	
	AC02_LineTrace();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
		void StartJump(class AActor* InActor, FLinearColor InColor); // 인자 이름까지 같아야 한다.

protected:
	UFUNCTION(BlueprintCallable)
		void RestoreColor(class ACPlayer* InPlayer);

private:
	TArray<class AC01_Cylinder*> Cylinders;

public:
	UPROPERTY(BlueprintAssignable) // 얘를 붙혀줘야 BP에서 사용가능하다
		FTraceResult OnTraceResult;
};
