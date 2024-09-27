// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Proyectil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectil() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AProyectil_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AProyectil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProyectil::execSetDireccionDisparo)
	{
		P_GET_STRUCT(FVector,Z_Param_Direccion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDireccionDisparo(Z_Param_Direccion);
		P_NATIVE_END;
	}
	void AProyectil::StaticRegisterNativesAProyectil()
	{
		UClass* Class = AProyectil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDireccionDisparo", &AProyectil::execSetDireccionDisparo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics
	{
		struct Proyectil_eventSetDireccionDisparo_Parms
		{
			FVector Direccion;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direccion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::NewProp_Direccion = { "Direccion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Proyectil_eventSetDireccionDisparo_Parms, Direccion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::NewProp_Direccion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Proyectil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProyectil, nullptr, "SetDireccionDisparo", nullptr, nullptr, sizeof(Proyectil_eventSetDireccionDisparo_Parms), Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProyectil_SetDireccionDisparo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProyectil_SetDireccionDisparo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProyectil_NoRegister()
	{
		return AProyectil::StaticClass();
	}
	struct Z_Construct_UClass_AProyectil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectilMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectilMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProyectil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProyectil_SetDireccionDisparo, "SetDireccionDisparo" }, // 3419770414
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Proyectil.h" },
		{ "ModuleRelativePath", "Proyectil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Proyectil.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMesh = { "ProjectilMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectil, ProjectilMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Proyectil.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMovement = { "ProjectilMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectil, ProjectilMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProyectil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectil_Statics::NewProp_ProjectilMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectil_Statics::ClassParams = {
		&AProyectil::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProyectil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectil, 2152225261);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AProyectil>()
	{
		return AProyectil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectil(Z_Construct_UClass_AProyectil, &AProyectil::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AProyectil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
