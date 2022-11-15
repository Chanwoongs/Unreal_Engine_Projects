#include "CEnemy_AI.h"
#include "Global.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Components/CPatrolComponent.h"

ACEnemy_AI::ACEnemy_AI()
{
	CHelpers::CreateActorComponent<UCPatrolComponent>(this, &Patrol, "Patrol");
}

void ACEnemy_AI::BeginPlay()
{
	Super::BeginPlay();
}

void ACEnemy_AI::Hitted()
{
	Super::Hitted();
}
