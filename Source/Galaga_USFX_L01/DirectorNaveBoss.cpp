// Fill out your copyright notice in the Description page of Project Settings.

#include "DirectorNaveBoss.h"
#include "IDirectorNaveBoss.h"
#include "IBuilderNaveBoss.h" // Add the include for IBuilderNaveBoss

// Sets default values
ADirectorNaveBoss::ADirectorNaveBoss()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;
}

void ADirectorNaveBoss::ConstructNaveBoss(IBuilderNaveBoss* Builder)
{
    if (Builder)
    {
        // Construir la Nave Boss utilizando el Builder proporcionado
        Builder->BuildArma();
        Builder->BuildEscudo();
        Builder->BuildModuloVida();
    }
}

// Called when the game starts or when spawned
void ADirectorNaveBoss::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ADirectorNaveBoss::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
