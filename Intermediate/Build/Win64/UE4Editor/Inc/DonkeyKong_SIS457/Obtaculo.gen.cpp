// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Obtaculo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObtaculo() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObtaculo_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObtaculo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AObtaculo::StaticRegisterNativesAObtaculo()
	{
	}
	UClass* Z_Construct_UClass_AObtaculo_NoRegister()
	{
		return AObtaculo::StaticClass();
	}
	struct Z_Construct_UClass_AObtaculo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPuedeSerDestruido_MetaData[];
#endif
		static void NewProp_bPuedeSerDestruido_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPuedeSerDestruido;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObtaculo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObtaculo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obtaculo.h" },
		{ "ModuleRelativePath", "Obtaculo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObtaculo_Statics::NewProp_bPuedeSerDestruido_MetaData[] = {
		{ "Category", "Propiedades" },
		{ "Comment", "// Si el obst?culo puede ser destruido\n" },
		{ "ModuleRelativePath", "Obtaculo.h" },
		{ "ToolTip", "Si el obst?culo puede ser destruido" },
	};
#endif
	void Z_Construct_UClass_AObtaculo_Statics::NewProp_bPuedeSerDestruido_SetBit(void* Obj)
	{
		((AObtaculo*)Obj)->bPuedeSerDestruido = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObtaculo_Statics::NewProp_bPuedeSerDestruido = { "bPuedeSerDestruido", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObtaculo), &Z_Construct_UClass_AObtaculo_Statics::NewProp_bPuedeSerDestruido_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObtaculo_Statics::NewProp_bPuedeSerDestruido_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculo_Statics::NewProp_bPuedeSerDestruido_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObtaculo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObtaculo_Statics::NewProp_bPuedeSerDestruido,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObtaculo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObtaculo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObtaculo_Statics::ClassParams = {
		&AObtaculo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObtaculo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObtaculo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObtaculo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObtaculo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObtaculo, 1791229088);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AObtaculo>()
	{
		return AObtaculo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObtaculo(Z_Construct_UClass_AObtaculo, &AObtaculo::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AObtaculo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObtaculo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
