// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/FabricaPosiones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaPosiones() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AFabricaPosiones_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AFabricaPosiones();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AFabricaPosiones::StaticRegisterNativesAFabricaPosiones()
	{
	}
	UClass* Z_Construct_UClass_AFabricaPosiones_NoRegister()
	{
		return AFabricaPosiones::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaPosiones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaPosiones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaPosiones_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaPosiones.h" },
		{ "ModuleRelativePath", "FabricaPosiones.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaPosiones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaPosiones>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaPosiones_Statics::ClassParams = {
		&AFabricaPosiones::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaPosiones_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaPosiones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaPosiones()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaPosiones_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaPosiones, 2620063334);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AFabricaPosiones>()
	{
		return AFabricaPosiones::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaPosiones(Z_Construct_UClass_AFabricaPosiones, &AFabricaPosiones::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AFabricaPosiones"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaPosiones);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
