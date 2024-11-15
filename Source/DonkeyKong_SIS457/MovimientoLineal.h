#pragma once

#include "CoreMinimal.h"
#include "MovimientoStrategy.h"
#include "MovimientoLineal.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API UMovimientoLineal : public UObject, public IMovimientoStrategy
{
    GENERATED_BODY()

public:
    virtual void Mover(AActor* Enemigo, float DeltaTime) override;
};
