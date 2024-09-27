// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/NaveEnemiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemiga() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ANaveEnemiga();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveEnemiga::StaticRegisterNativesANaveEnemiga()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister()
	{
		return ANaveEnemiga::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoMovimientoY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoMovimientoY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemiga.h" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_NaveMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Componente de la malla est?tica\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Componente de la malla est?tica" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_NaveMesh = { "NaveMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, NaveMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_NaveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_NaveMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_RangoMovimientoY_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Rango de movimiento en el eje Y\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Rango de movimiento en el eje Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_RangoMovimientoY = { "RangoMovimientoY", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, RangoMovimientoY), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_RangoMovimientoY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_RangoMovimientoY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Velocidad del movimiento\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Velocidad del movimiento" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_VelocidadMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_NaveMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_RangoMovimientoY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_VelocidadMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemiga_Statics::ClassParams = {
		&ANaveEnemiga::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemiga, 2949420649);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ANaveEnemiga>()
	{
		return ANaveEnemiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemiga(Z_Construct_UClass_ANaveEnemiga, &ANaveEnemiga::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ANaveEnemiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
