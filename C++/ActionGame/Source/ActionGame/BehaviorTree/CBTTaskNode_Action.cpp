#include "CBTTaskNode_Action.h"
#include "Global.h"
#include "Characters/CAIController.h"
#include "Characters/CEnemy_AI.h"
#include "Actions/CDoAction.h"
#include "Actions/CAction.h"
#include "Components/CActionComponent.h"
#include "Components/CStateComponent.h"

UCBTTaskNode_Action::UCBTTaskNode_Action()
{
	bNotifyTick = true; // Tick�� �ϱ�����

	NodeName = "Action";
}

EBTNodeResult::Type UCBTTaskNode_Action::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());
	UCActionComponent* actionComp = CHelpers::GetComponent<UCActionComponent>(ai);
	UCAction* action = actionComp->GetCurrent();
	ACDoAction* doAction = action->GetDoAction();
	if (!!doAction)
	{
		doAction->DoAction();
	}
	TotalTime = 0.0f;

	return EBTNodeResult::InProgress;
	// InProgress ���´� ���� �½�ũ�� ������� ���� ���·�
	// ���� �½�ũ�� ��� �����ϰ� �ִ� ���°� �ȴ�.
}

void UCBTTaskNode_Action::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());
	UCStateComponent* state = CHelpers::GetComponent<UCStateComponent>(ai);

	TotalTime += DeltaSeconds;

	// Task�� �Ϸᰡ �Ǹ�
	if (state->IsIdleMode() && TotalTime > Delay)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}

}
