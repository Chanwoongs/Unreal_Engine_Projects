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
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

protected:
	virtual void BeginPlay() override;

private:
	// Delegete 싱글 캐스트 -> 델리게이트 함수 1:1, 멀티 캐스트 -> 델리게이트 하나에 여러개 함수 연결 
	UFUNCTION()
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // 파라미터는 복사해오자

private:
	FEventTrigger OnEventTrigger;
};
