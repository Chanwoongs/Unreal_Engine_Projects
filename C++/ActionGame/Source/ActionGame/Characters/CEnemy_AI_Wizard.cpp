#include "CEnemy_AI_Wizard.h"
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


ACEnemy_AI_Wizard::ACEnemy_AI_Wizard()
{
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Wizard/Model/Wizard.Wizard'");
	GetMesh()->SetSkeletalMesh(mesh);

	TSubclassOf<UAnimInstance> animInstance;
	CHelpers::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/Character/Wizard/ABP_Wizard.ABP_Wizard_C'");
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

void ACEnemy_AI_Wizard::BeginPlay()
{
	UMaterialInstanceConstant* body;

	// BeginPlay ���� GetAssetDynamic ���
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&body, "MaterialInstanceConstant'/Game/Character/Wizard/Model/Wizard_Mat_Inst.Wizard_Mat_Inst'");

	BodyMaterial = UMaterialInstanceDynamic::Create(body, this);

	GetMesh()->SetMaterial(0, BodyMaterial);

	Super::BeginPlay();

	NameWidget->InitWidget();
	//GetUserWidgetObject : UserWidgetClass�� ���õ� �ڷ����� ���ؼ� �ڵ����� ������� ��ü ����
	Cast<UCUserWidget_Name>(NameWidget->GetUserWidgetObject())->SetNameText(GetActorLabel());

	HealthWidget->InitWidget();
	Cast<UCUserWidget_Health>(HealthWidget->GetUserWidgetObject())->Update(Status->GetHealth(), Status->GetMaxHealth());
}

void ACEnemy_AI_Wizard::ChangeColor(FLinearColor InColor)
{
	BodyMaterial->SetVectorParameterValue("BodyColor", InColor);
}

void ACEnemy_AI_Wizard::Hitted()
{
	Super::Hitted();

	ChangeColor(FLinearColor(1, 0, 0, 1));
	// Ÿ�̸� ȣ��
	UKismetSystemLibrary::K2_SetTimer(this, "RestoreColor", 0.1f, false);
}

void ACEnemy_AI_Wizard::RestoreColor()
{
	FLinearColor color = Action->GetCurrent()->GetEquipmentColor();

	ChangeColor(color);
}
