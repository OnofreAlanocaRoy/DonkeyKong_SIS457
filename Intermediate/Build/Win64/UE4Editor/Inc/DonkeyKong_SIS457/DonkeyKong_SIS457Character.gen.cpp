// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/DonkeyKong_SIS457Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKong_SIS457Character() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ADonkeyKong_SIS457Character_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ADonkeyKong_SIS457Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ADonkeyKong_SIS457Character::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADonkeyKong_SIS457Character::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void ADonkeyKong_SIS457Character::StaticRegisterNativesADonkeyKong_SIS457Character()
	{
		UClass* Class = ADonkeyKong_SIS457Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ADonkeyKong_SIS457Character::execFire },
			{ "IsAlive", &ADonkeyKong_SIS457Character::execIsAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADonkeyKong_SIS457Character_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonkeyKong_SIS457Character_Fire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//// Funci?n para usar la espada (arma)\n//UFUNCTION(BlueprintCallable, Category = \"Arma\")\n//void UsarEspada();\n//llamando para tecla de disparo\n" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
		{ "ToolTip", "/ Funci?n para usar la espada (arma)\nUFUNCTION(BlueprintCallable, Category = \"Arma\")\nvoid UsarEspada();\nllamando para tecla de disparo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonkeyKong_SIS457Character_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonkeyKong_SIS457Character, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonkeyKong_SIS457Character_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonkeyKong_SIS457Character_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonkeyKong_SIS457Character_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonkeyKong_SIS457Character_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics
	{
		struct DonkeyKong_SIS457Character_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DonkeyKong_SIS457Character_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DonkeyKong_SIS457Character_eventIsAlive_Parms), &Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADonkeyKong_SIS457Character, nullptr, "IsAlive", nullptr, nullptr, sizeof(DonkeyKong_SIS457Character_eventIsAlive_Parms), Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADonkeyKong_SIS457Character_NoRegister()
	{
		return ADonkeyKong_SIS457Character::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADonkeyKong_SIS457Character_Fire, "Fire" }, // 1459497923
		{ &Z_Construct_UFunction_ADonkeyKong_SIS457Character_IsAlive, "IsAlive" }, // 728973687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DonkeyKong_SIS457Character.h" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** C?mara de visi?n lateral */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
		{ "ToolTip", "C?mara de visi?n lateral" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_SIS457Character, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_SideViewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Brazo de c?mara posicionando la c?mara al lado del personaje */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
		{ "ToolTip", "Brazo de c?mara posicionando la c?mara al lado del personaje" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_SIS457Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Desplazamiento desde la ubicaci?n del barco para generar proyectiles */" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
		{ "ToolTip", "Desplazamiento desde la ubicaci?n del barco para generar proyectiles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_SIS457Character, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* Qu? tan r?pido disparar? el arma */" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
		{ "ToolTip", "Qu? tan r?pido disparar? el arma" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_SIS457Character, FireRate), METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// --- SISTEMA DE VIDA DEL PERSONAJE ---\n// Salud m?xima del personaje\n" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
		{ "ToolTip", "--- SISTEMA DE VIDA DEL PERSONAJE ---\nSalud m?xima del personaje" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_SIS457Character, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Salud actual del personaje\n" },
		{ "ModuleRelativePath", "DonkeyKong_SIS457Character.h" },
		{ "ToolTip", "Salud actual del personaje" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADonkeyKong_SIS457Character, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CurrentHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::NewProp_CurrentHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKong_SIS457Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::ClassParams = {
		&ADonkeyKong_SIS457Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKong_SIS457Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKong_SIS457Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKong_SIS457Character, 3519272823);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ADonkeyKong_SIS457Character>()
	{
		return ADonkeyKong_SIS457Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKong_SIS457Character(Z_Construct_UClass_ADonkeyKong_SIS457Character, &ADonkeyKong_SIS457Character::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ADonkeyKong_SIS457Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKong_SIS457Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
