// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Decorator_Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecorator_Main() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ADecorator_Main_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ADecorator_Main();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void ADecorator_Main::StaticRegisterNativesADecorator_Main()
	{
	}
	UClass* Z_Construct_UClass_ADecorator_Main_NoRegister()
	{
		return ADecorator_Main::StaticClass();
	}
	struct Z_Construct_UClass_ADecorator_Main_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADecorator_Main_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADecorator_Main_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Decorator_Main.h" },
		{ "ModuleRelativePath", "Decorator_Main.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADecorator_Main_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADecorator_Main>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADecorator_Main_Statics::ClassParams = {
		&ADecorator_Main::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADecorator_Main_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADecorator_Main_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADecorator_Main()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADecorator_Main_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADecorator_Main, 39413456);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ADecorator_Main>()
	{
		return ADecorator_Main::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADecorator_Main(Z_Construct_UClass_ADecorator_Main, &ADecorator_Main::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ADecorator_Main"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADecorator_Main);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
