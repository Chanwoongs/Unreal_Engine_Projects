#include "CEnemy.h"
#include "Global.h"
#include "CGameMode.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"

#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstanceConstant.h"

#include "Characters/CPlayer.h"
#include "Components/CActionComponent.h"
#include "Components/CMontagesComponent.h"
#include "Components/COptionComponent.h"
#include "Components/CStatusComponent.h"
#include "Widgets/CUserWidget_Name.h"
#include "Widgets/CUserWidget_Health.h"
#include "Widgets/CUserWidget_InGameUI.h"
#include "Actions/CActionData.h"

ACEnemy::ACEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<UWidgetComponent>(this, &HealthWidget, "HealthWidget", GetMesh());

	CHelpers::CreateActorComponent<UCActionComponent>(this, &Action, "Action");
	CHelpers::CreateActorComponent<UCMontagesComponent>(this, &Montages, "Montages");
	CHelpers::CreateActorComponent<UCStatusComponent>(this, &Status, "Status");
	CHelpers::CreateActorComponent<UCStateComponent>(this, &State, "State");

	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	TSubclassOf<UCUserWidget_Health> healthClass;
	CHelpers::GetClass<UCUserWidget_Health>(&healthClass, "WidgetBlueprint'/Game/Widgets/WB_Health.WB_Health_C'");
	HealthWidget->SetWidgetClass(healthClass);
	HealthWidget->SetRelativeLocation(FVector(0, 0, 190));
	HealthWidget->SetDrawSize(FVector2D(120, 20));
	HealthWidget->SetWidgetSpace(EWidgetSpace::Screen);
}

void ACEnemy::BeginPlay()
{
	State->OnStateTypeChanged.AddDynamic(this, &ACEnemy::OnStateTypeChanged);

	Super::BeginPlay();
}

void ACEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateVisibilityHealbar();
}


void ACEnemy::OnStateTypeChanged(EStateType InPrevType, EStateType InNewType)
{
	switch (InNewType)
	{
	case EStateType::Idle:
		break;
	case EStateType::Roll:
		break;
	case EStateType::Backstep:
		break;
	case EStateType::Equip:
		break;
	case EStateType::Action:
		break;
	case EStateType::Hitted: Hitted();
		break;
	case EStateType::Dead: Dead();
		break;
	case EStateType::Max:
		break;
	default:
		break;
	}
}

float ACEnemy::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	DamageInstigator = EventInstigator;
	DamageValue = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	State->SetHittedMode();

	return Status->GetHealth();
}

void ACEnemy::Hitted()
{
	// hp 갱신
	Status->SubHealth(DamageValue);
	Cast<UCUserWidget_Health>(HealthWidget->GetUserWidgetObject())->Update(Status->GetHealth(), Status->GetMaxHealth());
	DamageValue = 0.0f;

	// Montage 재생
	Status->SetStop();
	if (Status->GetHealth() <= 0.0f)
	{
		State->SetDeadMode();

		return;
	}
	Montages->PlayHitted();

	// 공격자를 보고 뒤로 밀리는 효과
	FVector start = GetActorLocation();
	FVector target = DamageInstigator->GetPawn()->GetActorLocation();
	SetActorRotation(UKismetMathLibrary::FindLookAtRotation(start, target));
	DamageInstigator = NULL;

	FVector direction = target - start;
	direction.Normalize();
	LaunchCharacter(-direction * LaunchAmount, true, false);
}

void ACEnemy::Dead()
{
	CheckFalse(State->IsDeadMode());

	Montages->PlayDead();
}

void ACEnemy::BeginDead()
{
	// 충돌 전부 끄기 (캐릭터, 무기 등등)
	Action->OffAllCollision();	
	
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACEnemy::EndDead()
{
	Action->DestroyAllActions();
	ACGameMode* gameMode = CHelpers::GetCustomGameMode<ACGameMode>(GetWorld());
	if (!!gameMode)
	{
 		gameMode->DecreaseRemainingEnemies();
		gameMode->GetInGameUI()->UpdateRemainEnemy((gameMode->GetRemainingEnemies()));
	}
	IsDead = true;
	Destroy();
}

void ACEnemy::UpdateVisibilityHealbar()
{
	FCollisionQueryParams params;
	params.AddIgnoredActor(this);

	FVector playerLocation = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
	FVector location = GetActorLocation();

	//DrawDebugLine(GetWorld(), location, playerLocation, FColor::Red);
	FHitResult hitResult;
	if (GetWorld()->LineTraceSingleByChannel(hitResult, location, playerLocation, ECollisionChannel::ECC_WorldStatic, params))
	{
		ACPlayer* player = Cast<ACPlayer>(hitResult.GetActor());
		if (!!player)
		{
			HealthWidget->SetVisibility(true);
		}
		else
		{
			HealthWidget->SetVisibility(false);
		}
	}
}
