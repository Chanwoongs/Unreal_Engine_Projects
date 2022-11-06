#include "CEnvQueryContext_Player.h"
#include "Global.h"
#include "Characters/CEnemy_AI.h"
#include "Characters/CPlayer.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "Components/CBehaviorComponent.h"

void UCEnvQueryContext_Player::ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const
{
	Super::ProvideContext(QueryInstance, ContextData);

	// 현재 실행중인 Owner 가져오기
	ACEnemy_AI* ai = Cast<ACEnemy_AI>(QueryInstance.Owner.Get());
	UCBehaviorComponent* behavior = CHelpers::GetComponent<UCBehaviorComponent>(ai->GetController());

	if (!!behavior->GetTargetPlayer())
	{
		// 리턴할 타입 의미 총 4가지 있다. Actor Actors Location Locations
		UEnvQueryItemType_Actor::SetContextHelper(ContextData, behavior->GetTargetPlayer());
	}
}
