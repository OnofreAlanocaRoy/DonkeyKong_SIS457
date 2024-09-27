#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroLadrillo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AMuroLadrillo : public AMuro
{
	GENERATED_BODY()

public:
	AMuroLadrillo();
	virtual void OnCharacterImpact(AActor* CharacterActor) override;
};
