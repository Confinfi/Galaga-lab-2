// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilderNaveBoss.h"
#include "NaveBoss.h"
#include "Arma.h"
#include "Escudo.h"
#include "ModuloVida.h"
#include "BuilderNaveBossEasy.generated.h"
UCLASS()
class GALAGA_USFX_L01_API ABuilderNaveBossEasy : public AActor, public IIBuilderNaveBoss
{	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TSubclassOf<AArma> ArmaClass;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TSubclassOf<AEscudo> EscudoClass;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TSubclassOf<AModuloVida> ModuloVidaClass;

	UPROPERTY()
	ANaveBoss* NaveBossArmada;
public:
	virtual void BuildArma() override;
	virtual void BuildEscudo() override;
	virtual void BuildModuloVida() override;
	virtual class ANaveBoss* GetNaveBossArmada() override;
public:	
	// Sets default values for this actor's properties
	ABuilderNaveBossEasy();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:

};
