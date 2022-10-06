#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/CStateComponent.h"
#include "Engine/DataTable.h"
#include "CMontagesComponent.generated.h"

USTRUCT(BlueprintType)
struct FMontageData : public FTableRowBase // FTableRowBase 으로부터 상속받으면 데이터 테이블로 불러들일 구조체를 사용하겠다. 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		EStateType Type;

	UPROPERTY(EditAnywhere)
		class UAnimMontage* AnimMontage;

	UPROPERTY(EditAnywhere)
		float PlayRatio = 1.0f;

	UPROPERTY(EditAnywhere)
		FName StartSection;
};


UCLASS(ClassGroup = (GameProject), meta = (BlueprintSpawnableComponent))
class ACTIONGAME_API UCMontagesComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Category = "DataTable")
		class UDataTable* DataTable;

public:
	UCMontagesComponent();

protected:
	virtual void BeginPlay() override;



};
