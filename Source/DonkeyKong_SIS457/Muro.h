#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.generated.h"

UCLASS(Abstract)
class DONKEYKONG_SIS457_API AMuro : public AActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AMuro();
	// Variable para la escala del muro
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Muro")
	FVector MuroScale;

	// Método para establecer la escala del muro
	void SetMuroScale(FVector NewScale);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	// Malla estática del muro
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Muro")
	UStaticMeshComponent* MuroMesh;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnCharacterImpact(AActor* CharacterActor);
};