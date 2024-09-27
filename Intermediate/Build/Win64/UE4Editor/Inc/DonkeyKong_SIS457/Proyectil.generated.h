// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DONKEYKONG_SIS457_Proyectil_generated_h
#error "Proyectil.generated.h already included, missing '#pragma once' in Proyectil.h"
#endif
#define DONKEYKONG_SIS457_Proyectil_generated_h

#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_SPARSE_DATA
#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDireccionDisparo);


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDireccionDisparo);


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProyectil(); \
	friend struct Z_Construct_UClass_AProyectil_Statics; \
public: \
	DECLARE_CLASS(AProyectil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_SIS457"), NO_API) \
	DECLARE_SERIALIZER(AProyectil) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProyectil(); \
	friend struct Z_Construct_UClass_AProyectil_Statics; \
public: \
	DECLARE_CLASS(AProyectil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_SIS457"), NO_API) \
	DECLARE_SERIALIZER(AProyectil) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProyectil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProyectil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectil(AProyectil&&); \
	NO_API AProyectil(const AProyectil&); \
public:


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectil(AProyectil&&); \
	NO_API AProyectil(const AProyectil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProyectil)


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectilMesh() { return STRUCT_OFFSET(AProyectil, ProjectilMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectilMovement() { return STRUCT_OFFSET(AProyectil, ProjectilMovement); }


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_11_PROLOG
#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_SPARSE_DATA \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_RPC_WRAPPERS \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_INCLASS \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_SPARSE_DATA \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_INCLASS_NO_PURE_DECLS \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_SIS457_API UClass* StaticClass<class AProyectil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Proyectil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
