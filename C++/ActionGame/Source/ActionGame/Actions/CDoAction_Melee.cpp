#include "CDoAction_Melee.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

void ACDoAction_Melee::DoAction()
{
	Super::DoAction();

	CheckFalse(Datas.Num() > 0);

	// �޺� ��� ���� üũ
	if (bEnable == true)
	{
		bExist = true;
		bEnable = false;

		return;
	}

	CheckFalse(State->IsIdleMode());

	State->SetActionMode();

	const FDoActionData& data = Datas[0];
	OwnerCharacter->PlayAnimMontage(data.AnimMontage, data.PlayRatio, data.StartSection);

	data.bCanMove ? Status->SetMove() : Status->SetStop();
}

void ACDoAction_Melee::Begin_Action()
{
	Super::Begin_Action();

	CheckFalse(bExist);
	bExist = false;

	// StopAnimMontage : ���� �÷��� ���� ��� ��Ÿ�� ����, ���Ŀ� Fist�� ������ ������ ��� ����ϱ� ���Ͽ�
	OwnerCharacter->StopAnimMontage(); 

	Index++;

	const FDoActionData& data = Datas[Index];
	OwnerCharacter->PlayAnimMontage(data.AnimMontage, data.PlayRatio, data.StartSection);

	data.bCanMove ? Status->SetMove() : Status->SetStop();
}

void ACDoAction_Melee::End_Action()
{
	Super::End_Action();

	const FDoActionData& data = Datas[Index];
	OwnerCharacter->StopAnimMontage(data.AnimMontage); // ���� ���۸� �ߴ�

	State->SetIdleMode();
	Status->SetMove();

	Index = 0;
}
