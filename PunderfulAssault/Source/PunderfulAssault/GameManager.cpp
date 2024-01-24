// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create TimerComponent component
	TimerComponentClass = CreateDefaultSubobject<UTimerComponent>(TEXT("TimerComponent"));

}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	
	TimerComponentClass->SetTimeRemaining(TimerValue);

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AGameManager::CountdownTimer, 1.0f, true);

}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AGameManager::DisplayTimeToTimer(float TimeToDisplay)
{
	//Could easily wrap lines 34-39 into it's own function, 
	// but it's only ever going to used for one level, so not much point
	int32 TotalSeconds = FMath::RoundToInt(TimeToDisplay);
	int32 Minutes = TotalSeconds / 60;
	int32 SecondsRemaining = TotalSeconds % 60;

	FString MMSS = FString::Printf(TEXT("%02d:%02d"), Minutes, SecondsRemaining);

	return MMSS;

}

void AGameManager::CountdownTimer()
{
	--TimerComponentClass->TimeRemaining;

	if (TimerComponentClass->GetTimeRemaining() < 0.01f) {
		//We're done counting down, so stop running the timer.
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		UE_LOG(LogTemp, Warning, TEXT("Game over"));
	}
}

