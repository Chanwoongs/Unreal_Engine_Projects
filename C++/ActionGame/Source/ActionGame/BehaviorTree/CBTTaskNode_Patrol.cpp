#include "CBTTaskNode_Patrol.h"
#include "Global.h"
#include "Characters/CAIController.h"
#include "Characters/CEnemy_AI.h"
#include "Components/CPatrolComponent.h"

UCBTTaskNode_Patrol::UCBTTaskNode_Patrol()
{
	bNotifyTick = true; // Tick을 하기위해

	NodeName = "Patrol";
}

EBTNodeResult::Type UCBTTaskNode_Patrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());
	UCPatrolComponent* patrol = CHelpers::GetComponent<UCPatrolComponent>(ai);

	FVector location;
	float acceptance;

	if (patrol->GetMoveTo(location, acceptance) == false)
		return EBTNodeResult::Failed;

	return EBTNodeResult::InProgress;
}

void UCBTTaskNode_Patrol::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());
	UCPatrolComponent* patrol = CHelpers::GetComponent<UCPatrolComponent>(ai);

	FVector location;
	float acceptance;

	patrol->GetMoveTo(location, acceptance);

	// AIMoveTo 함수를 내부적으로 호출
	EPathFollowingRequestResult::Type type = controller->MoveToLocation(location, acceptance, false);

	if (type == EPathFollowingRequestResult::Failed) // 갈 수 없는 위치다
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);

		return;
	}

	if (type == EPathFollowingRequestResult::AlreadyAtGoal) // 현재 도달 했다
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

		patrol->UpdateNextIndex();
	}
}

