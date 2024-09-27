#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroCongelado.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AMuroCongelado : public AMuro
{
    GENERATED_BODY()

public:
    AMuroCongelado();

    virtual void OnCharacterImpact(AActor* CharacterActor) override;  // Sobrescribir comportamiento
};