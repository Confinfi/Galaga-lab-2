// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveBoss.h"

// Sets default values
ANaveBoss::ANaveBoss()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveBoss::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ANaveBoss::EquiparArma(TSubclassOf<AArma> ArmaClass)
{
    // Lógica para equipar un arma en la NaveBoss
    // Aquí puedes instanciar el arma y asociarla a la NaveBoss, por ejemplo:
    AArma* ArmaInstancia = GetWorld()->SpawnActor<AArma>(ArmaClass, GetActorLocation(), GetActorRotation());
    // Lógica adicional según tus necesidades
}

void ANaveBoss::EquiparEscudo(TSubclassOf<AEscudo> EscudoClass)
{
    // Lógica para equipar un escudo en la NaveBoss
    // Aquí puedes instanciar el escudo y asociarlo a la NaveBoss, por ejemplo:
    AEscudo* EscudoInstancia = GetWorld()->SpawnActor<AEscudo>(EscudoClass, GetActorLocation(), GetActorRotation());
    // Lógica adicional según tus necesidades
}

void ANaveBoss::EquiparModuloVida(TSubclassOf<AModuloVida> ModuloVidaClass)
{
    // Lógica para equipar un módulo de vida en la NaveBoss
    // Aquí puedes instanciar el módulo de vida y asociarlo a la NaveBoss, por ejemplo:
    AModuloVida* ModuloVidaInstancia = GetWorld()->SpawnActor<AModuloVida>(ModuloVidaClass, GetActorLocation(), GetActorRotation());
    // Lógica adicional según tus necesidades
}
