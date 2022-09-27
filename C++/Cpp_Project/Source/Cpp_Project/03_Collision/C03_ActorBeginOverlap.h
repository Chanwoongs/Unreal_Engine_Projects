#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_ActorBeginOverlap.generated.h"

UCLASS()
class CPP_PROJECT_API AC03_ActorBeginOverlap : public AActor
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
	AC03_ActorBeginOverlap();

protected:
	virtual void BeginPlay() override;

public:	

private:
	UFUNCTION() // Delegate에 무조건 붙혀줘야 함
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // 파라미터는 복사해오자

	UFUNCTION() 
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

};

// ActorBeginOverlap 이 호출되는 조건
// 충돌하려는 각 액터에 충돌체가 최소한 하나 이상 존재
// 해당 충돌체는 Generate Overlap 이벤트가 켜져 있어야 수행
