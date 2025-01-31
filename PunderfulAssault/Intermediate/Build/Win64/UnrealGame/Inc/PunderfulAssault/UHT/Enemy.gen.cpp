// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PunderfulAssault/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_AEnemy();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PunderfulAssault();
// End Cross Module References
	void AEnemy::StaticRegisterNativesAEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MadeToLaugh_MetaData[];
#endif
		static void NewProp_MadeToLaugh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MadeToLaugh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PunderfulAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_HealthComponentClass_MetaData[] = {
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_HealthComponentClass = { "HealthComponentClass", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, HealthComponentClass), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_HealthComponentClass_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_HealthComponentClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_MadeToLaugh_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Statics::NewProp_MadeToLaugh_SetBit(void* Obj)
	{
		((AEnemy*)Obj)->MadeToLaugh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_MadeToLaugh = { "MadeToLaugh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemy), &Z_Construct_UClass_AEnemy_Statics::NewProp_MadeToLaugh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_MadeToLaugh_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_MadeToLaugh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_HealthComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_MadeToLaugh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemy()
	{
		if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
	}
	template<> PUNDERFULASSAULT_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
	AEnemy::~AEnemy() {}
	struct Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 1572231911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_Enemy_h_78423812(TEXT("/Script/PunderfulAssault"),
		Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
