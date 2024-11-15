// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/PersonajeDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonajeDecorator() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_UPersonajeDecorator_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_UPersonajeDecorator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void UPersonajeDecorator::StaticRegisterNativesUPersonajeDecorator()
	{
	}
	UClass* Z_Construct_UClass_UPersonajeDecorator_NoRegister()
	{
		return UPersonajeDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UPersonajeDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonajeDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonajeDecorator_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PersonajeDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonajeDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPersonajeDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPersonajeDecorator_Statics::ClassParams = {
		&UPersonajeDecorator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPersonajeDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonajeDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonajeDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPersonajeDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPersonajeDecorator, 1017947930);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<UPersonajeDecorator>()
	{
		return UPersonajeDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPersonajeDecorator(Z_Construct_UClass_UPersonajeDecorator, &UPersonajeDecorator::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("UPersonajeDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonajeDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
