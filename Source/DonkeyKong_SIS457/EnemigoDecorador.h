#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enemigo.h" // Include the header file for the Enemigo class
#include "EnemigoDecorador.generated.h"

// Esta clase no necesita ser modificada.
UINTERFACE(MinimalAPI)
class UEnemigoDecorador : public UInterface
{
    GENERATED_BODY()
};

class DONKEYKONG_SIS457_API IEnemigoDecorador
{
    GENERATED_BODY()

public:
    AEnemigo* Enemigo;  // Este puntero debe apuntar al enemigo concreto

    // Método abstracto para vigilar
    virtual void Vigilar() = 0;
};
