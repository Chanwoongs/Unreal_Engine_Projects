#include "CBTService_Wizard.h"
#include "Global.h"
#include "Characters/CPlayer.h"
#include "Characters/CAIController.h"
#include "Characters/CEnemy_AI.h"
#include "Components/CBehaviorComponent.h"
#include "Components/CStateComponent.h"

UCBTService_Wizard::UCBTService_Wizard()
{
	NodeName = "Wizard"; // 노드 이름 세팅
}

void UCBTService_Wizard::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	ACAIController* controller = Cast<ACAIController>(OwnerComp.GetOwner());
	UCBehaviorComponent* behavior = CHelpers::GetComponent<UCBehaviorComponent>(controller);

	ACEnemy_AI* ai = Cast<ACEnemy_AI>(controller->GetPawn());
	UCStateComponent* state = CHelpers::GetComponent<UCStateComponent>(ai);

	if (state->IsHittedMode())
	{
		behavior->SetHittedMode();

		return;
	}

	ACPlayer* target = behavior->GetTargetPlayer();
	if (target == NULL)
	{
		// Wait Mode
		behavior->SetWaitMode();
		controller->ClearFocus(EAIFocusPriority::Default);

		return;
	}
	else
	{
		UCStateComponent* targetState = CHelpers::GetComponent<UCStateComponent>(target);
		if (targetState->IsDeadMode())
		{
			behavior->SetWaitMode();

			return;
		}
	}

	controller->SetFocus(target); // 적 발견시 바라봄

	float action = controller->GetSightRadius();
	float distance = ai->GetDistanceTo(target);

	if (distance < controller->GetBehaviorRange())
	{
		behavior->SetAvoidMode();

		return;
	}

	if (distance < action)
	{
		behavior->SetActionMode();

		return;
	}
}
