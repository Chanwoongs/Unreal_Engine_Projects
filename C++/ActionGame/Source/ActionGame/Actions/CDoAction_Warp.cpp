#include "CDoAction_Warp.h"
#include "Global.h"
#include "CAttachment.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "Components/DecalComponent.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"
#include "Components/CBehaviorComponent.h"

void ACDoAction_Warp::BeginPlay()
{
	Super::BeginPlay();

	// ĳ���Ϳ� �پ��ִ� ��� Actor�� �� Warp ã�ƿ���
	for (AActor* actor : OwnerCharacter->Children)
	{
		if (actor->IsA<ACAttachment>() && actor->GetActorLabel().Contains("Warp"))
		{
			Decal = CHelpers::GetComponent<UDecalComponent>(actor);

			break;
		}
	}
}

void ACDoAction_Warp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckFalse(*bEquipped);

	// ���̴�
	if (UseCursorLocation() == false)
	{
		Decal->SetVisibility(false);
		return;
	}

	FVector location;
	FRotator rotator;

	if (GetCursorLocationAndRotation(location, rotator))
	{
		Decal->SetVisibility(true);
		Decal->SetWorldLocation(location);
		Decal->SetWorldRotation(rotator);

		return;
	}
	else
		Decal->SetVisibility(false);

}

bool ACDoAction_Warp::UseCursorLocation()
{
	// Player�� �ƴϳ� �Ǻ�

	return OwnerCharacter->GetController<AAIController>() == NULL;
}

bool ACDoAction_Warp::GetCursorLocationAndRotation(FVector& OutLocation, FRotator& OutRotator)
{
	APlayerController* controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	// TEnumAsByte : enum class�� �ڷ����� ũ�Ⱑ ������ ������ ������ enum�� �ڷ����� ũ�Ⱑ �������� �ʾ����Ƿ� enum�� ũ�⸦ ����
	TArray<TEnumAsByte<EObjectTypeQuery>> objects; // ������Ʈ ����-> �ݸ���-> ������Ʈ ����
	objects.Add(EObjectTypeQuery::ObjectTypeQuery1);

	FHitResult hitResult;
	if (controller->GetHitResultUnderCursorForObjects(objects, false, hitResult))
	{
		OutLocation = hitResult.Location;
		OutRotator = hitResult.ImpactNormal.Rotation(); // ImpacktNormal �浹�� ���� �������� ����

		return true;
	}

	return false;
}

void ACDoAction_Warp::DoAction()
{
	CheckFalse(*bEquipped);
	CheckFalse(State->IsIdleMode());

	if (UseCursorLocation())
	{
		FRotator rotator;
		CheckFalse(GetCursorLocationAndRotation(Location, rotator));
	}
	else
	{
		AAIController* controller = OwnerCharacter->GetController<AAIController>();
		UCBehaviorComponent* behavior = CHelpers::GetComponent<UCBehaviorComponent>(controller);

		Location = behavior->GetWarpLocation();
		Decal->SetVisibility(false);
	}


	State->SetActionMode();


	OwnerCharacter->PlayAnimMontage(Datas[0].AnimMontage, Datas[0].PlayRatio, Datas[0].StartSection);
	Datas[0].bCanMove ? Status->SetMove() : Status->SetStop();

}

void ACDoAction_Warp::Begin_Action()
{
	FTransform transform = Datas[0].EffectTransform;
	//transform.AddToTranslation(OwnerCharacter->GetActorLocation());

	// UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Datas[0].Effect, transform);
	// Location�� �ƴ� Attach�� �̿��� Mesh�� ������ �÷��̵ǵ��� ó�����ָ� ���� �̵��ϰ� �ȴ�.
	UGameplayStatics::SpawnEmitterAttached(Datas[0].Effect, OwnerCharacter->GetMesh(), "", transform.GetLocation(), FRotator(transform.GetRotation()), transform.GetScale3D());
}

void ACDoAction_Warp::End_Action()
{
	OwnerCharacter->SetActorLocation(Location);
	Location = FVector::ZeroVector;

	State->SetIdleMode();
	Status->SetMove();
}


