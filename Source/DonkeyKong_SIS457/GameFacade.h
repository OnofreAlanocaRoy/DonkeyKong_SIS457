#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"  // Incluimos la clase AEnemigo
#include "GameFacade.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AGameFacade : public AActor
{
	GENERATED_BODY()

public:
    AGameFacade();

protected:
    virtual void BeginPlay() override;

public:
    void GenerarEnemigo();

    UPROPERTY(EditAnywhere, Category = "Enemigos")
    TSubclassOf<AEnemigo> EnemigoClass;  // Clase asignable de enemigo
};