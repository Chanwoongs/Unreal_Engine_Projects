#include "CActionData.h"
#include "Global.h"
#include "CEquipment.h"
#include "CAttachment.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"

void UCActionData::BeginPlay(class ACharacter* InOwnerCharacter)
{
	FTransform transform;

	// Attachment
	{
		Attachment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACAttachment>(AttachmentClass, transform, InOwnerCharacter);
		Attachment->SetActorLabel(InOwnerCharacter->GetActorLabel() + "_Attachment"); // ��µǴ� �̸� ����

		UGameplayStatics::FinishSpawningActor(Attachment, transform); // ���� Ȯ��
	}

	// Equipment
	// ���� SpawnActor ���ÿ��� ����� ���ÿ� BeginPlay�� ȣ��ȴ�
	// ��ü�� ������ �� ���� �����ϰ� ������ ��Ű�� ����� ����� ���̴�
	// �̰� SpawnActorDeffered ��� ��
	{
		// ��ü ������ �Ϸ�� ���̰�, �������� �ʾҴ�
		Equipment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACEquipment>(EquipmentClass, transform, InOwnerCharacter);
		Equipment->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		Attachment->SetActorLabel(InOwnerCharacter->GetActorLabel() + "_Equipment"); // ��µǴ� �̸� ����
		Equipment->SetData(EquipmentData);

		UGameplayStatics::FinishSpawningActor(Equipment, transform); // ���� Ȯ��

		Equipment->OnEquipmentDelegate.AddDynamic(Attachment, &ACAttachment::OnEquip);
		Equipment->OnUnequipmentDelegate.AddDynamic(Attachment, &ACAttachment::OnUnequip);
	}
}
