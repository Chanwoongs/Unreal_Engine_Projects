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
	{
		Attachment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACAttachment>(AttachmentClass, transform, InOwnerCharacter);
		Attachment->SetActorLabel(InOwnerCharacter->GetActorLabel() + "_Attachment"); // 출력되는 이름 변경

		UGameplayStatics::FinishSpawningActor(Attachment, transform); // 등장 확정
	}

	// Equipment
	// 기존 SpawnActor 사용시에는 등장과 동시에 BeginPlay가 호출된다
	// 객체만 생성한 후 값을 세팅하고 등장을 시키는 방법을 사용할 것이다
	// 이걸 SpawnActorDeffered 라고 함
	{
		// 객체 생성만 완료된 것이고, 등장하진 않았다
		Equipment = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACEquipment>(EquipmentClass, transform, InOwnerCharacter);
		Equipment->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		Equipment->SetActorLabel(InOwnerCharacter->GetActorLabel() + "_Equipment"); 
		Equipment->SetData(EquipmentData);

		UGameplayStatics::FinishSpawningActor(Equipment, transform); // 등장 확정

		Equipment->OnEquipmentDelegate.AddDynamic(Attachment, &ACAttachment::OnEquip);
		Equipment->OnUnequipmentDelegate.AddDynamic(Attachment, &ACAttachment::OnUnequip);
	}

	// DoAction
	{
		DoAction = InOwnerCharacter->GetWorld()->SpawnActorDeferred<ACDoAction>(DoActionClass, transform, InOwnerCharacter);
		DoAction->AttachToComponent(InOwnerCharacter->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		DoAction->SetActorLabel(InOwnerCharacter->GetActorLabel() + "_DoAction"); 
		DoAction->SetDatas(DoActionDatas);

		UGameplayStatics::FinishSpawningActor(DoAction, transform); // 등장 확정
	}
}
