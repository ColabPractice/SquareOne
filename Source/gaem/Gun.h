// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Gun.generated.h"

/**
 * 
 */
UCLASS()
class GAEM_API AGun : public AActor
{
	GENERATED_BODY()

	
	
	AGun(const class FObjectInitializer& ObjectInitializer);


public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun)
		float damage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun)
		float fireRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gun)
		float speed;


};
