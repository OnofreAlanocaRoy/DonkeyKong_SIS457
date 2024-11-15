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
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABarril_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABarrilAdapter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameFacade::execCrearBarriles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearBarriles();
		P_NATIVE_END;
	}
	void AGameFacade::StaticRegisterNativesAGameFacade()
	{
		UClass* Class = AGameFacade::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearBarriles", &AGameFacade::execCrearBarriles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameFacade_CrearBarriles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameFacade_CrearBarriles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameFacade_CrearBarriles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameFacade, nullptr, "CrearBarriles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameFacade_CrearBarriles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameFacade_CrearBarriles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameFacade_CrearBarriles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameFacade_CrearBarriles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameFacade_NoRegister()
	{
		return AGameFacade::StaticClass();
	}
	struct Z_Construct_UClass_AGameFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Barriles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Barriles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Barriles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrilAdapters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrilAdapters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BarrilAdapters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameFacade_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameFacade_CrearBarriles, "CrearBarriles" }, // 4105217995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFacade.h" },
		{ "ModuleRelativePath", "GameFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameFacade_Statics::NewProp_Barriles_Inner = { "Barriles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABarril_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameFacade_Statics::NewProp_Barriles_MetaData[] = {
		{ "Comment", "// Lista de barriles y adaptadores\n" },
		{ "ModuleRelativePath", "GameFacade.h" },
		{ "ToolTip", "Lista de barriles y adaptadores" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameFacade_Statics::NewProp_Barriles = { "Barriles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameFacade, Barriles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameFacade_Statics::NewProp_Barriles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameFacade_Statics::NewProp_Barriles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameFacade_Statics::NewProp_BarrilAdapters_Inner = { "BarrilAdapters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABarrilAdapter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameFacade_Statics::NewProp_BarrilAdapters_MetaData[] = {
		{ "ModuleRelativePath", "GameFacade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameFacade_Statics::NewProp_BarrilAdapters = { "BarrilAdapters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameFacade, BarrilAdapters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameFacade_Statics::NewProp_BarrilAdapters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameFacade_Statics::NewProp_BarrilAdapters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameFacade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameFacade_Statics::NewProp_Barriles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameFacade_Statics::NewProp_Barriles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameFacade_Statics::NewProp_BarrilAdapters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameFacade_Statics::NewProp_BarrilAdapters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameFacade_Statics::ClassParams = {
		&AGameFacade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameFacade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGameFacade, 1678263036);
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
