#include "CDoAction_Throw.h"
#include "Global.h"
#include "CAim.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

void ACDoAction_Throw::BeginPlay()
{
	Super::BeginPlay();

	// NewObject : BeginPlay ���� ���� �Ҵ� ����, ������ �÷��ǿ� ���� �ڵ����� ���ŵǵ��� ���ִ� �Լ�
	Aim = NewObject<UCAim>(); 
	//Aim->ConditionalFinishDestroy(); �ٷ� ����, BeginDestory�� ������ �÷��Ϳ� ����
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