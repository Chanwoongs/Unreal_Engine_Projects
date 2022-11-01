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
	// Foot_L 까지 부모에서부터 누적되어온 회전공간의 높이가 X축이 된다.
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FVector LeftDistance; // 왼발이 떨어져 있을 때 붙어야 할 곳과의 간격, X축만 사용

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FVector RightDistance; // 오른발이 떨어져 있을 때 붙어야 할 곳과의 간격, X축만 사용 

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FVector PelvisDistance; // 허리 높이, Z축만 사용
	// Root와 Pelvis는 월드 공간 상의 회전 방향을 사용해야함
	// Root는 움직이기 위한 가상 본이며 Pelvis는 본의 시작이다.
	// 본의 시작 공간은 항상 월드 공간이다.
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FRotator LeftRotation;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		FRotator RightRotation;
};


UCLASS( ClassGroup=(GameProject), meta=(BlueprintSpawnableComponent) )
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
		float InterpSpeed = 17.0f; // 적당히 

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InverseKinemetics")
		float OffsetDistance = 5.0f; // 발과 땅사이의 고정 간격 모델이 떠있기 때문에 보정

public:
	FORCEINLINE const FFeetData& GetData() { return Data; }

public:
	UCFeetComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	void Trace(FName InSocket, float& OutDistance, FRotator& OutRotation); // 본이나 소켓 둘 다 사용가능

private:
	class ACharacter* OwnerCharacter;

	FFeetData Data;
};
