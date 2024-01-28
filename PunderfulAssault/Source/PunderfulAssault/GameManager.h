// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameManager.generated.h"

UCLASS()
class PUNDERFULASSAULT_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle CountdownTimerHandle;

	UPROPERTY(EditAnywhere, Category = "Time")
	float TimerValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
	int32 EnemiesInLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
	int32 EnemiesMadeToLaugh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Timer")
	class UTimerComponent* TimerComponentClass;

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	FString DisplayTimeToTimer(float TimeToDisplay);

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	FString DisplayEnemies(int EnemyCount);

	void CountdownTimer();
};
