// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModuloVida.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AModuloVida : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModuloVida();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
