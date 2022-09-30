#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Trigger.generated.h"

// Delegate 정의 매크로
DECLARE_DELEGATE(FBoxLightBeginOverlap); // return void __(void) -> return type 없고 파라미터도 없다
DECLARE_DELEGATE(FBoxLightEndOverlap);
DECLARE_DELEGATE_RetVal_OneParam(FString, FBoxLightRandomBeginOverlap, FLinearColor); // return type, name, parameter

UCLASS()
class CPP_PROJECT_API AC03_Trigger : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

public:	
	AC03_Trigger();

protected:
	virtual void BeginPlay() override;

public:	

private:
	// Delegete 싱글 캐스트 -> 델리게이트 함수 1:1, 멀티 캐스트 -> 델리게이트 하나에 여러개 함수 연결 
	UFUNCTION() 
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // 파라미터는 복사해오자
	UFUNCTION()
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);


public:
	// 변수지만 외부에서 편하게 연결하기 위해 Public, 함수를 연결하는 변수로 취급
	FBoxLightBeginOverlap OnBoxLightBeginOverlap;
	FBoxLightEndOverlap OnBoxLightEndOverlap;
	FBoxLightRandomBeginOverlap OnBoxLightRandomBeginOverlap;
};