// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/ObtaculoCierra1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObtaculoCierra1() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObtaculoCierra1_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObtaculoCierra1();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObtaculo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObtaculoCierra1::StaticRegisterNativesAObtaculoCierra1()
	{
	}
	UClass* Z_Construct_UClass_AObtaculoCierra1_NoRegister()
	{
		return AObtaculoCierra1::StaticClass();
	}
	struct Z_Construct_UClass_AObtaculoCierra1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CierraMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CierraMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObtaculoCierra1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObtaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObtaculoCierra1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObtaculoCierra1.h" },
		{ "ModuleRelativePath", "ObtaculoCierra1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObtaculoCierra1_Statics::NewProp_CierraMesh_MetaData[] = {
		{ "Category", "ObtaculoCierra1" },
		{ "Comment", "// Componentes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObtaculoCierra1.h" },
		{ "ToolTip", "Componentes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObtaculoCierra1_Statics::NewProp_CierraMesh = { "CierraMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObtaculoCierra1, CierraMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObtaculoCierra1_Statics::NewProp_CierraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculoCierra1_Statics::NewProp_CierraMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObtaculoCierra1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObtaculoCierra1_Statics::NewProp_CierraMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObtaculoCierra1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObtaculoCierra1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObtaculoCierra1_Statics::ClassParams = {
		&AObtaculoCierra1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObtaculoCierra1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculoCierra1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObtaculoCierra1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculoCierra1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObtaculoCierra1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObtaculoCierra1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObtaculoCierra1, 493720754);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AObtaculoCierra1>()
	{
		return AObtaculoCierra1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObtaculoCierra1(Z_Construct_UClass_AObtaculoCierra1, &AObtaculoCierra1::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AObtaculoCierra1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObtaculoCierra1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
