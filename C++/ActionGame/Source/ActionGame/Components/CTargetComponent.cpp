#include "CTargetComponent.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"

UCTargetComponent::UCTargetComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	CHelpers::GetAsset<UParticleSystem>(&Particle, "ParticleSystem'/Game/Effects/P_Enrage_Base.P_Enrage_Base'");
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
	Target = NULL;
	TraceTargets.Empty();

	if (!!Attached)
	{
		Attached->DestroyComponent();
	}
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

	ChangeCursor(target);
}

void UCTargetComponent::ChangeCursor(ACharacter* InTarget)
{
	if (!!InTarget)
	{
		// UGameplayStatics의 Spawn으로 시작되는 함수들을 실행하는 액터나 어태치되는 액터에 자동으로 컴포넌트를 생성해서
		// 플레이하고 플레이 종료가 일어나면 자동으로 삭제합니다.
		// 하지만 무한루프일 경우 필요할 때 프로그래머가 제거할 수 있도록 자동으로 생성된 컴포넌트를 리턴합니다.
		// 따라서 원하는 때에 삭제 해주어야 한다.
		if (!!Attached)
		{
			Attached->DestroyComponent();
		}
		Attached = UGameplayStatics::SpawnEmitterAttached(Particle, InTarget->GetMesh(), "Spine_Target");
		Target = InTarget;

		return;
	}

	EndTargeting();
}

void UCTargetComponent::ChangeTargetLeft()
{
	ChangeTarget(false);
}

void UCTargetComponent::ChangeTargetRight()
{
	ChangeTarget(true);
}

void UCTargetComponent::ChangeTarget(bool InRight)
{
	CheckNull(Target);

	TMap<float, ACharacter*> map;
	for (ACharacter* character : TraceTargets)
	{
		if (Target == character) // 현재 타겟
			continue;

		FVector targetLocation = character->GetActorLocation();
		FVector ownerLocation = OwnerCharacter->GetActorLocation();
		FVector ownerToTarget = targetLocation - ownerLocation;

		FQuat quat = FQuat(OwnerCharacter->GetControlRotation());
		FVector forward = quat.GetForwardVector();
		FVector up = quat.GetUpVector();

		FVector cross = forward ^ ownerToTarget; // ^ cross product
		float dot = cross | up; // Z 값만 빼온다.
		
		map.Add(dot, character);
	}

	float minimum = FLT_MAX;
	ACharacter* target = NULL;

	TArray<float> keys;
	map.GetKeys(keys);
	for (float key : keys)
	{
		if (InRight == true) 
		{
			if (key < 0.0f) // 왼쪽 key 값들
				continue;
		}
		else
		{
			if (key > 0.0f)
				continue;
		}

		if (FMath::Abs(key) > minimum)
			continue;

		minimum = FMath::Abs(key);

		target = *map.Find(key);
	}

	ChangeCursor(target);
}