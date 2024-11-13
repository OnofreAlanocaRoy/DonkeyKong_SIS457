#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFacade.h"
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
	UPROPERTY(EditAnywhere, Category = "Juego")
	TSubclassOf<AGameFacade> GameFacadeClass;
private:

	FTimerHandle SpawnBarrilTimerHandle;
	void SpawnBarril();
	//void DestruirPlataforma();
	int32 contadorBarriles;
	const int32 numeroMaximoBarriles = 10;
	void SpawnNaveEnemiga();
	void SpawnMurosAleatorios();

	AGameFacade* GameFacadeInstance; // Instancia del GameFacade

};