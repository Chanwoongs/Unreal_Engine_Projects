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

private:
	bool bExist; // 다음 콤보가 존재하느냐
	bool bEnable; // 다음 콤보가 허용이 됐느냐 
	bool bLast; // 콤보의 마지막이냐
	
	int32 Index; // 몇번째 콤보중이냐

};
