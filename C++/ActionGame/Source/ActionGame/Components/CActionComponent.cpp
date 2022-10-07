#include "CActionComponent.h"
#include "Global.h"
#include "Actions/CActionData.h"
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
		if (!!Datas[i])
		{
			Datas[i]->BeginPlay(character);
		}
	}
}

void UCActionComponent::SetMode(EActionType InType)
{
	// ���Ⱑ ���� �� ���⸦ �־��� �� �ֵ���, ���� ���� ����
	if (Type == InType)
	{
		SetUnarmedMode();

		return;
	}
	else if (IsUnarmedMode() == false)
	{

	}


	// ���� ����
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
	SetMode(EActionType::Unarmed);
}

void UCActionComponent::SetOneHandMode()
{
	SetMode(EActionType::OneHand);
}

void UCActionComponent::SetTwoHandMode()
{
	SetMode(EActionType::TwoHand);
}

