#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/CStateComponent.h"
#include "Engine/DataTable.h"
#include "CMontagesComponent.generated.h"

USTRUCT(BlueprintType)
struct FMontageData : public FTableRowBase // FTableRowBase ���κ��� ��ӹ����� ������ ���̺�� �ҷ����� ����ü�� ����ϰڴ�. 
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
