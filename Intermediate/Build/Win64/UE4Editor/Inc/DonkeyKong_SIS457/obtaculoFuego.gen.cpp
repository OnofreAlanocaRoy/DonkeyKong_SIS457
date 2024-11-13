// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/obtaculoFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeobtaculoFuego() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AobtaculoFuego_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AobtaculoFuego();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObtaculo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AobtaculoFuego::StaticRegisterNativesAobtaculoFuego()
	{
	}
	UClass* Z_Construct_UClass_AobtaculoFuego_NoRegister()
	{
		return AobtaculoFuego::StaticClass();
	}
	struct Z_Construct_UClass_AobtaculoFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuegoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FuegoMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AobtaculoFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObtaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AobtaculoFuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "obtaculoFuego.h" },
		{ "ModuleRelativePath", "obtaculoFuego.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AobtaculoFuego_Statics::NewProp_FuegoMesh_MetaData[] = {
		{ "Category", "obtaculoFuego" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "obtaculoFuego.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AobtaculoFuego_Statics::NewProp_FuegoMesh = { "FuegoMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AobtaculoFuego, FuegoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AobtaculoFuego_Statics::NewProp_FuegoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AobtaculoFuego_Statics::NewProp_FuegoMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AobtaculoFuego_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AobtaculoFuego_Statics::NewProp_FuegoMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AobtaculoFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AobtaculoFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AobtaculoFuego_Statics::ClassParams = {
		&AobtaculoFuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AobtaculoFuego_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AobtaculoFuego_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AobtaculoFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AobtaculoFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AobtaculoFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AobtaculoFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AobtaculoFuego, 1101834420);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AobtaculoFuego>()
	{
		return AobtaculoFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AobtaculoFuego(Z_Construct_UClass_AobtaculoFuego, &AobtaculoFuego::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AobtaculoFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AobtaculoFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
