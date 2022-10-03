#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CAnimInstance.generated.h"

UCLASS()
class CPP_PROJECT_API UCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation") // BlueprintReadOnly�� ��� �ޱ� ������ protected�� ����ؾ���
		float Speed;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation") // BlueprintReadOnly�� ��� �ޱ� ������ protected�� ����ؾ���
		float Direction;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		bool bEquipped;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		bool bAiming;
public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	class ACharacter* OwnerCharacter; // Player, Enemy ��� ���⸦ ���� �� �ֱ� ������ Character�� �ҷ�����
};
