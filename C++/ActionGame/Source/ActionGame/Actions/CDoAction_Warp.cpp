#include "CDoAction_Warp.h"
#include "Global.h"
#include "CAttachment.h"
#include "GameFramework/Character.h"
#include "Components/DecalComponent.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

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
	CheckFalse(*bEquipped);

	FRotator rotator;
	CheckFalse(GetCursorLocationAndRotation(Location, rotator));

	CheckFalse(State->IsIdleMode());
	State->SetActionMode();

	Decal->SetWorldLocation(Location);
	Decal->SetWorldRotation(rotator);

	OwnerCharacter->PlayAnimMontage(Datas[0].AnimMontage, Datas[0].PlayRatio, Datas[0].StartSection);

	Datas[0].bCanMove ? Status->SetMove() : Status->SetStop();

}

void ACDoAction_Warp::Begin_Action()
{
	FTransform transform = Datas[0].EffectTransform;
	//transform.AddToTranslation(OwnerCharacter->GetActorLocation());

	// UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Datas[0].Effect, transform);
	// Location이 아닌 Attach를 이용해 Mesh에 붙혀서 플레이되도록 처리해주면 같이 이동하게 된다.
	UGameplayStatics::SpawnEmitterAttached(Datas[0].Effect, OwnerCharacter->GetMesh(), "", transform.GetLocation(), FRotator(transform.GetRotation()), transform.GetScale3D());
}

void ACDoAction_Warp::End_Action()
{
	OwnerCharacter->SetActorLocation(Location);
	Location = FVector::ZeroVector;

	State->SetIdleMode();
	Status->SetMove();
}


