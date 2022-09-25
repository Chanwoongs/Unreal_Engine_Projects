#include "C03_Spawner.h"
#include "Global.h"
#include "C02_SpawnActor.h"

AC03_Spawner::AC03_Spawner()
{

}

void AC03_Spawner::BeginPlay()
{
	Super::BeginPlay();

	// int 32byte 자료형 -> 언리얼은 PC용만이 아니기 때문에 해당 플랫폼의 
	// 자료형의 크기로 자동으로 변환해서 사용할 수 있도록 해줌, 어떤 플랫폼이건 32바이트를 쓰겠다.
	for (int32 i = 0; i < 3; i++) 
	{
		FTransform transform;
		FVector location = GetActorLocation();

		// 등장시키면서 바로 위치 조정 -> 옮긴 후 다른 작업
		transform.SetLocation(FVector((location.X + i * 400), location.Y, location.Z));

		SpawnActors[i] = GetWorld()->SpawnActor<AC02_SpawnActor>(SpawnClass[i], transform);
		// 등장 시킨 후 위치 조정 -> 다른 작업 후 옮김
		//SpawnActors[i]->SetActorLocation(FVector((location.X + i * 400), location.Y, location.Z));
		
	}
	
}

