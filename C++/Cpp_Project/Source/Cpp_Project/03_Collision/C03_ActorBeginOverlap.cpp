#include "C03_ActorBeginOverlap.h"
#include "Global.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"

AC03_ActorBeginOverlap::AC03_ActorBeginOverlap()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Scene, "Scene");
	CHelpers::CreateComponent<UBoxComponent>(this, &Box, "Box", Scene);
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Scene);

	Box->SetRelativeScale3D(FVector(3));
	Box->bHiddenInGame = false;

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	Text->Text = FText::FromString(GetName());

}

void AC03_ActorBeginOverlap::BeginPlay()
{
	Super::BeginPlay();
	
	// Delegate나 Event 함수는 항상 On으로 시작
	// 기본 Delegate는 C++내에서만, Dynamic Delegate는 블프에서도 사용 가능
	// Dynamic Delegate
	// 일반 Delegate는 파라미터 순서와 타입이 일치하면 되지만
	// Dynamic Delegate는 파라미터의 이름까지도 일치해야 한다.
	OnActorBeginOverlap.AddDynamic(this, &AC03_ActorBeginOverlap::ActorBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AC03_ActorBeginOverlap::ActorEndOverlap);
}

void AC03_ActorBeginOverlap::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	FString str;
	str.Append("C++ Actor Begin Overlap : ");
	str.Append(OtherActor->GetName());
	CLog::Log(str);
}

void AC03_ActorBeginOverlap::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	FString str;
	str.Append("C++ Actor End Overlap : ");
	str.Append(OtherActor->GetName());
	CLog::Log(str);
}

