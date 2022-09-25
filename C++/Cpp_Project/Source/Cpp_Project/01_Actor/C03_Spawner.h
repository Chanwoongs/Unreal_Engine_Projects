#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Spawner.generated.h"

UCLASS()
class CPP_PROJECT_API AC03_Spawner : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditDefaultsOnly)
		// 리플렉션 : 자료형의 타입을 변수로 다룰 수 있도록 해주는 기능
		// TSubClassOf<class T> -> 해당 클래스 이하의 클래스만 불러온다. 
		TSubclassOf<class AC02_SpawnActor> SpawnClass[3];
public:	
	AC03_Spawner();

protected:
	virtual void BeginPlay() override;

private:
	// 외부에서 쓰는 클래스는 컴파일 속도를 위해 전방 선언한다.
	class AC02_SpawnActor* SpawnActors[3];
};
