#include "C03_Cube.h"
#include "Global.h"
#include "Components/StaticMeshComponent.h"

AC03_Cube::AC03_Cube()
{
	CHelpers::CreateComponent<UStaticMeshComponent>(this, &Mesh, "Mesh");

	UStaticMesh* mesh;
	CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/Meshes/M_Cube.M_Cube'");
	Mesh->SetStaticMesh(mesh);
	Mesh->SetSimulatePhysics(true);
	Mesh->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody); // 프로젝트 세팅에 콜리전에 Preset에 오브젝트 유형 7번까지 있고 그다음부터 GameTraceChannel 1번
}

void AC03_Cube::BeginPlay()
{
	Super::BeginPlay();
	
}

