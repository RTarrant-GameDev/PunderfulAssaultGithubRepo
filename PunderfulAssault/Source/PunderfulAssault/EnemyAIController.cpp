// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "DrawDebugHelpers.h"
#include <Kismet/GameplayStatics.h>

void AEnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CanSeePlayer())
	{
		UE_LOG(LogTemp, Warning, TEXT("Player spotted by %s"), FString(GetPawn()->GetName()));
	}
}

bool AEnemyAIController::CanSeePlayer() const
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!PlayerPawn)
		return false;

	FVector EnemyLocation = GetPawn()->GetActorLocation();
	FVector PlayerLocation = PlayerPawn->GetActorLocation();

	FVector Direction = PlayerLocation - EnemyLocation;
	Direction.Normalize();

	// Perform line trace to check if any obstacles are present between enemy and player
	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetPawn()); //Ignore enemy itself

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, EnemyLocation, PlayerLocation, ECollisionChannel::ECC_Visibility, Params);

	// Draw debug line
	if (bHit)
	{
		DrawDebugLine(GetWorld(), EnemyLocation, HitResult.ImpactPoint, FColor::Red, false, 0.1f, 0, 5);
	}
	else
	{
		DrawDebugLine(GetWorld(), EnemyLocation, PlayerLocation, FColor::Green, false, 0.1f, 0, 5);
	}

	// Check if line trace hit something
	if (bHit)
	{
		if (HitResult.GetActor() == PlayerPawn)
		{
			return true;
		}
	}

	return false;
}


