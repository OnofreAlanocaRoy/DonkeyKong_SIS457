
#pragma once
#include "CoreMinimal.h"
#include "Obtaculo.h"
#include "obtaculoFuego.generated.h"
class UStaticMeshComponent;

UCLASS()
class DONKEYKONG_SIS457_API AobtaculoFuego : public AObtaculo
{
    GENERATED_BODY()

public:
    AobtaculoFuego();

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* FuegoMesh;

    void Desaparecer();
};