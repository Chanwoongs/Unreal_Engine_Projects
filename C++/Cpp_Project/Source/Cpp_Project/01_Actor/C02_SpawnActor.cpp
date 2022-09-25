#include "C02_SpawnActor.h"
#include "Global.h"
#include "Components/StaticMeshComponent.h"

AC02_SpawnActor::AC02_SpawnActor()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

	//StaticMesh'/Game/Meshes/M_Cube.M_Cube'
	//StaticMesh'/Engine/BasicShapes/Cube.Cube'

	//ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(L"StaticMesh'/Game/Meshes/M_Cube.M_Cube'");
	//if (mesh.Succeeded())
		// StaticMesh ¼³Á¤
		//Mesh->SetStaticMesh(mesh.Object);

	UStaticMesh* mesh;
	CHelpers::GetAsset<UStaticMesh>(&mesh, "StaticMesh'/Game/Meshes/M_Cube.M_Cube'");
	Mesh->SetStaticMesh(mesh);
}


void AC02_SpawnActor::BeginPlay()
{
	Super::BeginPlay();
	
}

