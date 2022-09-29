#include "C03_Light.h"
#include "Global.h"
#include "C03_Trigger.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/PointLightComponent.h"

AC03_Light::AC03_Light()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Scene, "Scene");
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Scene);
	CHelpers::CreateComponent<UPointLightComponent>(this, &PointLight, "PointLight", Scene);

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	Text->Text = FText::FromString(GetName());

	PointLight->Intensity = 1e+4f; //10^4, 1e-6f == 0.000001
	PointLight->AttenuationRadius = 200; // 빛 반경
	PointLight->LightColor = FColor(255, 128, 50);
}

void AC03_Light::BeginPlay()
{
	Super::BeginPlay();

	PointLight->SetVisibility(false);

	// UGameplayStatics -> Gameplay 하는데에 도움되는 것의 모음
	TArray<AActor*> actors; // TArray : 가변형 배열, vector container와 유사한 기능을 가진다.
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AC03_Trigger::StaticClass(), actors); // StaticClass -> 자기 자신의 대한 UClass 포인터 리턴
	CheckFalse(actors.Num() > 0);

	AC03_Trigger* trigger = Cast<AC03_Trigger>(actors[0]);
	trigger->OnBoxLightBeginOverlap.BindUFunction(this, "OnLight"); // UFunction을 연결
	trigger->OnBoxLightEndOverlap.BindUFunction(this, "OffLight"); 
}

void AC03_Light::OnLight()
{
	PointLight->SetVisibility(true);
}

void AC03_Light::OffLight()
{
	PointLight->SetVisibility(false);
}
