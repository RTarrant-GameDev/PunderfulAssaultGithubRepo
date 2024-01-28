// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create HealthComponent component
	HealthComponentClass = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	HealthComponentClass->SetMaxHP(1);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HealthComponentClass->GetHP() <= 0) {
		MadeToLaugh = true;
	}
}

