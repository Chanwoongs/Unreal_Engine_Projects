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
		class USceneComponent* Scene; // 부모 자식관계를 정의할 수 있는 Transform만 소유한 컴포넌트

	UPROPERTY(VisibleDefaultsOnly)
		class UBoxComponent* Box;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

public:	
	AC03_Override();

protected:
	virtual void BeginPlay() override;

protected:
	// BlueprintImplementableEvent : C++에서는 정의하지 않고 해당 클래스로부터 상속받은 자식에서 정의하거나 BP에서 정의해서 사용
	UFUNCTION(BlueprintImplementableEvent)
		void ChangeColorRed();

	// BlueprintNativeEvent : C++에서 정의를 해놓고 필요에 의해 BP에서 재정의를 해서 사용
	UFUNCTION(BlueprintNativeEvent)
		void ChangeColorWhite();
		void ChangeColorWhite_Implementation(); // Implementation 붙힌 아이로 재정의

private:
	UFUNCTION()
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // 파라미터는 복사해오자

	UFUNCTION()
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor); 
};
