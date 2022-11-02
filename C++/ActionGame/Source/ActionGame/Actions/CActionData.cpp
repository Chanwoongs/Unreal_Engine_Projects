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
		attachment->SetActorLabel(GetLabelName(InOwnerCharacter, "Attachment")); // ��µǴ� �̸� ����

		UGameplayStatics::FinishSpawningActor(attachment, transform); // ���� Ȯ��
	}
	
	ACEquipment* equipment = NULL;;

	// Equipment
	// ���� SpawnActor ���ÿ��� ����� ���ÿ� BeginPlay�� ȣ��ȴ�
	// ��ü�� ������ �� ���� �����ϰ� ������ ��Ű�� ����� ����� ���̴�
	// �̰� SpawnActorDeffered ��� ��
	
	// ��ü ������ �Ϸ�� ���̰�, �������� �ʾҴ�
	if (!!EquipmentClass)
	{
		equipment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACEquipment>(EquipmentClass, transform, InOwnerCharacter);
		equipment->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		equipment->SetActorLabel(GetLabelName(InOwnerCharacter, "Equipment"));
		equipment->SetData(EquipmentData);
		equipment->SetColor(EquipmentColor);

		UGameplayStatics::FinishSpawningActor(equipment, transform); // ���� Ȯ��

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

		UGameplayStatics::FinishSpawningActor(doAction, transform); // ���� Ȯ��

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

// ��� ������ equipment���� ��������
FString UCActionData::GetLabelName(class ACharacter* InOwnerCharacter, FString InName)
{
	FString str;
	str.Append(InOwnerCharacter->GetActorLabel()).Append("_").Append(InName).Append("_").Append(GetName().Replace(L"Da_", L""));

	return str;
}