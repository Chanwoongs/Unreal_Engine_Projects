// Fill out your copyright notice in the Description page of Project Settings.


#include "CThrow.h"

// Sets default values
ACThrow::ACThrow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACThrow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACThrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

