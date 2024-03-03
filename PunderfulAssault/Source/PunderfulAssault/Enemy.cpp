// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "DrawDebugHelpers.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create HealthComponent component
	HealthComponentClass = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

	////Create EnemyAIController component
	//EnemyAIControllerClass = CreateDefaultSubobject<AEnemyAIController>(TEXT("EnemyAIController"));

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

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);

	// Calculate distance to player
	DistanceToPlayer = FVector::Distance(GetActorLocation(), PlayerCharacter->GetActorLocation());

	// Perform line trace to check if any obstacles are present between enemy and player
	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this); //Ignore enemy itself

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, GetActorLocation(), PlayerCharacter->GetActorLocation(), ECollisionChannel::ECC_Visibility, Params);

	// Draw debug line
	if (bHit)
	{
		DrawDebugLine(GetWorld(), GetActorLocation(), HitResult.ImpactPoint, FColor::Red, false, 0.1f, 0, 5);
	}
	else
	{
		DrawDebugLine(GetWorld(), GetActorLocation(), PlayerCharacter->GetActorLocation(), FColor::Green, false, 0.1f, 0, 5);
	}

	// Check if line trace hit something
	if (bHit && DistanceToPlayer <= FiringRange && bCanFire)
	{
		if (HitResult.GetActor() == PlayerPawn)
		{
			Fire();
		}
	}
	
	if (HealthComponentClass->GetHP() <= 0) {
		MadeToLaugh = true;
	}

	if (MadeToLaugh) 
	{
		bCanFire = false;
	}
}

void AEnemy::Fire()
{
//	// Attempt to fire a projectile.
	if (ProjectileClass)
	{
		// Calculate offset to spawn projectile away from the enemy
		FVector Offset = GetActorForwardVector() * DistanceToSpawnProjectile;


		FVector SpawnLocation = GetActorLocation();
		FRotator SpawnRotation = GetActorRotation();
		APunderfulAssaultProjectile* Projectile = GetWorld()->SpawnActor<APunderfulAssaultProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		

		if (Projectile)
		{
			Projectile->SetProjectileType("Enemy");
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
