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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_AEnemy();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultProjectile_NoRegister();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PunderfulAssault();
// End Cross Module References
	DEFINE_FUNCTION(AEnemy::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void AEnemy::StaticRegisterNativesAEnemy()
	{
		UClass* Class = AEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AEnemy::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemy_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FiringRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSpawnProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSpawnProjectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PunderfulAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_Fire, "Fire" }, // 2257638887
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_FiringRange_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_FiringRange = { "FiringRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, FiringRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_FiringRange_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_FiringRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToPlayer_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToPlayer = { "DistanceToPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, DistanceToPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToPlayer_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn.\n" },
#endif
		{ "ModuleRelativePath", "Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APunderfulAssaultProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToSpawnProjectile_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToSpawnProjectile = { "DistanceToSpawnProjectile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, DistanceToSpawnProjectile), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToSpawnProjectile_MetaData), Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToSpawnProjectile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_HealthComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_MadeToLaugh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_FiringRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_DistanceToSpawnProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 3380879368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_Enemy_h_1009382106(TEXT("/Script/PunderfulAssault"),
		Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
