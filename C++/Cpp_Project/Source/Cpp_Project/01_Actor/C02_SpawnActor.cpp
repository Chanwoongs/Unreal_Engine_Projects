#include "C02_SpawnActor.h"

AC02_SpawnActor::AC02_SpawnActor()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

}


void AC02_SpawnActor::BeginPlay()
{
	Super::BeginPlay();
	
}

