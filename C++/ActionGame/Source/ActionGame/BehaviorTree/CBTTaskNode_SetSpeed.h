#pragma once

#include "CoreMinimal.h"
#include "Components/CStatusComponent.h"
#include "BehaviorTree/BTTaskNode.h"
#include "CBTTaskNode_SetSpeed.generated.h"

UCLASS()
class ACTIONGAME_API UCBTTaskNode_SetSpeed : public UBTTaskNode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
		ECharacterSpeed SpeedType;

public:
	UCBTTaskNode_SetSpeed();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
