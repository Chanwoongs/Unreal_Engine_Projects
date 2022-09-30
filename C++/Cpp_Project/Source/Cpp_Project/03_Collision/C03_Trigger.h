#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Trigger.generated.h"

// Delegate ���� ��ũ��
DECLARE_DELEGATE(FBoxLightBeginOverlap); // return void __(void) -> return type ���� �Ķ���͵� ����
DECLARE_DELEGATE(FBoxLightEndOverlap);
DECLARE_DELEGATE_RetVal_OneParam(FString, FBoxLightRandomBeginOverlap, FLinearColor); // return type, name, parameter

UCLASS()
class CPP_PROJECT_API AC03_Trigger : public AActor
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
	AC03_Trigger();

protected:
	virtual void BeginPlay() override;

public:	

private:
	// Delegete �̱� ĳ��Ʈ -> ��������Ʈ �Լ� 1:1, ��Ƽ ĳ��Ʈ -> ��������Ʈ �ϳ��� ������ �Լ� ���� 
	UFUNCTION() 
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // �Ķ���ʹ� �����ؿ���
	UFUNCTION()
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);


public:
	// �������� �ܺο��� ���ϰ� �����ϱ� ���� Public, �Լ��� �����ϴ� ������ ���
	FBoxLightBeginOverlap OnBoxLightBeginOverlap;
	FBoxLightEndOverlap OnBoxLightEndOverlap;
	FBoxLightRandomBeginOverlap OnBoxLightRandomBeginOverlap;
};