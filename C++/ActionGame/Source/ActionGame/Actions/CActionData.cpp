#include "CActionData.h"
#include "Global.h"
#include "CEquipment.h"
#include "CAttachment.h"
#include "CDoAction.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"

void UCActionData::BeginPlay(class ACharacter* InOwnerCharacter)
{
	FTransform transform;

	// Attachment
	if (!!AttachmentClass)
	{
		Attachment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACAttachment>(AttachmentClass, transform, InOwnerCharacter);
		Attachment->SetActorLabel(GetLabelName(InOwnerCharacter, "Attachment")); // ��µǴ� �̸� ����

		UGameplayStatics::FinishSpawningActor(Attachment, transform); // ���� Ȯ��
	}
	

	// Equipment
	// ���� SpawnActor ���ÿ��� ����� ���ÿ� BeginPlay�� ȣ��ȴ�
	// ��ü�� ������ �� ���� �����ϰ� ������ ��Ű�� ����� ����� ���̴�
	// �̰� SpawnActorDeffered ��� ��
	
	// ��ü ������ �Ϸ�� ���̰�, �������� �ʾҴ�
	if (!!EquipmentClass)
	{
		Equipment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACEquipment>(EquipmentClass, transform, InOwnerCharacter);
		Equipment->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		Equipment->SetActorLabel(GetLabelName(InOwnerCharacter, "Equipment"));
		Equipment->SetData(EquipmentData);
		Equipment->SetColor(EquipmentColor);

		UGameplayStatics::FinishSpawningActor(Equipment, transform); // ���� Ȯ��

		if (!!Attachment)
		{
			Equipment->OnEquipmentDelegate.AddDynamic(Attachment, &ACAttachment::OnEquip);
			Equipment->OnUnequipmentDelegate.AddDynamic(Attachment, &ACAttachment::OnUnequip);
		}
	}
	

	// DoAction
	if (!!DoActionClass)
	{
		DoAction = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACDoAction>(DoActionClass, transform, InOwnerCharacter);
		DoAction->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		DoAction->SetActorLabel(GetLabelName(InOwnerCharacter, "DoAction"));
		DoAction->SetDatas(DoActionDatas);

		UGameplayStatics::FinishSpawningActor(DoAction, transform); // ���� Ȯ��

		if (!!Equipment)
		{
			DoAction->SetEquipped(Equipment->GetEquipped());
		}

		if (!!Attachment)
		{
			Attachment->OnAttachmentBeginOverlap.AddDynamic(DoAction, &ACDoAction::OnAttachmentBeginOverlap);
			Attachment->OnAttachmentEndOverlap.AddDynamic(DoAction, &ACDoAction::OnAttachmentEndOverlap);

			Attachment->OnAttachmentCollision.AddDynamic(DoAction, &ACDoAction::OnAttachmentCollision);
			Attachment->OffAttachmentCollision.AddDynamic(DoAction, &ACDoAction::OffAttachmentCollision);
		}
	}
}

// ��� ������ equipment���� ��������
FString UCActionData::GetLabelName(class ACharacter* InOwnerCharacter, FString InName)
{
	FString str;
	str.Append(InOwnerCharacter->GetActorLabel()).Append("_").Append(InName).Append("_").Append(GetName().Replace(L"Da_", L""));

	return str;
}