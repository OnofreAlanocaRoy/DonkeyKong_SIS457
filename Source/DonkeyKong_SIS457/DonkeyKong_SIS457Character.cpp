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
#include "Kismet/GameplayStatics.h"

// Definir los nombres de las teclas de juego
const FName ADonkeyKong_SIS457Character::FireForwardBinding("FireForward");
const FName ADonkeyKong_SIS457Character::FireRightBinding("FireRight");

ADonkeyKong_SIS457Character::ADonkeyKong_SIS457Character()
{
    PrimaryActorTick.bCanEverTick = true;

    // Establecer el tamaño de la cápsula de colisión
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
    // No gire cuando el controlador gire.
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->bUsePawnControlRotation = true; // El brazo sigue la rotación del personaje

    // Crear la cámara en tercera persona y unirla al brazo
    ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
    ThirdPersonCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    ThirdPersonCamera->SetRelativeLocation(FVector(-300.f, 0.f, 75.f));
    ThirdPersonCamera->bUsePawnControlRotation = false; // La cámara no rota de manera independiente, sigue al brazo

    // Crear la cámara en primera persona
    FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    FirstPersonCamera->SetupAttachment(RootComponent);
    FirstPersonCamera->SetRelativeLocation(FVector(0.f, 0.f, 75.f)); // Ajusta según necesites
    FirstPersonCamera->bUsePawnControlRotation = false; // La cámara sigue la rotación del personaje

    bIsFirstPerson = false; // Iniciar en tercera persona



    // Establecer configuraciones del movimiento del personaje
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
    FVector NuevaPosicion = FVector(1207.27f, -600.0f, 210.0f); // Cambia estos valores según donde quieras que aparezca tu personaje
    SetActorLocation(NuevaPosicion);

    // Establecer la cámara inicial
    FirstPersonCamera->SetActive(false);
    ThirdPersonCamera->SetActive(true); // Comienza con la cámara en tercera persona

    // Establecer la cámara activa en la vista del jugador
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
    if (PlayerController)
    {
        PlayerController->SetViewTarget(this);
    }
}


void ADonkeyKong_SIS457Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    check(PlayerInputComponent);
    
    // Configurar combinaciones de teclas de juego
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
    PlayerInputComponent->BindAxis("MoveRight", this, &ADonkeyKong_SIS457Character::MoveRight);
    PlayerInputComponent->BindTouch(IE_Pressed, this, &ADonkeyKong_SIS457Character::TouchStarted);
    PlayerInputComponent->BindTouch(IE_Released, this, &ADonkeyKong_SIS457Character::TouchStopped);

    // Vincula la acción de disparo al método Fire
    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ADonkeyKong_SIS457Character::Fire);
    
    // Vincula la acción de cambiar cámara
    PlayerInputComponent->BindAction("SwitchCamera", IE_Pressed, this, &ADonkeyKong_SIS457Character::SwitchCamera);
}


// Alternar entre cámaras
void ADonkeyKong_SIS457Character::SwitchCamera()
{
    bIsFirstPerson = !bIsFirstPerson; // Alternar estado de la cámara

    if (bIsFirstPerson)
    {
        // Activa la cámara en primera persona y desactiva la de tercera persona
		FirstPersonCamera->SetActive(true);//ACT. PRIMERA PERSONA
		ThirdPersonCamera->SetActive(false);//DEC. TERCERA PERSONA
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Cámara en Primera Persona"));
    }
    else
    {
        // Activa la cámara en tercera persona y desactiva la de primera persona
		FirstPersonCamera->SetActive(false);//DEC. PRIMERA PERSONA
		ThirdPersonCamera->SetActive(true);//ACT. TERCERA PERSONA
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Cámara en Tercera Persona"));
    }

    // Actualizar la vista del controlador
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
    if (PlayerController)
    {
        PlayerController->SetViewTargetWithBlend(this, 0.5f); // Puedes ajustar el tiempo de mezcla
    }
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
}

void ADonkeyKong_SIS457Character::MoveRight(float Value)
{
    if (Controller != nullptr && Value != 0.0f)
    {
        AddMovementInput(FVector(0.f, -1.f, 0.f), Value);

        // Rotar el personaje en la dirección de movimiento
        FRotator NewRotation = Controller->GetControlRotation();
        NewRotation.Yaw += (Value > 0.0f) ? 0.0f : 180.0f; // Ajusta la rotación según la dirección
        SetActorRotation(NewRotation);
    }
}
void ADonkeyKong_SIS457Character::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
    // Salta ante cualquier toque
    Jump();
}

void ADonkeyKong_SIS457Character::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
    StopJumping();
}
