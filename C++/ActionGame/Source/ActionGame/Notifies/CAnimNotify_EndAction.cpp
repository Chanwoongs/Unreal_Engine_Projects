#include "CAnimNotify_EndAction.h"
#include "Global.h"
#include "Characters/CPlayer.h"
#include "Actions/CAction.h"
#include "Actions/CActionData.h"
#include "Actions/CDoAction.h"
#include "Components/CActionComponent.h"

FString UCAnimNotify_EndAction::GetNotifyName_Implementation()const
{
	return "EndAction";
}

void UCAnimNotify_EndAction::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	// Notify에서 항상 체크
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	UCActionComponent* action = CHelpers::GetComponent<UCActionComponent>(MeshComp->GetOwner());
	CheckNull(action);

	UCAction* actionComponent = action->GetCurrent();
	CheckNull(actionComponent);
	ACDoAction* doAction = actionComponent->GetDoAction();
	CheckNull(doAction);
	doAction->End_Action();
}



