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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMuroCongelado::execOnCharacterImpact)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterImpact(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AMuroCongelado::StaticRegisterNativesAMuroCongelado()
	{
		UClass* Class = AMuroCongelado::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharacterImpact", &AMuroCongelado::execOnCharacterImpact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics
	{
		struct MuroCongelado_eventOnCharacterImpact_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MuroCongelado_eventOnCharacterImpact_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MuroCongelado.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMuroCongelado, nullptr, "OnCharacterImpact", nullptr, nullptr, sizeof(MuroCongelado_eventOnCharacterImpact_Parms), Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMuroCongelado_NoRegister()
	{
		return AMuroCongelado::StaticClass();
	}
	struct Z_Construct_UClass_AMuroCongelado_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AMuroCongelado_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMuroCongelado_OnCharacterImpact, "OnCharacterImpact" }, // 3988093904
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AMuroCongelado, 4269247574);
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
