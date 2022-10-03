#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CAnimInstance.generated.h"

UCLASS()
class CPP_PROJECT_API UCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation") // BlueprintReadOnly는 상속 받기 때문에 protected를 사용해야함
		float Speed;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation") // BlueprintReadOnly는 상속 받기 때문에 protected를 사용해야함
		float Direction;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		bool bEquipped;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		bool bAiming;
public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	class ACharacter* OwnerCharacter; // Player, Enemy 모두 무기를 가질 수 있기 때문에 Character로 불러오기
};
