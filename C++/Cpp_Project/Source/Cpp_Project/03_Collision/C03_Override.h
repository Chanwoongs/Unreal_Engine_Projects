#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Override.generated.h"

UCLASS()
class CPP_PROJECT_API AC03_Override : public AActor
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
	AC03_Override();

protected:
	virtual void BeginPlay() override;

protected:
	// BlueprintImplementableEvent : C++������ �������� �ʰ� �ش� Ŭ�����κ��� ��ӹ��� �ڽĿ��� �����ϰų� BP���� �����ؼ� ���
	UFUNCTION(BlueprintImplementableEvent)
		void ChangeColorRed();

	// BlueprintNativeEvent : C++���� ���Ǹ� �س��� �ʿ信 ���� BP���� �����Ǹ� �ؼ� ���
	UFUNCTION(BlueprintNativeEvent)
		void ChangeColorWhite();
		void ChangeColorWhite_Implementation(); // Implementation ���� ���̷� ������

private:
	UFUNCTION()
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // �Ķ���ʹ� �����ؿ���

	UFUNCTION()
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor); 
};
