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
	Trace(LeftSocket, leftDistance);

	// FInterpTo : 이동 보간
	Data.LeftDistance.X = UKismetMathLibrary::FInterpTo(Data.LeftDistance.X, leftDistance, DeltaTime, InterpSpeed);

	float rightDistance;
	Trace(RightSocket, rightDistance);
}

void UCFeetComponent::Trace(FName InSocket, float& OutDistance)
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
		true, ignoreActors, DrawDebugType, hitResult, true, FLinearColor::Green, FLinearColor::Red);
	// bTraceComplex true 로하면 더욱 정밀하게 삼각형 단위로 추적
	

}

