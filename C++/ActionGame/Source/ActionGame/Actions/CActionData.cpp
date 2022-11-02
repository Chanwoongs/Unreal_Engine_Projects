#include "CActionData.h"
#include "Global.h"
#include "CAction.h"
#include "CEquipment.h"
#include "CAttachment.h"
#include "CDoAction.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"

void UCActionData::BeginPlay(class ACharacter* InOwnerCharacter, UCAction** OutAction)
{
	FTransform transform;

	ACAttachment* attachment = NULL;

	// Attachment
	if (!!AttachmentClass)
	{
		attachment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACAttachment>(AttachmentClass, transform, InOwnerCharacter);
		attachment->SetActorLabel(GetLabelName(InOwnerCharacter, "Attachment")); // 출력되는 이름 변경

		UGameplayStatics::FinishSpawningActor(attachment, transform); // 등장 확정
	}
	
	ACEquipment* equipment = NULL;;

	// Equipment
	// 기존 SpawnActor 사용시에는 등장과 동시에 BeginPlay가 호출된다
	// 객체만 생성한 후 값을 세팅하고 등장을 시키는 방법을 사용할 것이다
	// 이걸 SpawnActorDeffered 라고 함
	
	// 객체 생성만 완료된 것이고, 등장하진 않았다
	if (!!EquipmentClass)
	{
		equipment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACEquipment>(EquipmentClass, transform, InOwnerCharacter);
		equipment->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		equipment->SetActorLabel(GetLabelName(InOwnerCharacter, "Equipment"));
		equipment->SetData(EquipmentData);
		equipment->SetColor(EquipmentColor);

		UGameplayStatics::FinishSpawningActor(equipment, transform); // 등장 확정

		if (!!attachment)
		{
			equipment->OnEquipmentDelegate.AddDynamic(attachment, &ACAttachment::OnEquip);
			equipment->OnUnequipmentDelegate.AddDynamic(attachment, &ACAttachment::OnUnequip);
		}
	}
	
	ACDoAction* doAction = NULL;;

	// DoAction
	if (!!DoActionClass)
	{
		doAction = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACDoAction>(DoActionClass, transform, InOwnerCharacter);
		doAction->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		doAction->SetActorLabel(GetLabelName(InOwnerCharacter, "DoAction"));
		doAction->SetDatas(DoActionDatas);

		UGameplayStatics::FinishSpawningActor(doAction, transform); // 등장 확정

		if (!!equipment)
		{
			doAction->SetEquipped(equipment->GetEquipped());
		}

		if (!!attachment)
		{
			attachment->OnAttachmentBeginOverlap.AddDynamic(doAction, &ACDoAction::OnAttachmentBeginOverlap);
			attachment->OnAttachmentEndOverlap.AddDynamic(doAction, &ACDoAction::OnAttachmentEndOverlap);
			
			attachment->OnAttachmentCollision.AddDynamic(doAction, &ACDoAction::OnAttachmentCollision);
			attachment->OffAttachmentCollision.AddDynamic(doAction, &ACDoAction::OffAttachmentCollision);
		}
	}

	*OutAction = NewObject<UCAction>();
	(*OutAction)->Attachment = attachment;
	(*OutAction)->Equipment = equipment;
	(*OutAction)->DoAction = doAction;
	(*OutAction)->EquipmentColor = EquipmentColor;
}

// 어느 무기의 equipment인지 보기위해
FString UCActionData::GetLabelName(class ACharacter* InOwnerCharacter, FString InName)
{
	FString str;
	str.Append(InOwnerCharacter->GetActorLabel()).Append("_").Append(InName).Append("_").Append(GetName().Replace(L"Da_", L""));

	return str;
}