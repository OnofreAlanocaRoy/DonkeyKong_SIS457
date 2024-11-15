#pragma once

#include "CoreMinimal.h"

class DONKEYKONG_SIS457_API IMovimientoStrategy
{
public:
    virtual ~IMovimientoStrategy() = default;
    virtual void Mover(AActor* Enemigo, float DeltaTime) = 0;
};