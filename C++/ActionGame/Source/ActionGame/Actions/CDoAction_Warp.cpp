#include "CDoAction_Warp.h"
#include "Global.h"
#include "CAttachment.h"
#include "GameFramework/Character.h"
#include "Components/DecalComponent.h"

void ACDoAction_Warp::BeginPlay()
{
	Super::BeginPlay();

	// 캐릭터에 붙어있는 모든 Actor들 중 Warp 찾아오기
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

	// TEnumAsByte : enum class는 자료형의 크기가 지정이 되지만 순수한 enum은 자료형의 크기가 결정되지 않았으므로 enum의 크기를 정의
	TArray<TEnumAsByte<EObjectTypeQuery>> objects; // 프로젝트 세팅-> 콜리전-> 오브젝트 유형
	objects.Add(EObjectTypeQuery::ObjectTypeQuery1);

	FHitResult hitResult;
	if (controller->GetHitResultUnderCursorForObjects(objects, false, hitResult))
	{
		OutLocation = hitResult.Location;
		OutRotator = hitResult.ImpactNormal.Rotation(); // ImpacktNormal 충돌된 면의 수직벡터 리턴

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


