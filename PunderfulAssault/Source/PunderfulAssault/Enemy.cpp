// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create HealthComponent component
	HealthComponentClass = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

	// Set default values
	FiringRange = 100.0f;
	FireRate = 1.0f;
	TimeSinceLastFire = 0.0f;
	bCanFire = true;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	HealthComponentClass->SetMaxHP(1);

	// Get a reference to the player character
	// You may need to implement your own logic for finding the player character
	PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Calculate distance to player
	float DistanceToPlayer = FVector::Distance(GetActorLocation(), PlayerCharacter->GetActorLocation());

	if (DistanceToPlayer <= FiringRange && bCanFire)
	{
		Fire();
	}

	if (HealthComponentClass->GetHP() <= 0) {
		MadeToLaugh = true;
	}
}

void AEnemy::Fire()
{
	// Attempt to fire a projectile.
	if (ProjectileClass)
	{
		FVector SpawnLocation = GetActorLocation();
		FRotator SpawnRotation = GetActorRotation();
		APunderfulAssaultProjectile* Projectile = GetWorld()->SpawnActor<APunderfulAssaultProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		
		if (Projectile)
		{
			// Set the projectile's initial trajectory.
			FVector LaunchDirection = (PlayerCharacter->GetActorLocation() - SpawnLocation).GetSafeNormal();
			Projectile->FireInDirection(LaunchDirection);
		}

		// Start cooldown timer
		bCanFire = false;
		GetWorldTimerManager().SetTimer(TimerHandle_FireCooldown, this, &AEnemy::ResetFireCooldown, FireRate, false);
	}
}

void AEnemy::ResetFireCooldown()
{
	bCanFire = true;
}
