#include "CAttachment_Rifle.h"
#include "Global.h"
#include "Components/SkeletalMeshComponent.h"

ACAttachment_Rifle::ACAttachment_Rifle()
{
	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/Weapons/Meshes/AR4/SK_AR4.SK_AR4'");
	Skeletal->SetSkeletalMesh(mesh);
}

void ACAttachment_Rifle::BeginPlay()
{
	Super::BeginPlay();

	FName HolsterSocket = "Holster_Rifle";
	AttachTo(HolsterSocket);
}

void ACAttachment_Rifle::OnEquip_Implementation()
{
	FName handSocket = "Hand_Rifle";
	AttachTo(handSocket);
}

void ACAttachment_Rifle::OnUnequip_Implementation()
{
	FName HolsterSocket = "Holster_Rifle";
	AttachTo(HolsterSocket);
}
