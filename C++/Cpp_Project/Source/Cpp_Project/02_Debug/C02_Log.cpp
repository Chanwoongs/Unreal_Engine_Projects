#include "C02_Log.h"
#include "Global.h"

AC02_Log::AC02_Log()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AC02_Log::BeginPlay()
{
	Super::BeginPlay();
	
	CLog::Print(10);
}

void AC02_Log::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

