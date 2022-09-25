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
		// ���÷��� : �ڷ����� Ÿ���� ������ �ٷ� �� �ֵ��� ���ִ� ���
		// TSubClassOf<class T> -> �ش� Ŭ���� ������ Ŭ������ �ҷ��´�. 
		TSubclassOf<class AC02_SpawnActor> SpawnClass[3];
public:	
	AC03_Spawner();

protected:
	virtual void BeginPlay() override;

private:
	// �ܺο��� ���� Ŭ������ ������ �ӵ��� ���� ���� �����Ѵ�.
	class AC02_SpawnActor* SpawnActors[3];
};
