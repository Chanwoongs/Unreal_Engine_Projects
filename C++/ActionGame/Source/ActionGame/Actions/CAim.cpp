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
	CheckFalse(IsAvailable()); // SpringArm�� Camera�� ������ �ִ°�츸
	CheckTrue(bInZoom);

	bInZoom = true;

	SpringArm->TargetArmLength = 100.0f;
	SpringArm->SocketOffset = FVector(0, 30, 10);
	SpringArm->bEnableCameraLag = false; // ī�޶� �ε巴�� �̵��ϴ� ó�� ������

	Camera->FieldOfView = 45.0f;
}

void UCAim::OffZoom()
{
	CheckFalse(bInZoom);

	bInZoom = false;

	SpringArm->TargetArmLength = 250.0f;
	SpringArm->SocketOffset = FVector(0, 0, 0);
	SpringArm->bEnableCameraLag = true; // ī�޶� �ε巴�� �̵��ϴ� ó�� ������

	Camera->FieldOfView = 90.0f;
}

void UCAim::Tick(float DeltaTime)
{
}
