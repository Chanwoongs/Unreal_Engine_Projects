#include "CAnimNotify_EndBackstep.h"
#include "Global.h"
#include "Characters/CPlayer.h" // 적도 피하는 기능이 있다면 Interface로 구현

FString UCAnimNotify_EndBackstep::GetNotifyName_Implementation()const
{
	return "Backstep";
}

void UCAnimNotify_EndBackstep::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	// Notify에서 항상 체크
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	player->End_Backstep();
}
