#include "CAnimNotify_Hitted.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CActionComponent.h"
#include "Actions/CAction.h"
#include "Actions/CDoAction_Melee.h"

FString UCAnimNotify_Hitted::GetNotifyName_Implementation()const
{
	return "Hitted";
}

void UCAnimNotify_Hitted::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	// Notify에서 항상 체크
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	ACharacter* character = Cast<ACharacter>(MeshComp->GetOwner());
	CheckNull(character);

	UCStateComponent* state = CHelpers::GetComponent<UCStateComponent>(character);
	CheckNull(state);

	state->SetIdleMode();

	UCActionComponent* action = CHelpers::GetComponent<UCActionComponent>(character);
	CheckNull(action);
	ACDoAction* doAction = action->GetCurrent()->GetDoAction();
	CheckNull(doAction);
	doAction->End_Action();



}



