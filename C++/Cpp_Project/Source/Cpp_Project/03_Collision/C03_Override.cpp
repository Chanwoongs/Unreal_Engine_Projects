#include "C03_Override.h"
#include "Global.h"
#include "CPlayer.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"

AC03_Override::AC03_Override()
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

void AC03_Override::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorBeginOverlap.AddDynamic(this, &AC03_Override::ActorBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AC03_Override::ActorEndOverlap);

}

void AC03_Override::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	CLog::Print("override Overlapped");
	ChangeColorRed();
}

void AC03_Override::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	CLog::Print("override Exited");
	ChangeColorWhite();
}

void AC03_Override::ChangeColorWhite_Implementation()
{
	ACPlayer* player = Cast<ACPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	player->ChangeColor(FLinearColor(0, 0, 1));
}
