#include "CTargetComponent.h"
#include "Global.h"
#include "GameFramework/Character.h"

UCTargetComponent::UCTargetComponent()
{
	PrimaryComponentTick.bCanEverTick = true;


}


void UCTargetComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	
}

void UCTargetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UCTargetComponent::ToggleTarget()
{
	if (!!Target)
	{
		EndTargeting();

		return;
	}

	StartTargeting();
}

void UCTargetComponent::StartTargeting()
{
	SetTraceTargets();
	SetTarget();
}

void UCTargetComponent::EndTargeting()
{
}

// 반경 안에 있는 타겟을 검출
void UCTargetComponent::SetTraceTargets()
{
	FVector start = OwnerCharacter->GetActorLocation();
	FVector end = FVector(start.X, start.Y, start.Z + 1); // 위치가 같으면 안나와서 살짝 다르게 해줌

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(OwnerCharacter);

	TArray<FHitResult> hitResults;
	// SphereTraceMultiByProfile : 프리셋의 이름으로 딱 한 종류만 추적하기 위해 사용
	UKismetSystemLibrary::SphereTraceMultiByProfile(GetWorld(), start, end, TraceRadius, "Pawn", false, ignoreActors, Debug, hitResults, true, FLinearColor::Green, FLinearColor::Red, 1.0f);

	for (const FHitResult& result : hitResults)
	{
		if (result.GetActor()->GetClass() == OwnerCharacter->GetClass()) // 적이 아니다.
			continue;
		
		ACharacter* character = Cast<ACharacter>(result.GetActor());

		if (!!character)
		{
			TraceTargets.AddUnique(character);
		}
	}
}

void UCTargetComponent::SetTarget()
{
	float angle = -2.0f;
	ACharacter* target = NULL;

	for (ACharacter* character : TraceTargets)
	{
		// 캐릭터의 전방 방향이 아닌 컨트롤러의 전방 방향을 사용한다.
		FVector direction = FQuat(OwnerCharacter->GetControlRotation()).GetForwardVector(); // Player면 카메라 방향, 적이면 AI Controller의 회전 방향 의 전방 방향
		FVector offset = character->GetActorLocation() - OwnerCharacter->GetActorLocation();
		offset = offset.GetSafeNormal();

		float temp = direction | offset; // Dot Product

		if (temp < angle)
			continue;
		
		angle = temp;
		target = character; // 가장 작은 angle을 가진 target만 남는다.
	}

	CLog::Log(target->GetActorLabel());
}
