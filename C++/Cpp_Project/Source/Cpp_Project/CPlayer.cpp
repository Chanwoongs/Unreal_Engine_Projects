#include "CPlayer.h"
#include "Global.h"
#include "CRifle.h"
#include "CAnimInstance.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "GameFrameWork/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Widgets/CUserWidget_Crosshair.h"


ACPlayer::ACPlayer() // �⺻ ���� C++�� �Ҵ��� �Ѵ�. ������ �������� �����ϴ�.
{
	PrimaryActorTick.bCanEverTick = true;

	//SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	//SpringArm->SetupAttachment(GetCapsuleComponent())
	CHelpers::CreateComponent<USpringArmComponent>(this, &SpringArm, "SpringArm", GetCapsuleComponent());

	//Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	//Camera->SetupAttachment(SpringArm);
	CHelpers::CreateComponent<UCameraComponent>(this, &Camera, "Camera", SpringArm);

	// ī�޶� �⺻ ����
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;

	// �⺻ �޽� ����
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	// animation instance class�� ������ mesh�� �Ҵ��ϱ�
	TSubclassOf<UAnimInstance> animInstance;
	CHelpers::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/ABP_CPlayer.ABP_CPlayer_C'");
	GetMesh()->SetAnimInstanceClass(animInstance);

	// SpringArm �⺻ ����
	SpringArm->SetRelativeLocation(FVector(0, 0, 60));
	SpringArm->TargetArmLength = 200.0f;
	SpringArm->bDoCollisionTest = false;
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->SocketOffset = FVector(0, 60, 0);

	CHelpers::GetClass<UCUserWidget_Crosshair>(&CrosshairClass, "WidgetBlueprint'/Game/Widgets/WB_Crosshair.WB_Crosshair_C'");
	CHelpers::GetClass<UCameraShake>(&CameraShakeClass, "Blueprint'/Game/BP_CameraShake.BP_CameraShake_C'");


}

void ACPlayer::GetLocationAndDirection(FVector& OutStart, FVector& OutEnd, FVector& OutDirection)
{
	OutDirection = Camera->GetForwardVector();

	FTransform transform = Camera->GetComponentToWorld(); // World ��ġ Return
	FVector cameraLocation = transform.GetLocation();
	OutStart = cameraLocation + OutDirection;

	// ź���� ����
	FVector conDirection = UKismetMathLibrary::RandomUnitVectorInEllipticalConeInDegrees(OutDirection, 0.2f, 0.3f);
	conDirection *= 3000.0f; // ��Ÿ�

	OutEnd = cameraLocation + conDirection;
}

void ACPlayer::BeginPlay()
{
	Super::BeginPlay();

	UMaterialInstanceConstant* bodyMaterial;
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&bodyMaterial, "MaterialInstanceConstant'/Game/Materials/M_UE4Man_Body_Inst.M_UE4Man_Body_Inst'");

	UMaterialInstanceConstant* logoMaterial;
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&logoMaterial, "MaterialInstanceConstant'/Game/Materials/M_UE4Man_ChestLogo_Inst.M_UE4Man_ChestLogo_Inst'");


	//���̳��� ���͸��� ����
	BodyMaterial = UMaterialInstanceDynamic::Create(bodyMaterial, this);
	LogoMaterial = UMaterialInstanceDynamic::Create(logoMaterial, this);

	GetMesh()->SetMaterial(0, BodyMaterial);
	GetMesh()->SetMaterial(1, LogoMaterial);

	// Crosshair
	Crosshair = CreateWidget<UCUserWidget_Crosshair, APlayerController>(GetController<APlayerController>(), CrosshairClass);
	Crosshair->AddToViewport();
	Crosshair->SetVisibility(ESlateVisibility::Hidden);

	// �� Spawn ��Ű��
	Rifle = ACRifle::Spawn(GetWorld(), this);
	OnRifle();
	
}

void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACPlayer::OnMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACPlayer::OnMoveRight);
	PlayerInputComponent->BindAxis("HorizontalLook", this, &ACPlayer::OnHorizontalLook);
	PlayerInputComponent->BindAxis("VerticalLook", this, &ACPlayer::OnVerticalLook);

	PlayerInputComponent->BindAction("Running", EInputEvent::IE_Pressed, this, &ACPlayer::OnRunning);
	PlayerInputComponent->BindAction("Running", EInputEvent::IE_Released, this, &ACPlayer::OffRunning);

	PlayerInputComponent->BindAction("Rifle", EInputEvent::IE_Pressed, this, &ACPlayer::OnRifle);

	PlayerInputComponent->BindAction("Aim", EInputEvent::IE_Pressed, this, &ACPlayer::OnAim);
	PlayerInputComponent->BindAction("Aim", EInputEvent::IE_Released, this, &ACPlayer::OffAim);

	PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Pressed, this, &ACPlayer::OnFire);
	PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Released, this, &ACPlayer::OffFire);

}

void ACPlayer::OnFocus()
{
	Crosshair->OnFocus();
}

void ACPlayer::OffFocus()
{
	Crosshair->OffFocus();
}

void ACPlayer::PlayCameraShake()
{
	GetController<APlayerController>()->PlayerCameraManager->PlayCameraShake(CameraShakeClass);
}

// �÷��̾� �����¿� ������
void ACPlayer::OnMoveForward(float Axis)
{
	// ps. rotator�� �Լ��� ���ٸ� quternion���� ��ȯ�غ���
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetForwardVector().GetSafeNormal2D();

	AddMovementInput(direction, Axis);

}
void ACPlayer::OnMoveRight(float Axis)
{
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector().GetSafeNormal2D();

	AddMovementInput(direction, Axis);
}


// ���콺 �Է����� ī�޶� ���� ������
void ACPlayer::OnHorizontalLook(float Axis)
{
	AddControllerYawInput(Axis);
}
void ACPlayer::OnVerticalLook(float Axis)
{
	AddControllerPitchInput(Axis);
}

// �޸��� �׼� �Է�
void ACPlayer::OnRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}
void ACPlayer::OffRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
}

void ACPlayer::OnRifle()
{
	if (Rifle->GetEquipped())
	{
		Rifle->Unequip();
		
		return;
	}

	Rifle->Equip();
}

void ACPlayer::OnAim()
{
	CheckFalse(Rifle->GetEquipped());
	CheckTrue(Rifle->GetEquipping());

	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	SpringArm->TargetArmLength = 100;
	SpringArm->SocketOffset = FVector(0, 30, 10);

	OnZoomIn();
	//Camera->FieldOfView = 40;

	Rifle->Begin_Aiming();

	Crosshair->SetVisibility(ESlateVisibility::Visible);
}

void ACPlayer::OffAim()
{
	CheckFalse(Rifle->GetEquipped());
	CheckTrue(Rifle->GetEquipping());

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	SpringArm->TargetArmLength = 200;
	SpringArm->SocketOffset = FVector(0, 60, 0);

	OnZoomOut();
	//Camera->FieldOfView = 90;

	Rifle->End_Aiming();

	Crosshair->SetVisibility(ESlateVisibility::Hidden);
}

void ACPlayer::OnFire()
{
	Rifle->Begin_Fire();
}

void ACPlayer::OffFire()
{
	Rifle->End_Fire();
}

void ACPlayer::ChangeColor(FLinearColor InColor)
{
	BodyMaterial->SetVectorParameterValue("BodyColor", InColor);
	LogoMaterial->SetVectorParameterValue("BodyColor", InColor);
}

