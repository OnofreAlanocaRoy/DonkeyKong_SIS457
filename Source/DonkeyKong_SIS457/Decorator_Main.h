#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "MovimientoLineal.h"
#include "Decorator_Main.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API ADecorator_Main : public AActor
{
    GENERATED_BODY()

public:
    ADecorator_Main();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
