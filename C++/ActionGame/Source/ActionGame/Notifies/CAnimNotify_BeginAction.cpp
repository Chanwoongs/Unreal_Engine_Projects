#include "CAnimNotify_BeginAction.h"
#include "Global.h"
#include "Characters/CPlayer.h"
#include "Actions/CAction.h"
#include "Actions/CActionData.h"
#include "Actions/CDoAction.h"
#include "Components/CActionComponent.h"

FString UCAnimNotify_BeginAction::GetNotifyName_Implementation()const
{
	return "BeginAction";
}

void UCAnimNotify_BeginAction::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	// Notify에서 항상 체크
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	UCActionComponent* action = CHelpers::GetComponent<UCActionComponent>(MeshComp->GetOwner());
	CheckNull(action);

	action->GetCurrent()->GetDoAction()->Begin_Action();
}




