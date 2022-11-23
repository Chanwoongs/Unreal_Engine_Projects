#include "CPlayer_Swat.h"
#include "Global.h"
#include "Actions/CDoAction_Rifle.h"
#include "CAnimInstance.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "GameFrameWork/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CActionComponent.h"
#include "Components/CStateComponent.h"
#include "Actions/CAction.h"
#include "Actions/CEquipment.h"
#include "Actions/CDoAction_Rifle.h"
#include "Components/CapsuleComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Widgets/CUserWidget_Crosshair.h"


ACPlayer_Swat::ACPlayer_Swat() // 기본 값은 C++로 할당을 한다. 수정은 블프에서 가능하다.
{
	PrimaryActorTick.bCanEverTick = true;

	// 카메라 기본 세팅
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;

	// 기본 메쉬 적용
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Swat/Model/Swat.Swat'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	// animation instance class를 가져와 mesh에 할당하기
	TSubclassOf<UAnimInstance> animInstance;
	CHelpers::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/Character/Swat/ABP_Swat.ABP_Swat_C'");
	GetMesh()->SetAnimInstanceClass(animInstance);

	// SpringArm 기본 세팅
	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	SpringArm->TargetArmLength = 200.0f;
	SpringArm->bDoCollisionTest = false;
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->SocketOffset = FVector(0, 120, 0);

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;

	CHelpers::GetClass<UCUserWidget_Crosshair>(&CrosshairClass, "WidgetBlueprint'/Game/Widgets/WB_Crosshair.WB_Crosshair_C'");
}

void ACPlayer_Swat::GetLocationAndDirection(FVector& OutStart, FVector& OutEnd, FVector& OutDirection)
{
	OutDirection = Camera->GetForwardVector();

	FTransform transform = Camera->GetComponentToWorld(); // World 위치 Return
	FVector cameraLocation = transform.GetLocation();
	OutStart = cameraLocation + OutDirection;

	// 탄착군 형성
	FVector conDirection = UKismetMathLibrary::RandomUnitVectorInEllipticalConeInDegrees(OutDirection, 0.2f, 0.3f);
	conDirection *= 3000.0f; // 사거리

	OutEnd = cameraLocation + conDirection;
}

void ACPlayer_Swat::BeginPlay()
{
	Super::BeginPlay();

	UMaterialInstanceConstant* bodyMaterial;
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&bodyMaterial, "MaterialInstanceConstant'/Game/Character/Swat/Model/Soldier_body_Inst.Soldier_body_Inst'");

	UMaterialInstanceConstant* headMaterial;
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&headMaterial, "MaterialInstanceConstant'/Game/Character/Swat/Model/Soldier_body_Inst.Soldier_body_Inst'");

	UMaterialInstanceConstant* faceMaterial;
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&faceMaterial, "MaterialInstanceConstant'/Game/Character/Swat/Model/Soldier_head_Inst.Soldier_head_Inst'");

	//다이내믹 매터리얼 생성
	BodyMaterial = UMaterialInstanceDynamic::Create(bodyMaterial, this);
	HeadMaterial = UMaterialInstanceDynamic::Create(headMaterial, this);
	FaceMaterial = UMaterialInstanceDynamic::Create(faceMaterial, this);

	GetMesh()->SetMaterial(0, BodyMaterial);
	GetMesh()->SetMaterial(1, HeadMaterial);
	GetMesh()->SetMaterial(2, FaceMaterial);

	// Crosshair
	Crosshair = CreateWidget<UCUserWidget_Crosshair, APlayerController>(GetController<APlayerController>(), CrosshairClass);
	Crosshair->AddToViewport();
	Crosshair->SetVisibility(ESlateVisibility::Hidden);
}

void ACPlayer_Swat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPlayer_Swat::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Rifle", EInputEvent::IE_Pressed, this, &ACPlayer_Swat::OnRifle);

	PlayerInputComponent->BindAction("Aim", EInputEvent::IE_Pressed, this, &ACPlayer_Swat::OnAim);
	PlayerInputComponent->BindAction("Aim", EInputEvent::IE_Released, this, &ACPlayer_Swat::OffAim);

	PlayerInputComponent->BindAction("Action", EInputEvent::IE_Released, this, &ACPlayer_Swat::OffFire);
}

void ACPlayer_Swat::OnRifle()
{
	CheckFalse(State->IsIdleMode());

	Action->SetRifleMode();
}

void ACPlayer_Swat::ChangeColor(FLinearColor InColor)
{
	BodyMaterial->SetVectorParameterValue("BodyColor", InColor);
	HeadMaterial->SetVectorParameterValue("HeadColor", InColor);
	FaceMaterial->SetVectorParameterValue("FaceColor", InColor);
}

void ACPlayer_Swat::OnAim()
{
	CheckTrue(Action->IsUnarmedMode());
	CheckTrue(State->IsEquipMode());

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	SpringArm->TargetArmLength = 100;
	SpringArm->SocketOffset = FVector(0, 60, 10);

	OnZoomIn();
	//Camera->FieldOfView = 40;

	Rifle = Cast<ACDoAction_Rifle>(Action->GetCurrent()->GetDoAction());

	Rifle->Begin_Aiming();

	Crosshair->SetVisibility(ESlateVisibility::Visible);
}

void ACPlayer_Swat::OffAim()
{
	CheckTrue(Action->IsUnarmedMode());
	CheckTrue(State->IsEquipMode());

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	SpringArm->TargetArmLength = 200;
	SpringArm->SocketOffset = FVector(0, 120, 0);

	OnZoomOut();
	//Camera->FieldOfView = 90;

	Rifle = Cast<ACDoAction_Rifle>(Action->GetCurrent()->GetDoAction());

	Rifle->End_Aiming();

	Crosshair->SetVisibility(ESlateVisibility::Hidden);
}

void ACPlayer_Swat::OnFocus()
{
	Crosshair->OnFocus();
}

void ACPlayer_Swat::OffFocus()
{
	Crosshair->OffFocus();
}

void ACPlayer_Swat::OffFire()
{
	if (Rifle != nullptr)
	{
		Rifle->End_Fire();
	}
}