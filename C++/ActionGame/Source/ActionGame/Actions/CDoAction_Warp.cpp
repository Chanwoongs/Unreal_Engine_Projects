#include "CDoAction_Warp.h"
#include "Global.h"
#include "CAttachment.h"
#include "GameFramework/Character.h"
#include "Components/DecalComponent.h"

void ACDoAction_Warp::BeginPlay()
{
	Super::BeginPlay();

	// 캐릭터에 붙어있는 모든 Actor들 중 Warp 찾아오기
	for (AActor* actor : OwnerCharacter->Children)
	{
		if (actor->IsA<ACAttachment>() && actor->GetActorLabel().Contains("Warp"))
		{
			Decal = CHelpers::GetComponent<UDecalComponent>(actor);

			break;
		}
	}
}

void ACDoAction_Warp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CLog::Log(*bEquipped);
}

void ACDoAction_Warp::DoAction()
{
}

void ACDoAction_Warp::Begin_Action()
{
}

void ACDoAction_Warp::End_Action()
{
}


