#include "C03_Trigger.h"
#include "Global.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"

AC03_Trigger::AC03_Trigger()
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

void AC03_Trigger::BeginPlay()
{
	Super::BeginPlay();

	OnActorBeginOverlap.AddDynamic(this, &AC03_Trigger::ActorBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AC03_Trigger::ActorEndOverlap);
}


void AC03_Trigger::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OnBoxLightBeginOverlap.IsBound()) // Delegate에 연결되어 있는 함수가 하나라도 있다면
	{
		OnBoxLightBeginOverlap.Execute(); // 싱글캐스트에서 연결되어 있는 함수를 실행
	}
}

void AC03_Trigger::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OnBoxLightEndOverlap.IsBound()) // Delegate에 연결되어 있는 함수가 하나라도 있다면
	{
		OnBoxLightEndOverlap.Execute(); // 싱글캐스트에서 연결되어 있는 함수를 실행
	}
}

