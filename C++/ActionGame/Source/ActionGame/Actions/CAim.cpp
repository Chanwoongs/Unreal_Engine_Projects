#include "CAim.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CStateComponent.h"

UCAim::UCAim()
{

}

void UCAim::BeginPlay(ACharacter* InCharacter)
{
	OwnerCharacter = InCharacter;

	SpringArm = CHelpers::GetComponent<USpringArmComponent>(OwnerCharacter);
	Camera = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);
	State = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);
	
	

}

void UCAim::OnZoom()
{
	CheckFalse(IsAvailable()); // SpringArm과 Camera를 가지고 있는경우만
	CheckTrue(bInZoom);

	bInZoom = true;

	SpringArm->TargetArmLength = 100.0f;
	SpringArm->SocketOffset = FVector(0, 30, 10);
	SpringArm->bEnableCameraLag = false; // 카메라가 부드럽게 이동하는 처리 꺼놓기

	Camera->FieldOfView = 45.0f;
}

void UCAim::OffZoom()
{
	CheckFalse(bInZoom);

	bInZoom = false;

	SpringArm->TargetArmLength = 250.0f;
	SpringArm->SocketOffset = FVector(0, 0, 0);
	SpringArm->bEnableCameraLag = true; // 카메라가 부드럽게 이동하는 처리 꺼놓기

	Camera->FieldOfView = 90.0f;
}

void UCAim::Tick(float DeltaTime)
{
}
