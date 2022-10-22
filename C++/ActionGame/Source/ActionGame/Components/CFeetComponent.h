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
		FVector LeftDistance; // 왼발이 떨어져 있을 때 붙어야 할 곳과의 간격

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FVector RightDistance; // 오른발이 떨어져 있을 때 붙어야 할 곳과의 간격
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
		float TraceDistance = 55.0f; // 적당히 조정

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InverseKinemetics")
		float InterpSpeed = 17.0f; // 적당히 조정

public:
	FORCEINLINE const FFeetData& GetData() { return Data; }

public:
	UCFeetComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	void Trace(FName InSocket, float& OutDistance); // 본이나 소켓 둘 다 사용가능

private:
	class ACharacter* OwnerCharacter;

	FFeetData Data;
};
