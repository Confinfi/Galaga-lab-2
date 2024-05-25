// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arma.h"
#include "Escudo.h"
#include "ModuloVida.h"
#include "NaveBoss.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveBoss : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveBoss();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void EquiparArma(TSubclassOf<AArma> ArmaClass);
	void EquiparEscudo(TSubclassOf<AEscudo> EscudoClass);
	void EquiparModuloVida(TSubclassOf<AModuloVida> ModuloVidaClass);
};
