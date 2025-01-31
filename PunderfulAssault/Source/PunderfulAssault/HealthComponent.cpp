// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UHealthComponent::SetHP(int32 HPAmountToSet)
{
	//Set to 0 to prevent going into negatives
	if (currHP > 0) {
		currHP += HPAmountToSet;
	}
	else if (currHP <= 0) {
		currHP = 0;
	}
}

void UHealthComponent::SetMaxHP(int32 MaxHPToSet)
{
	maxHP = MaxHPToSet;
	currHP = maxHP;
}

int32 UHealthComponent::GetHP()
{
	return currHP;
}

