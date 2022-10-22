#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CFeetComponent.generated.h"

USTRUCT(BlueprintType)
struct FFeetData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FVector LeftDistance; // �޹��� ������ ���� �� �پ�� �� ������ ����

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FVector RightDistance; // �������� ������ ���� �� �پ�� �� ������ ����
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONGAME_API UCFeetComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InverseKinemetics")
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType = EDrawDebugTrace::None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InverseKinemetics")
		FName LeftSocket = "Foot_L";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InverseKinemetics")
		FName RightSocket = "Foot_R";

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InverseKinemetics")
		float TraceDistance = 55.0f; // ������ ����

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InverseKinemetics")
		float InterpSpeed = 17.0f; // ������ ����

public:
	FORCEINLINE const FFeetData& GetData() { return Data; }

public:
	UCFeetComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	void Trace(FName InSocket, float& OutDistance); // ���̳� ���� �� �� ��밡��

private:
	class ACharacter* OwnerCharacter;

	FFeetData Data;
};
