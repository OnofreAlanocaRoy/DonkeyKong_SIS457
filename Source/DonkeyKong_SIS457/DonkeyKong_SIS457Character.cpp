// Copyright Epic Games, Inc. Todos los derechos reservados.

#include "DonkeyKong_SIS457Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Character.h"
#include "Proyectil.h"
#include "TorreReloj.h"
#include "Enemigo.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

//efinir los nombres de las teclas de juego
const FName ADonkeyKong_SIS457Character::FireForwardBinding("FireForward");
const FName ADonkeyKong_SIS457Character::FireRightBinding("FireRight");

ADonkeyKong_SIS457Character::ADonkeyKong_SIS457Character()
{
	PrimaryActorTick.bCanEverTick = true;
	MaxHealth = 100.0f; // Establece la salud máxima del personaje
	CurrentHealth = MaxHealth; // Inicializa la salud actual con la salud máxima
	// Establecer el tamaño de la cápsula de colisión
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	// No gire cuando el controlador gire.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Cree un brazo de cámara unido a la raíz (cápsula)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // La rotación del personaje no debería afectar la rotación del boom.
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 2500.f;
	CameraBoom->SocketOffset = FVector(0.f, 0.f, 75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));

	// Crea una cámara y conéctala al boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // No queremos que el controlador gire la cámara.
	// Establece un rango de velocidades posibles

	// Configurar el movimiento del personaje
	GetCharacterMovement()->bOrientRotationToMovement = true; // Mirar en la dirección en la que nos estamos moviendo.
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...a esta velocidad de rotación
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1250.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Arma disparo
	GunOffset = FVector(50.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
	RadioNotificacion = 400.0f;  // Ajusta el radio de detección según lo necesario
}
// Dispara un tiro en la dirección especificada
void ADonkeyKong_SIS457Character::ShotTimerExpired()
{
	bCanFire = true;
}
void ADonkeyKong_SIS457Character::BeginPlay()
{
	Super::BeginPlay();
	// Reposicionar el personaje en una nueva ubicación al inicio del juego
	FVector NuevaPosicion = FVector(1207.272461f, -516.779663f, 204.6241f); // Cambia estos valores según donde quieras que aparezca tu personaje
	SetActorLocation(NuevaPosicion);
	// Crear e inicializar el widget de notificaciones
	// Suscribir al personaje al reloj
	AlturaAnterior = GetActorLocation().Z;
	ATorreReloj* Reloj = Cast<ATorreReloj>(UGameplayStatics::GetActorOfClass(GetWorld(), ATorreReloj::StaticClass()));
	if (Reloj)
	{
		Reloj->AnadirSuscriptor(this);
	}
	// Configura el temporizador para llamar a RecibirNotificacion cada 0.5 segundos
	GetWorld()->GetTimerManager().SetTimer(NotificacionAlturaTimerHandle, this, &ADonkeyKong_SIS457Character::RecibirNotificacion, 0.5f, true);
}
void ADonkeyKong_SIS457Character::RecibirNotificacion()
{
	// Obtén la altura actual del jugador en el eje Z
	float AlturaJugador = GetActorLocation().Z;

	// Solo mostrar notificación si el jugador ha alcanzado o superado 1500 unidades en Z
	if (AlturaJugador >= 1500.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Altura actual del jugador: %f"), AlturaJugador);

		// Mostrar mensaje en pantalla
		if (GEngine)
		{
			FString AlturaMensaje = FString::Printf(TEXT("¡Altura alcanzada! Altura del jugador:" "") , AlturaJugador);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, AlturaMensaje);
		}
	}
}

void ADonkeyKong_SIS457Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	//configurar combinaciones de teclas de juego
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADonkeyKong_SIS457Character::MoveRight);
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ADonkeyKong_SIS457Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ADonkeyKong_SIS457Character::TouchStopped);

	// Vincula la acción de disparo al método Fire
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ADonkeyKong_SIS457Character::Fire);
}
// Dispara un proyectil en la dirección especificada
void ADonkeyKong_SIS457Character::Fire()
{
	// Aquí puedes implementar la lógica para disparar un proyectil o realizar el ataque
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando!"));

	// Ejemplo de lógica para disparar un proyectil
	if (UWorld* World = GetWorld())
	{
		// Supongamos que tienes un Blueprint de proyectil que has convertido a clase C++ 'AProjectile'
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		FVector SpawnLocation = GetActorLocation() + FVector(100, 100, 50); // Ajusta la ubicación del spawn
		FRotator SpawnRotation = GetActorRotation();

		World->SpawnActor<AProyectil>(SpawnLocation, SpawnRotation, SpawnParams);

	}
}
void ADonkeyKong_SIS457Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	VerificarAltura();
	VerificarEnemigosCercanos();
	RecibirNotificacion();

}

void ADonkeyKong_SIS457Character::VerificarAltura()
{
	float AlturaActual = GetActorLocation().Z;
	if (FMath::Abs(AlturaActual - AlturaAnterior) >= 500.0f)
	{
		// Mostrar mensaje en pantalla cuando el jugador avanza en altura
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("¡El jugador ha avanzado en altura!"));
		}

		AlturaAnterior = AlturaActual;
	}
}

void ADonkeyKong_SIS457Character::VerificarEnemigosCercanos()
{
	TArray<AActor*> Enemigos;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemigo::StaticClass(), Enemigos);

	for (AActor* Enemigo : Enemigos)
	{
		if (FVector::Dist(GetActorLocation(), Enemigo->GetActorLocation()) <= RadioNotificacion)
		{
			// Mostrar mensaje en pantalla cuando un enemigo está cerca
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("¡Un enemigo está cerca del jugador!"));
			}
		}
	}
}
void ADonkeyKong_SIS457Character::MoveRight(float Value)
{


	AddMovementInput(FVector(0.f, -1.f, 0.f), Value);

}

void ADonkeyKong_SIS457Character::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// salta ante cualquier toque
	Jump();
}

void ADonkeyKong_SIS457Character::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

float ADonkeyKong_SIS457Character::TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	CurrentHealth -= DamageAmount;
	if (CurrentHealth <= 0.0f)
	{
		CurrentHealth = 0.0f;
		// Aquí puedes agregar lógica para manejar la muerte del personaje.
	}
	return DamageAmount;
}

bool ADonkeyKong_SIS457Character::IsAlive() const
{
	return CurrentHealth > 0.0f;
}
