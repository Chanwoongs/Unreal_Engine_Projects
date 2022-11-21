#include "CPlayer_Warrior.h"
#include "Global.h"
#include "CGameMode.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstanceConstant.h"

#include "Components/CActionComponent.h"
#include "Components/CMontagesComponent.h"
#include "Components/COptionComponent.h"
#include "Components/CStatusComponent.h"
#include "Components/CTargetComponent.h"
#include "Components/CFeetComponent.h"

#include "Widgets/CUserWidget_ActionList.h"
#include "Widgets/CUserWidget_InGameUI.h"

ACPlayer_Warrior::ACPlayer_Warrior()
{
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Character/Warrior/Warrior.Warrior'");
	GetMesh()->SetSkeletalMesh(mesh);

	TSubclassOf<UAnimInstance> animInstance;
	CHelpers::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/Character/Warrior/ABP_Warrior.ABP_Warrior_C'");
	GetMesh()->SetAnimInstanceClass(animInstance);

	// GetCharacterMovement()->MaxWalkSpeed = 
	GetCharacterMovement()->RotationRate = FRotator(0, 720, 0);
	GetCharacterMovement()->bOrientRotationToMovement = true;

	CHelpers::GetClass<UCUserWidget_ActionList>(&ActionListClass, "WidgetBlueprint'/Game/Widgets/WB_ActionList.WB_ActionList_C'");
}

void ACPlayer_Warrior::BeginPlay()
{
	Super::BeginPlay();

	UMaterialInstanceConstant* body;

	// BeginPlay 에선 GetAssetDynamic 사용
	CHelpers::GetAssetDynamic<UMaterialInstanceConstant>(&body, "MaterialInstanceConstant'/Game/Character/Warrior/Textures/Warrior_Inst.Warrior_Inst'");

	BodyMaterial = UMaterialInstanceDynamic::Create(body, this);

	GetMesh()->SetMaterial(0, BodyMaterial);

	Action->SetUnarmedMode();

	ActionList = CreateWidget<UCUserWidget_ActionList, APlayerController>(GetController<APlayerController>(), ActionListClass);
	ActionList->AddToViewport();
	ActionList->SetVisibility(ESlateVisibility::Hidden);

	ActionList->GetData(0).OnUserWidget_ActionItem_Clicked.AddDynamic(this, &ACPlayer_Warrior::OnFist);
	ActionList->GetData(1).OnUserWidget_ActionItem_Clicked.AddDynamic(this, &ACPlayer_Warrior::OnOneHand);
	ActionList->GetData(2).OnUserWidget_ActionItem_Clicked.AddDynamic(this, &ACPlayer_Warrior::OnTwoHand);
	ActionList->GetData(3).OnUserWidget_ActionItem_Clicked.AddDynamic(this, &ACPlayer_Warrior::OnWarp);
	ActionList->GetData(4).OnUserWidget_ActionItem_Clicked.AddDynamic(this, &ACPlayer_Warrior::OnFireStorm);
	ActionList->GetData(5).OnUserWidget_ActionItem_Clicked.AddDynamic(this, &ACPlayer_Warrior::OnIceBall);
}

void ACPlayer_Warrior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACPlayer_Warrior::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// OneHand 무기
	PlayerInputComponent->BindAction("OneHand", EInputEvent::IE_Pressed, this, &ACPlayer_Warrior::OnOneHand);
	// TwoHand 무기
	PlayerInputComponent->BindAction("TwoHand", EInputEvent::IE_Pressed, this, &ACPlayer_Warrior::OnTwoHand);
	// Fist
	PlayerInputComponent->BindAction("Fist", EInputEvent::IE_Pressed, this, &ACPlayer_Warrior::OnFist);
	// Warp
	PlayerInputComponent->BindAction("Warp", EInputEvent::IE_Pressed, this, &ACPlayer_Warrior::OnWarp);
	// FireStorm
	PlayerInputComponent->BindAction("FireStorm", EInputEvent::IE_Pressed, this, &ACPlayer_Warrior::OnFireStorm);
	// IceBall
	PlayerInputComponent->BindAction("IceBall", EInputEvent::IE_Pressed, this, &ACPlayer_Warrior::OnIceBall);

	// ActionList
	PlayerInputComponent->BindAction("ViewActionList", EInputEvent::IE_Pressed, this, &ACPlayer_Warrior::OnViewActionList);
	PlayerInputComponent->BindAction("ViewActionList", EInputEvent::IE_Released, this, &ACPlayer_Warrior::OffViewActionList);

}

void ACPlayer_Warrior::OnFist()
{
	CheckFalse(State->IsIdleMode());

	Action->SetFistMode();
}

void ACPlayer_Warrior::OnOneHand()
{
	CheckFalse(State->IsIdleMode());

	Action->SetOneHandMode();
}

void ACPlayer_Warrior::OnTwoHand()
{
	CheckFalse(State->IsIdleMode());

	Action->SetTwoHandMode();
}

void ACPlayer_Warrior::OnWarp()
{
	CheckFalse(State->IsIdleMode());

	Action->SetWarpMode();
}

void ACPlayer_Warrior::OnFireStorm()
{
	CheckFalse(State->IsIdleMode());

	Action->SetFireStormMode();
}

void ACPlayer_Warrior::OnIceBall()
{
	CheckFalse(State->IsIdleMode());

	Action->SetIceBallMode();
}

void ACPlayer_Warrior::OnViewActionList()
{
	CheckFalse(State->IsIdleMode());
	ActionList->SetVisibility(ESlateVisibility::Visible);

	GetController<APlayerController>()->bShowMouseCursor = true;
	GetController<APlayerController>()->SetInputMode(FInputModeGameAndUI()); // 게임 모드인지 UI 모드인지 정함

	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.1f); // 게임 속도를 늦춰줌
}

void ACPlayer_Warrior::OffViewActionList()
{
	ActionList->SetVisibility(ESlateVisibility::Hidden);

	GetController<APlayerController>()->bShowMouseCursor = false;
	GetController<APlayerController>()->SetInputMode(FInputModeGameOnly()); // 게임 모드인지 UI 모드인지 정함

	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f); // 게임 속도를 늦춰줌

}

void ACPlayer_Warrior::ChangeColor(FLinearColor InColor)
{
	BodyMaterial->SetVectorParameterValue("BodyColor", InColor);
}


