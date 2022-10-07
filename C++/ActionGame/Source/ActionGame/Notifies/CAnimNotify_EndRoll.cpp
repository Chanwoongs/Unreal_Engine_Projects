#include "CAnimNotify_EndRoll.h"
#include "Global.h"
#include "Characters/CPlayer.h" // 적도 피하는 기능이 있다면 Interface로 구현


FString UCAnimNotify_EndRoll::GetNotifyName_Implementation()const
{
	return "Roll";
}

void UCAnimNotify_EndRoll::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	// Notify에서 항상 체크
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	player->End_Roll();
}


