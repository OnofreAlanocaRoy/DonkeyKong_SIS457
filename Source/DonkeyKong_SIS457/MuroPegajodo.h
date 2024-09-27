// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroPegajodo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AMuroPegajodo : public AMuro
{
    GENERATED_BODY()

public:
    AMuroPegajodo();

    virtual void OnCharacterImpact(AActor* CharacterActor) override;
};