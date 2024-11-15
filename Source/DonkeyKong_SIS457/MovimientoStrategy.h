// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MovimientoStrategy.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMovimientoStrategy : public UInterface
{
	GENERATED_BODY()
};


class DONKEYKONG_SIS457_API IMovimientoStrategy
{
	GENERATED_BODY()
public:
	virtual void Mover(AActor* Enemigo, float DeltaTime) = 0;
};
