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

	// Pelvis 에 대한 높이는 왼쪽 오른쪽 중 더 작은 값을 고른다.
	// 두 발중 낮은 값을 기준으로 하여 계산
	// 낮은 발 높이로 허리를 이동시킴
	float offset = FMath::Min(leftDistance, rightDistance);
	Data.PelvisDistance.Z = UKismetMathLibrary::FInterpTo(Data.PelvisDistance.Z, offset, DeltaTime, InterpSpeed);

	// FInterpTo : 이동 보간 / Pelvis 만큼 빼준다 양쪽 발
	Data.LeftDistance.Y = UKismetMathLibrary::FInterpTo(Data.LeftDistance.Y, (leftDistance - offset) / 2, DeltaTime, InterpSpeed);
	// 왼쪽 오른쪽은 대칭이다. - 값사용
	Data.RightDistance.Y = UKismetMathLibrary::FInterpTo(Data.RightDistance.Y, (rightDistance - offset / 2), DeltaTime, InterpSpeed);

	// FInterpTo : 이동 보간 / Pelvis 만큼 빼준다 양쪽 발
	Data.LeftDistance.Z = UKismetMathLibrary::FInterpTo(Data.LeftDistance.Z, (leftDistance - offset / 2), DeltaTime, InterpSpeed);
	// 왼쪽 오른쪽은 대칭이다. - 값사용
	Data.RightDistance.Z = UKismetMathLibrary::FInterpTo(Data.RightDistance.Z, (rightDistance - offset / 2), DeltaTime, InterpSpeed);

	// Atan를 이용해 발의 Roll Pitch 회전 값을 계산
	Data.LeftRotation = UKismetMathLibrary::RInterpTo(Data.LeftRotation, leftRotation, DeltaTime, InterpSpeed);
	Data.RightRotation = UKismetMathLibrary::RInterpTo(Data.RightRotation, rightRotation, DeltaTime, InterpSpeed);
}

void UCFeetComponent::Trace(FName InSocket, float& OutDistance, FRotator& OutRotation)
{
	OutDistance = 0.0f;

	FVector location = OwnerCharacter->GetMesh()->GetSocketLocation(InSocket);
	FVector start = FVector(location.X, location.Y, OwnerCharacter->GetActorLocation().Z); // Actor의 중심에서 부터
	
	// GetScaledCapsuleHalfHeight 캡슐에 스케일을 적용한 상태의 1/2 크기를 리턴
	float traceZ = start.Z - OwnerCharacter->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() - TraceDistance;
	FVector end = FVector(location.X, location.Y, traceZ);

	TArray<AActor*> ignoreActors;
	ignoreActors.Add(OwnerCharacter);
	FHitResult hitResult;
	//ECC_Visibility 화면에 등장한 모든 걸 추적하라
	UKismetSystemLibrary::LineTraceSingle(GetWorld(), start, end, UEngineTypes::ConvertToTraceType(ECC_Visibility),
		true, ignoreActors, DrawDebugType, hitResult, true, FLinearColor(0, 0, 0, 0), FLinearColor(0, 0, 0, 0));
	// bTraceComplex true 로하면 더욱 정밀하게 삼각형 단위로 추적
	
	CheckFalse(hitResult.IsValidBlockingHit()); // 추적된게 없다면

	float length = (hitResult.ImpactPoint - hitResult.TraceEnd).Size();
	OutDistance = OffsetDistance + length - TraceDistance; // 발이 움직일 간격

	FVector normal = hitResult.ImpactNormal; // hit된 면의 수직 벡터를 가져옴.
	// 회전 2개를 찾아온다. Roll, Pitch 회전 
	float roll = UKismetMathLibrary::DegAtan2(normal.Y, normal.Z); // 오른쪽에서 높이로 -> 아크탄젠트로 위에서 옆으로
	float pitch = -UKismetMathLibrary::DegAtan2(normal.X, normal.Z); // 높이에서 전방으로 (-)를 붙혀 뒤집어줌

	OutRotation = FRotator(pitch, 0.0f, roll);

}

