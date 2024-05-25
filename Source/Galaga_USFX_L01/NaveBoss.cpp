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
    // L�gica para equipar un arma en la NaveBoss
    // Aqu� puedes instanciar el arma y asociarla a la NaveBoss, por ejemplo:
    AArma* ArmaInstancia = GetWorld()->SpawnActor<AArma>(ArmaClass, GetActorLocation(), GetActorRotation());
    // L�gica adicional seg�n tus necesidades
}

void ANaveBoss::EquiparEscudo(TSubclassOf<AEscudo> EscudoClass)
{
    // L�gica para equipar un escudo en la NaveBoss
    // Aqu� puedes instanciar el escudo y asociarlo a la NaveBoss, por ejemplo:
    AEscudo* EscudoInstancia = GetWorld()->SpawnActor<AEscudo>(EscudoClass, GetActorLocation(), GetActorRotation());
    // L�gica adicional seg�n tus necesidades
}

void ANaveBoss::EquiparModuloVida(TSubclassOf<AModuloVida> ModuloVidaClass)
{
    // L�gica para equipar un m�dulo de vida en la NaveBoss
    // Aqu� puedes instanciar el m�dulo de vida y asociarlo a la NaveBoss, por ejemplo:
    AModuloVida* ModuloVidaInstancia = GetWorld()->SpawnActor<AModuloVida>(ModuloVidaClass, GetActorLocation(), GetActorRotation());
    // L�gica adicional seg�n tus necesidades
}
