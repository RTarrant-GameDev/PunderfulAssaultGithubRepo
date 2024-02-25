// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "PunderfulAssaultProjectile.h"
#include "HealthComponent.h"
#include "Enemy.generated.h"

UCLASS()
class PUNDERFULASSAULT_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health")
	class UHealthComponent* HealthComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	bool MadeToLaugh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
    float FiringRange;

    UPROPERTY(EditAnywhere)
    float FireRate;

	UPROPERTY(EditAnywhere)
	float DistanceToPlayer;


protected:
	// Projectile class to spawn.
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class APunderfulAssaultProjectile> ProjectileClass;

public:
	UFUNCTION(BlueprintCallable, Category="Gameplay")
	void Fire();

	UPROPERTY(EditAnywhere)
	float DistanceToSpawnProjectile;

private:
	ACharacter* PlayerCharacter;
	FTimerHandle TimerHandle_FireCooldown; // Declare TimerHandle variable

	float TimeSinceLastFire;
	bool bCanFire;

	void ResetFireCooldown(); //Reset fire cooldown
};
