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

// �ݰ� �ȿ� �ִ� Ÿ���� ����
void UCTargetComponent::SetTraceTargets()
{
	FVector start = OwnerCharacter->GetActorLocation();
	FVector end = FVector(start.X, start.Y, start.Z + 1); // ��ġ�� ������ �ȳ��ͼ� ��¦ �ٸ��� ����

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(OwnerCharacter);

	TArray<FHitResult> hitResults;
	// SphereTraceMultiByProfile : �������� �̸����� �� �� ������ �����ϱ� ���� ���
	UKismetSystemLibrary::SphereTraceMultiByProfile(GetWorld(), start, end, TraceRadius, "Pawn", false, ignoreActors, Debug, hitResults, true, FLinearColor::Green, FLinearColor::Red, 1.0f);

	for (const FHitResult& result : hitResults)
	{
		if (result.GetActor()->GetClass() == OwnerCharacter->GetClass()) // ���� �ƴϴ�.
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
		// ĳ������ ���� ������ �ƴ� ��Ʈ�ѷ��� ���� ������ ����Ѵ�.
		FVector direction = FQuat(OwnerCharacter->GetControlRotation()).GetForwardVector(); // Player�� ī�޶� ����, ���̸� AI Controller�� ȸ�� ���� �� ���� ����
		FVector offset = character->GetActorLocation() - OwnerCharacter->GetActorLocation();
		offset = offset.GetSafeNormal();

		float temp = direction | offset; // Dot Product

		if (temp < angle)
			continue;
		
		angle = temp;
		target = character; // ���� ���� angle�� ���� target�� ���´�.
	}

	ChangeCursor(target);
}

void UCTargetComponent::ChangeCursor(ACharacter* InTarget)
{
	if (!!InTarget)
	{
		// UGameplayStatics�� Spawn���� ���۵Ǵ� �Լ����� �����ϴ� ���ͳ� ����ġ�Ǵ� ���Ϳ� �ڵ����� ������Ʈ�� �����ؼ�
		// �÷����ϰ� �÷��� ���ᰡ �Ͼ�� �ڵ����� �����մϴ�.
		// ������ ���ѷ����� ��� �ʿ��� �� ���α׷��Ӱ� ������ �� �ֵ��� �ڵ����� ������ ������Ʈ�� �����մϴ�.
		// ���� ���ϴ� ���� ���� ���־�� �Ѵ�.
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
		if (Target == character) // ���� Ÿ��
			continue;

		FVector targetLocation = character->GetActorLocation();
		FVector ownerLocation = OwnerCharacter->GetActorLocation();
		FVector ownerToTarget = targetLocation - ownerLocation;

		FQuat quat = FQuat(OwnerCharacter->GetControlRotation());
		FVector forward = quat.GetForwardVector();
		FVector up = quat.GetUpVector();

		FVector cross = forward ^ ownerToTarget; // ^ cross product
		float dot = cross | up; // Z ���� ���´�.
		
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
			if (key < 0.0f) // ���� key ����
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