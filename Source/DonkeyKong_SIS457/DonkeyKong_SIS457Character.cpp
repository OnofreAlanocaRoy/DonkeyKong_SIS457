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
#include "Engine/World.h"

//efinir los nombres de las teclas de juego
const FName ADonkeyKong_SIS457Character::FireForwardBinding("FireForward");
const FName ADonkeyKong_SIS457Character::FireRightBinding("FireRight");

ADonkeyKong_SIS457Character::ADonkeyKong_SIS457Character()
{
	PrimaryActorTick.bCanEverTick = true;
	MaxHealth = 100.0f; // Establece la salud m�xima del personaje
	CurrentHealth = MaxHealth; // Inicializa la salud actual con la salud m�xima
	// Establecer el tama�o de la c�psula de colisi�n
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	// No gire cuando el controlador gire.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Cree un brazo de c�mara unido a la ra�z (c�psula)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // La rotaci�n del personaje no deber�a afectar la rotaci�n del boom.
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 2500.f;
	CameraBoom->SocketOffset = FVector(0.f, 0.f, 75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));

	// Crea una c�mara y con�ctala al boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // No queremos que el controlador gire la c�mara.
	// Establece un rango de velocidades posibles

	// Configurar el movimiento del personaje
	GetCharacterMovement()->bOrientRotationToMovement = true; // Mirar en la direcci�n en la que nos estamos moviendo.
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...a esta velocidad de rotaci�n
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
}
// Dispara un tiro en la direcci�n especificada
void ADonkeyKong_SIS457Character::ShotTimerExpired()
{
	bCanFire = true;
}
void ADonkeyKong_SIS457Character::BeginPlay()
{
	Super::BeginPlay();
	// Reposicionar el personaje en una nueva ubicaci�n al inicio del juego
	FVector NuevaPosicion = FVector(1190.0f, 1100.0f, 6085.0f); // Cambia estos valores seg�n donde quieras que aparezca tu personaje
	SetActorLocation(NuevaPosicion);
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

	// Vincula la acci�n de disparo al m�todo Fire
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ADonkeyKong_SIS457Character::Fire);
}
// Dispara un proyectil en la direcci�n especificada
void ADonkeyKong_SIS457Character::Fire()
{
	// Aqu� puedes implementar la l�gica para disparar un proyectil o realizar el ataque
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparando!"));

	// Ejemplo de l�gica para disparar un proyectil
	if (UWorld* World = GetWorld())
	{
		// Supongamos que tienes un Blueprint de proyectil que has convertido a clase C++ 'AProjectile'
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		FVector SpawnLocation = GetActorLocation() + FVector(100, 100, 50); // Ajusta la ubicaci�n del spawn
		FRotator SpawnRotation = GetActorRotation();

		World->SpawnActor<AProyectil>(SpawnLocation, SpawnRotation, SpawnParams);

	}
}
void ADonkeyKong_SIS457Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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
		// Aqu� puedes agregar l�gica para manejar la muerte del personaje.
	}
	return DamageAmount;
}

bool ADonkeyKong_SIS457Character::IsAlive() const
{
	return CurrentHealth > 0.0f;
}
