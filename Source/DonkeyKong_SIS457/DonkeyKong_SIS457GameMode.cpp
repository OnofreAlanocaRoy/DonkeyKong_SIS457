//Copyright Epic Games, Inc. All Rights Reserved.
#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "Capsula.h"
#include "ObtaculoCierra1.h"
#include "obtaculoFuego.h"
#include "ComponentePlataforma.h"
#include "Obtaculo.h"
#include "Barril.h"
#include "NaveEnemiga.h"
#include "EnemigoDecoradorCircular.h"
#include "Enemigo.h"
#include "Muro.h"
#include "MuroElectrico.h"
#include "MuroPegajodo.h"
#include "MuroLadrillo.h"
#include "MuroCongelado.h"
#include "Inventario.h"
#include "MuroFuego.h"
#include "GameFacade.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong_SIS457GameMode::ADonkeyKong_SIS457GameMode()
{
	// establecer la clase de peón predeterminada para nuestro personaje con planos
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	DefaultPawnClass = nullptr;
	PrimaryActorTick.bCanEverTick = true;
}

TArray<FVector> GenerarPosicionesAleatorias(int32 NumeroPosiciones, FVector RangoMin, FVector RangoMax)
{
	TArray<FVector> PosicionesAleatorias;

	for (int32 i = 0; i < NumeroPosiciones; ++i)
	{
		float X = FMath::RandRange(RangoMin.X, RangoMax.X);
		float Y = FMath::RandRange(RangoMin.Y, RangoMax.Y);
		float Z = FMath::RandRange(RangoMin.Z, RangoMax.Z);

		PosicionesAleatorias.Add(FVector(X, Y, Z));
	}

	return PosicionesAleatorias;
}

void ADonkeyKong_SIS457GameMode::BeginPlay()

{
	Super::BeginPlay();

	FTransform SpawnLocationEnemigo;
	SpawnLocationEnemigo.SetLocation(FVector(1210.f, -2080.f, 1570.f));
	AEnemigo* enemy2 = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), SpawnLocationEnemigo);

	FTransform SpawnLocationDecorador;
	//SpawnLocationDecorador.SetLocation(FVector(1200.0f, -1100.0f, 1540.0f));
	AEnemigoDecoradorCircular* decorador = GetWorld()->SpawnActor<AEnemigoDecoradorCircular>(AEnemigoDecoradorCircular::StaticClass(), SpawnLocationDecorador);
	decorador->Enemigo = enemy2;
	decorador->Vigilar();


	// Crear el Facade de los enemigos
	GameFacade = GetWorld()->SpawnActor<AGameFacade>(AGameFacade::StaticClass());

	if (GameFacade)
	{
		// Llamar al Facade para crear enemigos
		GameFacade->CrearEnemigos();
		// Iniciar las acciones de los enemigos
		GameFacade->IniciarAccionesDeEnemigos();
	}
	
	//spawnear de capsula
	if (GetWorld())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		// Definir la ubicación y rotación inicial del actor
		FVector Location = FVector(1207.272461f, -516.779663f, 104.6241f); // Cambia los valores según la posición deseada
		FRotator Rotation = FRotator::ZeroRotator;

		// Spawnear el actor en el mundo
		ACapsula* NuevaCapsula = GetWorld()->SpawnActor<ACapsula>(ACapsula::StaticClass(), Location, Rotation, SpawnParams);

		if (NuevaCapsula)
		{
			// Aquí puedes hacer cosas adicionales con la cápsula recién creada
		}
	}


	FRotator SpawnRotation = FRotator::ZeroRotator;



	//spawnear DE CIERRA
	FVector SpawnLocation = FVector(1189.790527f, -40.001099f, 840.0f); // Posición inicial en el mundo
	AObtaculoCierra1* CierraActor = GetWorld()->SpawnActor<AObtaculoCierra1>(AObtaculoCierra1::StaticClass(), SpawnLocation, SpawnRotation);

	// Ajustar la escala de la sierra (por ejemplo, hacerlo más grande)
	if (CierraActor)
	{
		FVector NewScale = FVector(1.0f, 2.25f, 1.0f); // Escalar en el eje X
		CierraActor->SetCierraScale(NewScale);

		// Ajustar la rotación de la sierra
		FRotator NewRotation = FRotator(117.092789f, -90.0f, 117.092819f); // Rotar 45 grados en el eje Yaw (Z)
		CierraActor->SetCierraRotation(NewRotation);
	}

	//spawnear de fuego
	FVector PosicionesFuego[4] = {
		/*FVector(1250.f, 200.0f, 1000.0f),
		FVector(1800.0f, -160.0f, 700.0f),
		FVector(1200.0f, -300.0f, 900.0f),
		FVector(1150.0f, -600.0f, 910.0f)*/
	};

	for (int32 i = 0; i < 4; i++)
	{

		AobtaculoFuego* FuegoActor = GetWorld()->SpawnActor<AobtaculoFuego>(AobtaculoFuego::StaticClass(), PosicionesFuego[i], SpawnRotation);


		if (FuegoActor)
		{
			// Puedes ajustar más configuraciones aquí si es necesario
		}
	}

	//spawnear de plataforma
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("-----para disparo tecla R y las fechas (<-  ->)"));
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("plataforma aleatorias con Tarray diferente posiciones"));
	// Generar posiciones aleatorias para las plataformas

	for (int32 i = 0; i < 5; ++i) {
		aComponentesPlataformaMoviles.Add(FMath::RandRange(2, 7)); // NUMERO ALEATORIO 2,7 MOVIL
	}

	FVector posicionInicial = FVector(1160.0f, -1300.0f, 500.f);
	FRotator rotacionInicial = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationCP;
	float anchoComponentePlataforma = 300.0f;

	float incrementoAltoComponentePlataforma = 55.0f;
	float incrementoAltoEntrePisos = 300.0f;
	float incrementoInicioPiso = 200.0f;
	float incrementoAnchoComponentePlataforma = -300.0f;
	int numeroPisoComponentePlataformaMovil = 0;
	int numeroComponentePlataformaMovil = 4;

	// Aquí añadimos el desplazamiento aleatorio para cada fila VARIABLE
	FVector desplazamientoAleatorio;
	float maxDesplazamientoZ = 300.0f; // EJE Z
	float maxDesplazamientoY = -1000.0f; // EJE Y

	// npp -> Número bucle genera 5 filas (pisos) 
	for (int npp = 0; npp < 5; npp++) {
		// desplazamiento aleatorio en las coordenadas Y y Z rango per
	/*	desplazamientoAleatorio.Z = FMath::RandRange(-maxDesplazamientoZ, maxDesplazamientoZ);
		desplazamientoAleatorio.Y = FMath::RandRange(-maxDesplazamientoY, maxDesplazamientoY);*/
		// Aplicamos el desplazamiento a la posición inicial
		posicionInicial.X += desplazamientoAleatorio.X;
		posicionInicial.Y += desplazamientoAleatorio.Y;

		rotacionInicial.Roll = rotacionInicial.Roll * -1;
		incrementoInicioPiso = incrementoInicioPiso * -1;
		incrementoAnchoComponentePlataforma = incrementoAnchoComponentePlataforma * -1;
		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
		SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));
		// buble 10 COMPONENTES
		for (int ncp = 0; ncp < 10; ncp++) {

			if (ncp != (aComponentesPlataformaMoviles[npp] - 1) && ncp != (aComponentesPlataformaMoviles[npp] + 1)) {
				AComponentePlataforma* cp = GetWorld()->SpawnActor<AComponentePlataforma>(AComponentePlataforma::StaticClass(), SpawnLocationCP);
				if (ncp == aComponentesPlataformaMoviles[npp]) {
					if (FMath::RandRange(0, 1))
						cp->setbMoverHorizontalmente(true);
					else
						cp->setbMoverVerticalmente(true);
				}
			}
			posicionInicial.Z = posicionInicial.Z + incrementoAltoComponentePlataforma;
			if (ncp < 9) {
				posicionInicial.Y = posicionInicial.Y + incrementoAnchoComponentePlataforma;
			}

			SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));
		}

		posicionInicial.Z = posicionInicial.Z + incrementoAltoEntrePisos;
		posicionInicial.Y = posicionInicial.Y + incrementoInicioPiso;

		// Restauramos la posición inicial después de spawnear la fila, para que no acumule el desplazamiento de la siguiente fila
		posicionInicial.X -= desplazamientoAleatorio.X;
		posicionInicial.Y -= desplazamientoAleatorio.Y;
	}

	//spawnear muros
	FVector posicionMuro = FVector(1206.0f, 1000.0f, 0.0f);
	FRotator rotacionMuro = FRotator(0.0f, 0.0f, 10.0f);
	FTransform SpawnLocationMuro;
	SpawnLocationMuro.SetRotation(FQuat(rotacionMuro));
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroElectrico* me01 = GetWorld()->SpawnActor<AMuroElectrico>(AMuroElectrico::StaticClass(), SpawnLocationMuro);
	aMuros.Add(me01);
	posicionMuro.Y = 300.0f;
	posicionMuro.Z = 200.0f;
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroPegajodo* me02 = GetWorld()->SpawnActor<AMuroPegajodo>(AMuroPegajodo::StaticClass(), SpawnLocationMuro);
	aMuros.Add(me02);
	posicionMuro.Y = 400.0f;
	posicionMuro.Z = 600.0f;
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroLadrillo* me03 = GetWorld()->SpawnActor<AMuroLadrillo>(AMuroLadrillo::StaticClass(), SpawnLocationMuro);
	aMuros.Add(me03);
	posicionMuro.Y = 700.0f;
	posicionMuro.Z = 1000.0f;
	SpawnLocationMuro.SetLocation(posicionMuro);

	AMuroFuego* me04 = GetWorld()->SpawnActor<AMuroFuego>(AMuroFuego::StaticClass(), SpawnLocationMuro);
	aMuros.Add(me04);
	posicionMuro.Y = 1000.0f;
	posicionMuro.Z = 1500.0f;
	SpawnLocationMuro.SetLocation(posicionMuro);


	GetWorld()->GetTimerManager().SetTimer(SpawnBarrilTimerHandle, this, &ADonkeyKong_SIS457GameMode::SpawnBarril, 3.0f, true);
	// Llamar al método para spawnear la nave enemiga (cono disparador)
	SpawnNaveEnemiga();
}

//nave enemiga o el cono de fuego
void ADonkeyKong_SIS457GameMode::SpawnNaveEnemiga()
{
	// Spawnear la Nave Enemiga en el juego
	FVector SpawnLocation = FVector(1160.0f, 800.0f, 3585.0f); // Ajusta la posición de spawn según sea necesario
	FRotator SpawnRotation = FRotator::ZeroRotator;
	if (GetWorld())
	{
		ANaveEnemiga* NuevaNave = GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass(), SpawnLocation, SpawnRotation);

		if (NuevaNave)
		{
			// Puedes añadir código aquí para configurar la nave enemiga si es necesario
			UE_LOG(LogTemp, Warning, TEXT("Nave Enemiga spawneada correctamente"));
		}
	}
}

void ADonkeyKong_SIS457GameMode::SpawnBarril()
{
	////if (barriles.Num() >= numeroMaximoBarriles) {
	//if (contadorBarriles < numeroMaximoBarriles) {
	//	//Spawn de un objeto barril en la escena sobre la primera plataforma
	//	FTransform SpawnLocationBarril;
	//	SpawnLocationBarril.SetLocation(FVector(1160.0f, 900.0f, 860.0f));
	//	SpawnLocationBarril.SetRotation(FQuat(FRotator(90.0f, 0.0f, 0.0f)));
	//	//ABarril* barril01 = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocationBarril);
	//	Barriles.Add(GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocationBarril));
	//	contadorBarriles++;

	//	if (contadorBarriles >= numeroMaximoBarriles) {
	//		GetWorld()->GetTimerManager().ClearTimer(SpawnBarrilTimerHandle);
	//	}
	//}
}
void ADonkeyKong_SIS457GameMode::SpawnMurosAleatorios()
{
	//for (AComponentePlataforma* Plataforma : ComponentesPlataforma)
	//{
	//	if (Plataforma)
	//	{
	//		FVector PlataformaLocation = Plataforma->GetActorLocation();
	//		FVector MuroSpawnLocation = PlataformaLocation + FVector(0, 0, 200.0f); // Ajusta la altura
	//		FRotator MuroRotation = FRotator::ZeroRotator;

	//		// Spawnear el muro sobre la plataforma
	//		AMuro* Muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), MuroSpawnLocation, MuroRotation);
	//		if (Muro)
	//		{
	//			// Aquí puedes ajustar la escala, rotación o comportamiento del muro si es necesario
	//		}
	//	}
	//}
}