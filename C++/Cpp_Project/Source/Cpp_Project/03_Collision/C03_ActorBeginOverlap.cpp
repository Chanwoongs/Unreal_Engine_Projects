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
	
	// Delegate�� Event �Լ��� �׻� On���� ����
	// �⺻ Delegate�� C++��������, Dynamic Delegate�� ���������� ��� ����
	// Dynamic Delegate
	// �Ϲ� Delegate�� �Ķ���� ������ Ÿ���� ��ġ�ϸ� ������
	// Dynamic Delegate�� �Ķ������ �̸������� ��ġ�ؾ� �Ѵ�.
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

