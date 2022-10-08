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
	// 부모에서 UFUNCTION을 붙혔기 때문에 안붙힌다.	
	virtual void OnAttachmentBeginOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter) override;
	virtual void OnAttachmentEndOverlap(class ACharacter* InAttacker, class AActor* InAttackCauser, class ACharacter* InOtherCharacter) override;
	virtual void OnAttachmentCollision() override;
	virtual void OffAttachmentCollision() override;

private:
	bool bExist; // 다음 콤보가 존재하느냐
	bool bEnable; // 다음 콤보가 허용이 됐느냐 
	bool bLast; // 콤보의 마지막이냐
	
	int32 Index; // 몇번째 콤보중이냐

	TArray<ACharacter*> HittedCharacters;
};
