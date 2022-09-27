#include "C02_DrawDebug.h"
#include "Global.h"

AC02_DrawDebug::AC02_DrawDebug()
{
	PrimaryActorTick.bCanEverTick = true;

	InitLocation[0] = FVector::ZeroVector;
	InitLocation[1] = FVector(0, 1000, 0);
	InitLocation[2] = FVector(0, 400, 0);
	InitLocation[3] = FVector(0, 1600, 0);
	InitLocation[4] = FVector(300, 1000, 0);

	// 박스 두점의 정보 할당
	Box = FBox(FVector(-50, -100, -50), FVector(50, 100, 50));
	Transform.SetLocation(FVector(200, 1600, 0));
}

void AC02_DrawDebug::BeginPlay()
{
	Super::BeginPlay();
	
	for (int32 i = 0; i < 5; i++)
	{
		Location[i] = InitLocation[i] + GetActorLocation();
	}

	//DrawDebugBox(GetWorld(), Location[0] + Box.GetCenter(), Box.GetExtent(), FColor::Red, true); // true는 BeginPlay에서만 켜줌. Tick에선 끔
}

void AC02_DrawDebug::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (int32 i = 0; i < 5; i++)
	{
		Location[i] = InitLocation[i] + GetActorLocation();
	}

	// 인자 : 월드, 위치, 부피, 색
	DrawDebugSolidBox(GetWorld(), Location[0] + Box.GetCenter(), Box.GetExtent(), FColor::Red);
	// 인자 : 월드, 위치, 크기, 색
	DrawDebugPoint(GetWorld(), Location[1], 100, FColor::Red);
	// 인자 : 월드, 위치, 크기, 정밀도, 색
	DrawDebugSphere(GetWorld(), Location[2], 100, 50, FColor::Green);
	// 인자 : 월드, 위치, 크기, 정밀도, 색
	DrawDebugCircle(GetWorld(), Location[3], 100, 60, FColor::Blue);
	// 인자 : 월드, 위치1, 위치2, 색, 유지, 생명주기, 깊이, 두께
	DrawDebugLine(GetWorld(), Location[2], Location[3], FColor::Red, false, -1, 0, 2);

	// Sin 함수 활용
	FVector location = Location[1];
	location.X += 100;
	location.Z += 100;
	location.Y += sin(GetWorld()->GetTimeSeconds() * 3.0f) * 300;

	DrawDebugPoint(GetWorld(), location, 100, FColor::Emerald);

	// 인자 : 월드, 시작, 끝, 크기, 색, 유지, 생명주기, 깊이, 두께
	DrawDebugDirectionalArrow(GetWorld(), location, Location[3], 360, FColor::Yellow, false, -1, 0, 10);

	
}


