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
		class USceneComponent* Scene; // �θ� �ڽİ��踦 ������ �� �ִ� Transform�� ������ ������Ʈ

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
	UFUNCTION() // Delegate�� ������ ������� ��
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // �Ķ���ʹ� �����ؿ���

	UFUNCTION() 
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

};

// ActorBeginOverlap �� ȣ��Ǵ� ����
// �浹�Ϸ��� �� ���Ϳ� �浹ü�� �ּ��� �ϳ� �̻� ����
// �ش� �浹ü�� Generate Overlap �̺�Ʈ�� ���� �־�� ����
