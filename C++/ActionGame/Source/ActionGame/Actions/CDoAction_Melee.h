#pragma once

#include "CoreMinimal.h"
#include "Actions/CDoAction.h"
#include "CDoAction_Melee.generated.h"

UCLASS()
class ACTIONGAME_API ACDoAction_Melee : public ACDoAction
{
	GENERATED_BODY()

public:
	FORCEINLINE void EnableCombo() { bEnable = true; }
	FORCEINLINE void DisableCombo() { bEnable = false; }
	
public:
	virtual void DoAction() override;
	virtual void Begin_Action() override;
	virtual void End_Action() override;

public:
	// �θ𿡼� UFUNCTION�� ������ ������ �Ⱥ�����.	
	virtual void OnAttachmentBeginOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter) override;
	virtual void OnAttachmentEndOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter) override;
	virtual void OnAttachmentCollision() override;
	virtual void OffAttachmentCollision() override;

private:
	bool bExist; // ���� �޺��� �����ϴ���
	bool bEnable; // ���� �޺��� ����� �ƴ��� 
	bool bLast; // �޺��� �������̳�
	
	int32 Index; // ���° �޺����̳�

	TArray<ACharacter*> HittedCharacters;
};
