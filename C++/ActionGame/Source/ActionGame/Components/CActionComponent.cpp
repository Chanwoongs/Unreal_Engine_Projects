#include "CActionComponent.h"
#include "Global.h"
#include "Actions/CAction.h"
#include "Actions/CActionData.h"
#include "Actions/CAttachment.h"
#include "Actions/CEquipment.h"
#include "Actions/CDoAction.h"
#include "GameFramework/Character.h"

UCActionComponent::UCActionComponent()
{
}


void UCActionComponent::BeginPlay()
{
	Super::BeginPlay();

	ACharacter* character = Cast<ACharacter>(GetOwner());
	for (int32 i = 0; i < (int32)EActionType::Max; i++)
	{
		if (!!DataAssets[i])
		{
			DataAssets[i]->BeginPlay(character, &Datas[i]);
		}
	}
}

void UCActionComponent::SetMode(EActionType InType)
{
	// 무기가 같을 때 무기를 넣어줄 수 있도록, 같은 무기 해제
	if (Type == InType)
	{
		SetUnarmedMode();

		return;
	}
	else if (IsUnarmedMode() == false)
	{
		ACEquipment* equipment = Datas[(int32)Type]->GetEquipment();
		CheckNull(equipment);

		equipment->Unequip();
	}

	if (!!Datas[(int32)InType])
	{
		// 무기 장착
		ACEquipment* equipment = Datas[(int32)InType]->GetEquipment();
		CheckNull(equipment);

		equipment->Equip();
	}

	ChangeType(InType);
}


void UCActionComponent::ChangeType(EActionType InNewType)
{
	EActionType prevType = InNewType;
	Type = InNewType;

	if (OnActionTypeChanged.IsBound())
	{
		OnActionTypeChanged.Broadcast(prevType, InNewType);
	}
}

void UCActionComponent::SetUnarmedMode()
{
	if (!!Datas[(int32)Type])
	{
		ACEquipment* equipment = Datas[(int32)Type]->GetEquipment();
		CheckNull(equipment);

		equipment->Unequip();
	}

	ChangeType(EActionType::Unarmed);
}

void UCActionComponent::SetMutantMode()
{
	SetMode(EActionType::Mutant);
}

void UCActionComponent::SetFistMode()
{
	SetMode(EActionType::Fist);
}

void UCActionComponent::SetOneHandMode()
{
	SetMode(EActionType::OneHand);
}

void UCActionComponent::SetTwoHandMode()
{
	SetMode(EActionType::TwoHand);
}

void UCActionComponent::SetWarpMode()
{
	SetMode(EActionType::Warp);
}

void UCActionComponent::SetFireStormMode()
{
	SetMode(EActionType::FireStorm);
}

void UCActionComponent::SetIceBallMode()
{
	SetMode(EActionType::IceBall);
}

void UCActionComponent::SetRifleMode()
{
	SetMode(EActionType::Rifle);
}


void UCActionComponent::OffAllCollision()
{
	for (UCAction* data : Datas)
	{
		if (!!data == false) // NULL이라면 
			continue;

		if (!!data->GetAttachment() == false)
			continue;

		data->GetAttachment()->OffCollision();
	}
}

void UCActionComponent::DestroyAllActions()
{
	for (UCAction* data : Datas)
	{
		if (!!data == false) // NULL이라면 
			continue;

		if (!!data->GetAttachment())
			data->GetAttachment()->Destroy();

		if (!!data->GetEquipment())
			data->GetEquipment()->Destroy();

		if (!!data->GetDoAction())
			data->GetDoAction()->Destroy();
	}
}


void UCActionComponent::DoAction()
{
	CheckTrue(IsUnarmedMode());
	
	if (!!Datas[(int32)Type])
	{
		ACDoAction* action = Datas[(int32)Type]->GetDoAction();

		CheckNull(action);
		
		action->DoAction();
	}
}

void UCActionComponent::DoAim()
{
	SetAimMode(true);
	bAiming = true;
}

void UCActionComponent::UndoAim()
{
	SetAimMode(false);
	bAiming = false;
}

void UCActionComponent::SetAimMode(bool InAim)
{
	CheckTrue(IsUnarmedMode());

	if (!!Datas[(int32)Type])
	{
		ACDoAction* action = Datas[(int32)Type]->GetDoAction();
		
		if (!!action)
			InAim ? action->OnAim() : action->OffAim();
	}
}

