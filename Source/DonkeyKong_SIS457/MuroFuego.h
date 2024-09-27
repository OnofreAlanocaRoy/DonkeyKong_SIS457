// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroFuego.generated.h"

/**
 *
 */
UCLASS()
class DONKEYKONG_SIS457_API AMuroFuego : public AMuro
{
	GENERATED_BODY()
public:
	AMuroFuego();

	virtual void OnCharacterImpact(AActor* CharacterActor) override;  // Sobrescribir comportamiento
};
