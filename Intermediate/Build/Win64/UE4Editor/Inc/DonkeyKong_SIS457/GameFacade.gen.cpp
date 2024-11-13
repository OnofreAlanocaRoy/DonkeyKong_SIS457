// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/GameFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFacade() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AGameFacade_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AGameFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
// End Cross Module References
	void AGameFacade::StaticRegisterNativesAGameFacade()
	{
	}
	UClass* Z_Construct_UClass_AGameFacade_NoRegister()
	{
		return AGameFacade::StaticClass();
	}
	struct Z_Construct_UClass_AGameFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemigoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemigoClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFacade.h" },
		{ "ModuleRelativePath", "GameFacade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameFacade_Statics::NewProp_EnemigoClass_MetaData[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "GameFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameFacade_Statics::NewProp_EnemigoClass = { "EnemigoClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameFacade, EnemigoClass), Z_Construct_UClass_AEnemigo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameFacade_Statics::NewProp_EnemigoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameFacade_Statics::NewProp_EnemigoClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameFacade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameFacade_Statics::NewProp_EnemigoClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameFacade_Statics::ClassParams = {
		&AGameFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameFacade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameFacade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameFacade, 15174182);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AGameFacade>()
	{
		return AGameFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameFacade(Z_Construct_UClass_AGameFacade, &AGameFacade::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AGameFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
