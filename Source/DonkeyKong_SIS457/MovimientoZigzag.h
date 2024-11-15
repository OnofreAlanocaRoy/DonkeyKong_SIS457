 #pragma once

#include "CoreMinimal.h"
#include "MovimientoStrategy.h"
#include "MovimientoZigzag.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API UMovimientoZigzag : public UObject, public IMovimientoStrategy
{
    GENERATED_BODY()
	//Mover es un metodo que se encarga de mover al enemigo
public:
    virtual void Mover(AActor* Enemigo, float DeltaTime) override;
};
