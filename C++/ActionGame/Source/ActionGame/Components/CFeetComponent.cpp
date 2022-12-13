#include "CFeetComponent.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"

UCFeetComponent::UCFeetComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UCFeetComponent::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerCharacter = Cast<ACharacter>(GetOwner());
}


void UCFeetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float leftDistance;
	FRotator leftRotation;
	Trace(LeftSocket, leftDistance, leftRotation);
	float rightDistance;
	FRotator rightRotation;
	Trace(RightSocket, rightDistance, rightRotation);

	// Pelvis �� ���� ���̴� ���� ������ �� �� ���� ���� ����.
	// �� ���� ���� ���� �������� �Ͽ� ���
	// ���� �� ���̷� �㸮�� �̵���Ŵ
	float offset = FMath::Min(leftDistance, rightDistance);
	Data.PelvisDistance.Z = UKismetMathLibrary::FInterpTo(Data.PelvisDistance.Z, offset, DeltaTime, InterpSpeed);

	// FInterpTo : �̵� ���� / Pelvis ��ŭ ���ش� ���� ��
	Data.LeftDistance.Y = UKismetMathLibrary::FInterpTo(Data.LeftDistance.Y, (leftDistance - offset) / 2, DeltaTime, InterpSpeed);
	// ���� �������� ��Ī�̴�. - �����
	Data.RightDistance.Y = UKismetMathLibrary::FInterpTo(Data.RightDistance.Y, (rightDistance - offset / 2), DeltaTime, InterpSpeed);

	// FInterpTo : �̵� ���� / Pelvis ��ŭ ���ش� ���� ��
	Data.LeftDistance.Z = UKismetMathLibrary::FInterpTo(Data.LeftDistance.Z, (leftDistance - offset / 2), DeltaTime, InterpSpeed);
	// ���� �������� ��Ī�̴�. - �����
	Data.RightDistance.Z = UKismetMathLibrary::FInterpTo(Data.RightDistance.Z, (rightDistance - offset / 2), DeltaTime, InterpSpeed);

	// Atan�� �̿��� ���� Roll Pitch ȸ�� ���� ���
	Data.LeftRotation = UKismetMathLibrary::RInterpTo(Data.LeftRotation, leftRotation, DeltaTime, InterpSpeed);
	Data.RightRotation = UKismetMathLibrary::RInterpTo(Data.RightRotation, rightRotation, DeltaTime, InterpSpeed);
}

void UCFeetComponent::Trace(FName InSocket, float& OutDistance, FRotator& OutRotation)
{
	OutDistance = 0.0f;

	FVector location = OwnerCharacter->GetMesh()->GetSocketLocation(InSocket);
	FVector start = FVector(location.X, location.Y, OwnerCharacter->GetActorLocation().Z); // Actor�� �߽ɿ��� ����
	
	// GetScaledCapsuleHalfHeight ĸ���� �������� ������ ������ 1/2 ũ�⸦ ����
	float traceZ = start.Z - OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() - TraceDistance;
	FVector end = FVector(location.X, location.Y, traceZ);

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(OwnerCharacter);
	FHitResult hitResult;
	//ECC_Visibility ȭ�鿡 ������ ��� �� �����϶�
	UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end, UEngineTypes::ConvertToTraceType(ECC_Visibility),
		true, ignoreActors, DrawDebugType, hitResult, true, FLinearColor(0, 0, 0, 0), FLinearColor(0, 0, 0, 0));
	// bTraceComplex true ���ϸ� ���� �����ϰ� �ﰢ�� ������ ����
	
	CheckFalse(hitResult.IsValidBlockingHit()); // �����Ȱ� ���ٸ�

	float length = (hitResult.ImpactPoint - hitResult.TraceEnd).Size();
	OutDistance = OffsetDistance + length - TraceDistance; // ���� ������ ����

	FVector normal = hitResult.ImpactNormal; // hit�� ���� ���� ���͸� ������.
	// ȸ�� 2���� ã�ƿ´�. Roll, Pitch ȸ�� 
	float roll = UKismetMathLibrary::DegAtan2(normal.Y, normal.Z); // �����ʿ��� ���̷� -> ��ũź��Ʈ�� ������ ������
	float pitch = -UKismetMathLibrary::DegAtan2(normal.X, normal.Z); // ���̿��� �������� (-)�� ���� ��������

	OutRotation = FRotator(pitch, 0.0f, roll);

}

