#include "C03_Particles.h"
#include "Global.h"
#include "C03_EventTrigger.h"
#include "Components/TextRenderComponent.h"
#include "Particles/ParticleSystem.h"


AC03_Particles::AC03_Particles()
{
	CHelpers::CreateComponent<USceneComponent>(this, &Scene, "Scene");
	CHelpers::CreateComponent<UTextRenderComponent>(this, &Text, "Text", Scene);

	Text->SetRelativeLocation(FVector(0, 0, 100));
	Text->SetRelativeRotation(FRotator(0, 180, 0));
	Text->SetRelativeScale3D(FVector(2));
	Text->TextRenderColor = FColor::Red;
	Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	Text->Text = FText::FromString(GetName());

	CHelpers::GetAsset<UParticleSystem>(&Particles[0], "ParticleSystem'/Game/Effects/P_Genno_Weapon_Lightning_01.P_Genno_Weapon_Lightning_01'");
	CHelpers::GetAsset<UParticleSystem>(&Particles[1], "ParticleSystem'/Game/Effects/P_Cube_Mesh_Test.P_Cube_Mesh_Test'");
	CHelpers::GetAsset<UParticleSystem>(&Particles[2], "ParticleSystem'/Game/Effects/P_HeldCharge_Ice_00.P_HeldCharge_Ice_00'");
}

void AC03_Particles::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AC03_EventTrigger*> triggers;
	CHelpers::FindActors<AC03_EventTrigger>(GetWorld(), triggers);

	triggers[0]->OnEventTrigger.AddUFunction(this, "PlayParticle"); // AddUFunction 으로 함수 추가

	// Delegate는 다른 클래스에서 실행 가능 하지만 Event는 해당 클래스 내부에서만 연결과 호출이 가능하다. 관리 측면의 장단점이있다.
	// C 내부적으로 할때만 Delegate나 Event를 사용하고, 블프와 통신할때는 Dynamic Delegation

}

void AC03_Particles::PlayParticle(int32 InIndex)
{
	FTransform transform;
	transform.SetLocation(GetActorLocation());

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particles[InIndex], transform);
}




