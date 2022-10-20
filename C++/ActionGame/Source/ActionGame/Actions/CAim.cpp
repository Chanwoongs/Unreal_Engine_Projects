#include "CAim.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CStateComponent.h"

UCAim::UCAim()
{
	// UCAim�� Ŭ������ ��ü�� �ٸ� Ŭ������ BeginPlay���� �����ȴٸ� GetAssetDynamic ���
	CHelpers::GetAssetDynamic<UCurveFloat>(&Curve, "CurveFloat'/Game/CAim.CAim'");
}

void UCAim::BeginPlay(ACharacter* InCharacter)
{
	OwnerCharacter = InCharacter;

	SpringArm = CHelpers::GetComponent<USpringArmComponent>(OwnerCharacter);
	Camera = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);
	State = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);
	

	TimelineFloat.BindUFunction(this, "Zooming");
	// AddInterFloat : Ÿ�Ӷ����� ����� ���� ȣ��� �������̼� �Լ��� �����ϴ� �Լ�
	Timeline.AddInterpFloat(Curve, TimelineFloat); // Static ������ �Ϲ�, �Ⱥ����� Dynamic Delegate
	Timeline.SetPlayRate(200); // 10�� ���� �� �� 0.005�ʵ��Ȱ�
}

void UCAim::OnZoom()
{
	CheckFalse(IsAvailable()); // SpringArm�� Camera�� ������ �ִ°�츸
	CheckTrue(bInZoom);

	bInZoom = true;

	SpringArm->TargetArmLength = 100.0f;
	SpringArm->SocketOffset = FVector(0, 30, 10);
	SpringArm->bEnableCameraLag = false; // ī�޶� �ε巴�� �̵��ϴ� ó�� ������

	//Camera->FieldOfView = 45.0f;

	Timeline.PlayFromStart(); // ������ ���ۺ��� ����
}

void UCAim::OffZoom()
{
	CheckFalse(bInZoom);

	bInZoom = false;

	SpringArm->TargetArmLength = 250.0f;
	SpringArm->SocketOffset = FVector(0, 0, 0);
	SpringArm->bEnableCameraLag = true; // ī�޶� �ε巴�� �̵��ϴ� ó�� ������

	//Camera->FieldOfView = 90.0f;

	Timeline.ReverseFromEnd(); // �ڿ��� ���� ����
}

void UCAim::Tick(float DeltaTime)
{
	Timeline.TickTimeline(DeltaTime);
}

void UCAim::Zooming(float Output)
{
	Camera->FieldOfView = Output;
}
