#include "CEnemy.h"
#include "Global.h"

ACEnemy::ACEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACEnemy::ChangeColor(FLinearColor InColor)
{
	BodyMaterial->SetVectorParameterValue("BodyColor", InColor);
	LogoMaterial->SetVectorParameterValue("BodyColor", InColor);
}



