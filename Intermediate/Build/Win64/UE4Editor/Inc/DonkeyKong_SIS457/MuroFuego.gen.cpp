// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/MuroFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroFuego() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AMuroFuego_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AMuroFuego();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AMuroFuego::StaticRegisterNativesAMuroFuego()
	{
	}
	UClass* Z_Construct_UClass_AMuroFuego_NoRegister()
	{
		return AMuroFuego::StaticClass();
	}
	struct Z_Construct_UClass_AMuroFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroFuego_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MuroFuego.h" },
		{ "ModuleRelativePath", "MuroFuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroFuego_Statics::ClassParams = {
		&AMuroFuego::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroFuego, 3069036032);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AMuroFuego>()
	{
		return AMuroFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroFuego(Z_Construct_UClass_AMuroFuego, &AMuroFuego::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AMuroFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
