#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_LineTrace.generated.h"

// �Ϲ� Delegate�� ���� : BP������ ��밡���ϴ�, Parameter type �� name���� ���߾� �־���Ѵ�.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTraceResult, class AActor*, InActor, FLinearColor, InColor);

UCLASS()
class CPP_PROJECT_API AC02_LineTrace : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

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
		void StartJump(class AActor* InActor, FLinearColor InColor); // ���� �̸����� ���ƾ� �Ѵ�.

protected:
	UFUNCTION(BlueprintCallable)
		void RestoreColor(class ACPlayer* InPlayer);

private:
	TArray<class AC01_Cylinder*> Cylinders;

public:
	UPROPERTY(BlueprintAssignable) // �긦 ������� BP���� ��밡���ϴ�
		FTraceResult OnTraceResult;
};
