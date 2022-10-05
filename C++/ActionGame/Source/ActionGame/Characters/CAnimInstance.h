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
	virtual void NativeBeginPlay() override; // ������ ���۵ǰ� �ִϸ��̼��� �÷��̵� �� ȣ��
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;// ���ӻӸ��� �ƴ϶� ������ ��Ȳ������ �ִϸ��̼��� �÷��̵� �� ȣ��
};
