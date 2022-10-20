#include "CAim.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CStateComponent.h"

UCAim::UCAim()
{
	// UCAim의 클래스의 객체가 다른 클래스의 BeginPlay에서 생성된다면 GetAssetDynamic 사용
	CHelpers::GetAssetDynamic<UCurveFloat>(&Curve, "CurveFloat'/Game/CAim.CAim'");
}

void UCAim::BeginPlay(ACharacter* InCharacter)
{
	OwnerCharacter = InCharacter;

	SpringArm = CHelpers::GetComponent<USpringArmComponent>(OwnerCharacter);
	Camera = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);
	State = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);
	

	TimelineFloat.BindUFunction(this, "Zooming");
	// AddInterFloat : 타임라인이 실행될 동안 호출될 델리게이션 함수를 연결하는 함수
	Timeline.AddInterpFloat(Curve, TimelineFloat); // Static 붙은건 일반, 안붙은건 Dynamic Delegate
	Timeline.SetPlayRate(200); // 10초 동안 갈 걸 0.005초동안감
}

void UCAim::OnZoom()
{
	CheckFalse(IsAvailable()); // SpringArm과 Camera를 가지고 있는경우만
	CheckTrue(bInZoom);

	bInZoom = true;

	SpringArm->TargetArmLength = 100.0f;
	SpringArm->SocketOffset = FVector(0, 30, 10);
	SpringArm->bEnableCameraLag = false; // 카메라가 부드럽게 이동하는 처리 꺼놓기

	//Camera->FieldOfView = 45.0f;

	Timeline.PlayFromStart(); // 무조건 시작부터 실행
}

void UCAim::OffZoom()
{
	CheckFalse(bInZoom);

	bInZoom = false;

	SpringArm->TargetArmLength = 250.0f;
	SpringArm->SocketOffset = FVector(0, 0, 0);
	SpringArm->bEnableCameraLag = true; // 카메라가 부드럽게 이동하는 처리 꺼놓기

	//Camera->FieldOfView = 90.0f;

	Timeline.ReverseFromEnd(); // 뒤에서 부터 실행
}

void UCAim::Tick(float DeltaTime)
{
	Timeline.TickTimeline(DeltaTime);
}

void UCAim::Zooming(float Output)
{
	Camera->FieldOfView = Output;
}
