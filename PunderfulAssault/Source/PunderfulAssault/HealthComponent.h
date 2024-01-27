// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PUNDERFULASSAULT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 maxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	int32 currHP;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetHP(int32 HPAmountToSet);

	void SetMaxHP(int32 MaxHPToSet);

	UFUNCTION(BlueprintCallable, Category = "Health")
	int32 GetHP();
};
