#include "C01_Property.h"

AC01_Property::AC01_Property()
{
	PrimaryActorTick.bCanEverTick = true;
	
	C = 50;
}

void AC01_Property::BeginPlay()
{
	Super::BeginPlay();
	
	// F 구조체 접두사, A는 Actor로 부터 상속 받은 것, Enum은 E
	FString str;
	str.Append("A : ");
	str.Append(FString::FromInt(A));
	str.Append(", B : ");
	str.Append(FString::FromInt(B));
	str.Append(", C : ");
	str.Append(FString::FromInt(C));

	GLog->Log(str);
}

void AC01_Property::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

