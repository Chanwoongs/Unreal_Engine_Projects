#include "C02_Log.h"
#include "Global.h"

AC02_Log::AC02_Log()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AC02_Log::BeginPlay()
{
	Super::BeginPlay();
	
	// Message ���
	CLog::Print(10);
	// id�� ����ϸ� �ش� �ٹ�ȣ�� �����Ͽ� ��� �����ϴ�.
	CLog::Print(20, 1);
	CLog::Print(30, 2, 20.0f);
	CLog::Print(40, 2, 20.0f);
	CLog::Print("Unreal GamePlay!");
	CLog::Print(GetActorLocation());
	CLog::Print(GetActorRotation());

	// Log ���
	CLog::Log(10);
	CLog::Log(PI);
	CLog::Log("Unreal GamePlay!");
	CLog::Log(GetActorLocation());
	CLog::Log(GetActorRotation());
	
	CLog::Log(this);
	CLog::Log(__FUNCTION__, __LINE__); // __FILE__


}

void AC02_Log::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Time += DeltaTime;
	CLog::Print(Time, 1);
}

