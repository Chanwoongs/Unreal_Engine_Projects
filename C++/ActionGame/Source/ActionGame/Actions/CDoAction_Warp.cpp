#include "CDoAction_Warp.h"
#include "Global.h"
#include "CAttachment.h"
#include "GameFramework/Character.h"
#include "Components/DecalComponent.h"

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

	FVector location;
	FRotator rotator;

	if (GetCursorLocationAndRotation(location, rotator))
	{
		Decal->SetVisibility(true);
		Decal->SetWorldLocation(location);
		Decal->SetWorldRotation(rotator);

		return;
	}

	Decal->SetVisibility(false);

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
}

void ACDoAction_Warp::Begin_Action()
{
}

void ACDoAction_Warp::End_Action()
{
}


