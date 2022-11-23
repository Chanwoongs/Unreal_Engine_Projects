#include "CEnemy_AI_Mutant.h"
#include "Global.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"

#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstanceConstant.h"

#include "Actions/CAction.h"
#include "Components/CActionComponent.h"
#include "Components/COptionComponent.h"
#include "Components/CStatusComponent.h"
#include "Widgets/CUserWidget_Name.h"
#include "Widgets/CUserWidget_Health.h"


ACEnemy_AI_Mutant::ACEnemy_AI_Mutant()
{
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Mutant/Model/Mutant.Mutant'");
	GetMesh()->SetSkeletalMesh(mesh);

	TSubclassOf<UAnimInstance> animInstance;
	CHelpers::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/Character/Mutant/ABP_Mutant.ABP_Mutant_C'");
	GetMesh()->SetAnimInstanceClass(animInstance);

	GetCharacterMovement()->RotationRate = FRotator(0, 720, 0);

	TSubclassOf<UCUserWidget_Name> nameClass;
	CHelpers::GetClass<UCUserWidget_Name>(&nameClass, "WidgetBlueprint'/Game/Widgets/WB_Name.WB_Name_C'");
	NameWidget->SetWidgetClass(nameClass);
	NameWidget->SetRelativeLocation(FVector(0, 0, 240));
	NameWidget->SetDrawSize(FVector2D(230, 30));
	NameWidget->SetWidgetSpace(EWidgetSpace::Screen); // �׻� ���� ������

	TSubclassOf<UCUserWidget_Health> healthClass;
	CHelpers::GetClass<UCUserWidget_Health>(&healthClass, "WidgetBlueprint'/Game/Widgets/WB_Health.WB_Health_C'");
	HealthWidget->SetWidgetClass(healthClass);
	HealthWidget->SetRelativeLocation(FVector(0, 0, 190));
	HealthWidget->SetDrawSize(FVector2D(120, 20));
	HealthWidget->SetWidgetSpace(EWidgetSpace::Screen);
}

void ACEnemy_AI_Mutant::BeginPlay()
{
	UMaterialInstanceConstant* body;

	// BeginPlay ���� GetAssetDynamic ���
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&body, "MaterialInstanceConstant'/Game/Character/Mutant/Model/mutant_M_Inst.mutant_M_Inst'");

	BodyMaterial = UMaterialInstanceDynamic::Create(body, this);

	GetMesh()->SetMaterial(0, BodyMaterial);

	Super::BeginPlay();

	NameWidget->InitWidget();
	//GetUserWidgetObject : UserWidgetClass�� ���õ� �ڷ����� ���ؼ� �ڵ����� ������� ��ü ����
	Cast<UCUserWidget_Name>(NameWidget->GetUserWidgetObject())->SetNameText(GetActorLabel());

	HealthWidget->InitWidget();
	Cast<UCUserWidget_Health>(HealthWidget->GetUserWidgetObject())->Update(Status->GetHealth(), Status->GetMaxHealth());
}

void ACEnemy_AI_Mutant::ChangeColor(FLinearColor InColor)
{
	BodyMaterial->SetVectorParameterValue("BodyColor", InColor);
}

void ACEnemy_AI_Mutant::Hitted()
{
	Super::Hitted();

	ChangeColor(FLinearColor(1, 0, 0, 1));
	// Ÿ�̸� ȣ��
	UKismetSystemLibrary::K2_SetTimer(this, "RestoreColor", 0.1f, false);
}

void ACEnemy_AI_Mutant::RestoreColor()
{
	UCAction* action = Action->GetCurrent();
	if (!!action)
	{
		FLinearColor color = action->GetEquipmentColor();

		ChangeColor(color);
	}
}
