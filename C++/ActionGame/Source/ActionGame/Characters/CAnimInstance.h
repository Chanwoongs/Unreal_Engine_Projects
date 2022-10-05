#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CAnimInstance.generated.h"

UCLASS()
class ACTIONGAME_API UCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		float Speed;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		float Direction;

public:
	virtual void NativeBeginPlay() override; // 게임이 시작되고 애니메이션이 플레이될 때 호출
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;// 게임뿐만이 아니라 에디터 상황에서도 애니메이션이 플레이될 때 호출
};
