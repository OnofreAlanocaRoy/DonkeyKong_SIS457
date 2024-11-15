#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFacade.h"
#include "MovimientoLineal.h"
#include "MovimientoZigzag.h"
#include "DonkeyKong_SIS457GameMode.generated.h"
	
class AObtaculo;
class AComponentePlataforma;
class ADonkeyKong_SIS457Character;
class ABarril;
class AMuro;
class AEnemigo;
class APlataformaMovil;
class AEnemigo;

UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	ADonkeyKong_SIS457GameMode();

	ADonkeyKong_SIS457Character* player01;
	TArray<ABarril*> Barriles;
	// Método para invocar la generación de enemigos y obstáculos

protected:
	virtual void BeginPlay() override;
	TArray<int32> aComponentesPlataformaMoviles;
	TArray<AMuro*> aMuros;

	void GenerarEnemigos();
	UPROPERTY(EditAnywhere, Category = "Configuración de Enemigos")
	int32 NumeroEnemigos = 5;

	UPROPERTY(EditAnywhere, Category = "Configuración de Enemigos")
	FVector SpawnLocation2 = FVector(2190.0f, -590.0f, 240.0f);

	UPROPERTY(EditAnywhere, Category = "Configuración de Enemigos")
	FRotator SpawnRotation2 = FRotator::ZeroRotator;
private:
	UPROPERTY()
	AGameFacade* GameFacade;

	FTimerHandle SpawnBarrilTimerHandle;
	void SpawnBarril();
	int32 contadorBarriles;
	const int32 numeroMaximoBarriles = 10;
	void SpawnNaveEnemiga();
	void SpawnMurosAleatorios();
};