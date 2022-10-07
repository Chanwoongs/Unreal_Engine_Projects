#include "CAnimNotify_EndRoll.h"
#include "Global.h"
#include "Characters/CPlayer.h" // ���� ���ϴ� ����� �ִٸ� Interface�� ����


FString UCAnimNotify_EndRoll::GetNotifyName_Implementation()const
{
	return "Roll";
}

void UCAnimNotify_EndRoll::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	// Notify���� �׻� üũ
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	ACPlayer* player = Cast<ACPlayer>(MeshComp->GetOwner());
	CheckNull(player);

	player->End_Roll();
}


