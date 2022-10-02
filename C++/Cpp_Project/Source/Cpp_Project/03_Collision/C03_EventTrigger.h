#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_EventTrigger.generated.h"

UCLASS()
class CPP_PROJECT_API AC03_EventTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	AC03_EventTrigger();

public:
	DECLARE_EVENT_OneParam(AC03_EventTrigger, FEventTrigger, int32);

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

protected:
	virtual void BeginPlay() override;

private:
	// Delegete �̱� ĳ��Ʈ -> ��������Ʈ �Լ� 1:1, ��Ƽ ĳ��Ʈ -> ��������Ʈ �ϳ��� ������ �Լ� ���� 
	UFUNCTION()
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // �Ķ���ʹ� �����ؿ���

private:
	FEventTrigger OnEventTrigger;
};
