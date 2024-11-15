// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/MovimientoStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoStrategy() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_UMovimientoStrategy_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_UMovimientoStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void UMovimientoStrategy::StaticRegisterNativesUMovimientoStrategy()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoStrategy_NoRegister()
	{
		return UMovimientoStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoStrategy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovimientoStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovimientoStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoStrategy_Statics::ClassParams = {
		&UMovimientoStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoStrategy, 859910051);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<UMovimientoStrategy>()
	{
		return UMovimientoStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoStrategy(Z_Construct_UClass_UMovimientoStrategy, &UMovimientoStrategy::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("UMovimientoStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
