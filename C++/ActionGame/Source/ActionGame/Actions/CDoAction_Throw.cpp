#include "CDoAction_Throw.h"
#include "Global.h"
#include "CAim.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

void ACDoAction_Throw::BeginPlay()
{
	Super::BeginPlay();

	// NewObject : BeginPlay 이후 동적 할당 수행, 가비지 컬렉션에 의해 자동으로 제거되도록 해주는 함수
	Aim = NewObject<UCAim>(); 
	//Aim->ConditionalFinishDestroy(); 바로 삭제, BeginDestory는 가비지 컬렉터에 등재
	Aim->BeginPlay(OwnerCharacter);
}


void ACDoAction_Throw::DoAction()
{
	CheckFalse(*bEquipped);

	CheckFalse(State->IsIdleMode());
	State->SetActionMode();

}

void ACDoAction_Throw::Begin_Action()
{
}

void ACDoAction_Throw::End_Action()
{
	State->SetIdleMode();
	Status->SetMove();
}

void ACDoAction_Throw::OnAim()
{
	Aim->OnZoom();
}

void ACDoAction_Throw::OffAim()
{
	Aim->OffZoom();
}

void ACDoAction_Throw::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Aim->Tick(DeltaTime);
}