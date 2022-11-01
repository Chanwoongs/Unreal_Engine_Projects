#include "CAIController.h"
#include "Global.h"

ACAIController::ACAIController()
{
	PrimaryActorTick.bCanEverTick = true;
	
	CHelpers::CreateActorComponent<UBlackboardComponent>(this, &Blackboard, "Blackboard");
	CHelpers::CreateActorComponent<UAIPerceptionComponent>(this, &Perception, "Perception");

}