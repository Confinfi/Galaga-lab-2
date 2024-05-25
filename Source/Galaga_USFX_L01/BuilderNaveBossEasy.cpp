// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderNaveBossEasy.h"
#include "NaveBoss.h"
#include "Arma.h"
#include "ModuloVida.h"
#include "Escudo.h"

// Sets default values
ABuilderNaveBossEasy::ABuilderNaveBossEasy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
}
void ABuilderNaveBossEasy::BuildArma()
{
    // Lógica para construir el arma de la NaveBoss
    NaveBossArmada->EquiparArma(ArmaClass);
}

void ABuilderNaveBossEasy::BuildEscudo()
{
    // Lógica para construir el escudo de la NaveBoss
    NaveBossArmada->EquiparEscudo(EscudoClass);
}

void ABuilderNaveBossEasy::BuildModuloVida()
{
    // Lógica para construir el módulo de vida de la NaveBoss
    NaveBossArmada->EquiparModuloVida(ModuloVidaClass);
}

ANaveBoss* ABuilderNaveBossEasy::GetNaveBossArmada()
{
    return NaveBossArmada;
}

// Called when the game starts or when spawned
void ABuilderNaveBossEasy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuilderNaveBossEasy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

