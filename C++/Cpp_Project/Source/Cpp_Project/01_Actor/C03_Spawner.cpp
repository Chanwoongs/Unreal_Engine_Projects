#include "C03_Spawner.h"
#include "Global.h"
#include "C02_SpawnActor.h"

AC03_Spawner::AC03_Spawner()
{

}

void AC03_Spawner::BeginPlay()
{
	Super::BeginPlay();

	// int 32byte �ڷ��� -> �𸮾��� PC�븸�� �ƴϱ� ������ �ش� �÷����� 
	// �ڷ����� ũ��� �ڵ����� ��ȯ�ؼ� ����� �� �ֵ��� ����, � �÷����̰� 32����Ʈ�� ���ڴ�.
	for (int32 i = 0; i < 3; i++) 
	{
		FTransform transform;
		FVector location = GetActorLocation();

		// �����Ű�鼭 �ٷ� ��ġ ���� -> �ű� �� �ٸ� �۾�
		transform.SetLocation(FVector((location.X + i * 400), location.Y, location.Z));

		SpawnActors[i] = GetWorld()->SpawnActor<AC02_SpawnActor>(SpawnClass[i], transform);
		// ���� ��Ų �� ��ġ ���� -> �ٸ� �۾� �� �ű�
		//SpawnActors[i]->SetActorLocation(FVector((location.X + i * 400), location.Y, location.Z));
		
	}
	
}

