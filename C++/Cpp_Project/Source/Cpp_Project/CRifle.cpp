#include "CRifle.h"
#include "Global.h"
#include "Components/SkeletalMeshComponent.h"

ACRifle::ACRifle()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<USkeletalMeshComponent>(this, &Mesh, "Mesh");

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Weapons/Meshes/AR4/SK_AR4.SK_AR4'");
	Mesh->SetSkeletalMesh(mesh);
	

}

void ACRifle::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

