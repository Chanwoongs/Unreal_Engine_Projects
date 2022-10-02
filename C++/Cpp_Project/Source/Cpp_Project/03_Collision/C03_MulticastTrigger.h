#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_MulticastTrigger.generated.h"

// Multicast Delegate (return type�� ���� �� ����)
DECLARE_MULTICAST_DELEGATE_TwoParams(FMultiLightBeginOverlap, int32, FLinearColor);

UCLASS()
class CPP_PROJECT_API AC03_MulticastTrigger : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;
	
public:	
	AC03_MulticastTrigger();

protected:
	virtual void BeginPlay() override;

private:
	// Delegete �̱� ĳ��Ʈ -> ��������Ʈ �Լ� 1:1, ��Ƽ ĳ��Ʈ -> ��������Ʈ �ϳ��� ������ �Լ� ���� 
	UFUNCTION()
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // �Ķ���ʹ� �����ؿ���
	UFUNCTION()
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:
	FMultiLightBeginOverlap OnMultiLightBeginOverlap;

};
