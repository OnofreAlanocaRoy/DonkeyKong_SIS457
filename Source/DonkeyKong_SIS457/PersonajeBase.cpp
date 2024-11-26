//// PersonajeBase.cpp
//#include "PersonajeBase.h"
//#include "ArmaduraDecorator.h"
//#include "ArmaDecorator.h"
//
//APersonajeBase::APersonajeBase()
//{
//	PrimaryActorTick.bCanEverTick = true;
//}
//
//void APersonajeBase::BeginPlay()
//{
//	Super::BeginPlay();
//
//	// Configurar decoradores
//	EquiparDecoradores();
//}
//
//void APersonajeBase::EquiparDecoradores()
//{
//	// Crear y equipar decoradores
//	UArmaduraDecorator* Armadura = NewObject<UArmaduraDecorator>();
//	UArmaDecorator* Arma = NewObject<UArmaDecorator>();
//
//	// Equipar armadura y arma al personaje
//	Armadura->Equipar();
//	Arma->UsarArma();
//
//	// Añadir decoradores a la lista
//	Decoradores.Add(Armadura);
//	Decoradores.Add(Arma);
//}
