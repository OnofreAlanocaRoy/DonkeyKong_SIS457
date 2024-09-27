// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/MuroCongelado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroCongelado() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AMuroCongelado_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AMuroCongelado();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AMuroCongelado::StaticRegisterNativesAMuroCongelado()
	{
	}
	UClass* Z_Construct_UClass_AMuroCongelado_NoRegister()
	{
		return AMuroCongelado::StaticClass();
	}
	struct Z_Construct_UClass_AMuroCongelado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroCongelado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroCongelado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroCongelado.h" },
		{ "ModuleRelativePath", "MuroCongelado.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroCongelado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroCongelado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroCongelado_Statics::ClassParams = {
		&AMuroCongelado::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroCongelado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroCongelado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroCongelado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroCongelado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroCongelado, 2972437768);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AMuroCongelado>()
	{
		return AMuroCongelado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroCongelado(Z_Construct_UClass_AMuroCongelado, &AMuroCongelado::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AMuroCongelado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroCongelado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
