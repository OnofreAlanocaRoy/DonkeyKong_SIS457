// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroPegajodo.generated.h"

class UParticleSystemComponent;
UCLASS()
class DONKEYKONG_SIS457_API AMuroPegajodo : public AMuro
{
    GENERATED_BODY()
protected:
    // Se llama cuando comienza el juego o cuando se genera
    virtual void BeginPlay() override;
    UParticleSystemComponent* ParticleSystem;

public:
    AMuroPegajodo();

    virtual void OnCharacterImpact(AActor* CharacterActor) override;

    virtual void Tick(float DeltaTime) override;
    virtual void ejercerAccion() override;
};