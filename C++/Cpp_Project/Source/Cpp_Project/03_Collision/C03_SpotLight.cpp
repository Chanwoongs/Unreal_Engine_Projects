#include "C03_SpotLight.h"
#include "Global.h"
#include "C03_MulticastTrigger.h"
#include "Components/TextRenderComponent.h"
#include "Components/SpotLightComponent.h"


AC03_SpotLight::AC03_SpotLight()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Scene, "Scene");
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Scene);

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	Text->Text = FText::FromString(GetName());

	for (int32 i = 0; i < 3; i++)
	{
		FString str;
		str.Append("SpotLights_").Append(FString::FromInt(i + 1));

		CHelpers::CreateComponent<USpotLightComponent>(this, &SpotLights[i], FName(str), Scene);

		SpotLights[i]->SetRelativeLocation(FVector(0, i * 150, 0));
		SpotLights[i]->SetRelativeRotation(FRotator(-90, 0, 0));
		SpotLights[i]->Intensity = 1e+5f;
		SpotLights[i]->OuterConeAngle = 25.0f;


	}

}

void AC03_SpotLight::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AC03_MulticastTrigger*> triggers;
	CHelpers::FindActors< AC03_MulticastTrigger>(GetWorld(), triggers);

	triggers[0]->OnMultiLightBeginOverlap.AddUFunction(this, "OnLightColor"); // AddUFunction 으로 함수 추가

	// Delegate는 다른 클래스에서 실행 가능 하지만 Event는 해당 클래스 내부에서만 연결과 호출이 가능하다. 관리 측면의 장단점이있다.
	// C 내부적으로 할때만 Delegate나 Event를 사용하고, 블프와 통신할때는 Dynamic Delegation
	if (triggers[0]->OnMultiLightBeginOverlap.IsBound())
	{
		triggers[0]->OnMultiLightBeginOverlap.Broadcast(0, FLinearColor(0, 0, 1));
	}
}

void AC03_SpotLight::OnLightColor(int32 InIndex, FLinearColor InColor)
{
	for (int32 i = 0; i < 3; i++)
	{
		SpotLights[i]->SetLightColor(FLinearColor(1, 1, 1));
	}

	SpotLights[InIndex]->SetLightColor(InColor);
}

