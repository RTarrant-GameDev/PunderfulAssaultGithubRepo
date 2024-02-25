// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PunderfulAssault/PunderfulAssaultProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunderfulAssaultProjectile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultProjectile();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PunderfulAssault();
// End Cross Module References
	DEFINE_FUNCTION(APunderfulAssaultProjectile::execGetProjectileType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProjectileType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunderfulAssaultProjectile::execSetProjectileType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectileType(Z_Param_TypeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunderfulAssaultProjectile::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void APunderfulAssaultProjectile::StaticRegisterNativesAPunderfulAssaultProjectile()
	{
		UClass* Class = APunderfulAssaultProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectileType", &APunderfulAssaultProjectile::execGetProjectileType },
			{ "OnHit", &APunderfulAssaultProjectile::execOnHit },
			{ "SetProjectileType", &APunderfulAssaultProjectile::execSetProjectileType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics
	{
		struct PunderfulAssaultProjectile_eventGetProjectileType_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultProjectile_eventGetProjectileType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunderfulAssaultProjectile, nullptr, "GetProjectileType", nullptr, nullptr, Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::PunderfulAssaultProjectile_eventGetProjectileType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::PunderfulAssaultProjectile_eventGetProjectileType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics
	{
		struct PunderfulAssaultProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultProjectile_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultProjectile_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_OtherComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function that is called when the projectile hits something.\n" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function that is called when the projectile hits something." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunderfulAssaultProjectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::PunderfulAssaultProjectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::PunderfulAssaultProjectile_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics
	{
		struct PunderfulAssaultProjectile_eventSetProjectileType_Parms
		{
			FString TypeValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::NewProp_TypeValue = { "TypeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultProjectile_eventSetProjectileType_Parms, TypeValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::NewProp_TypeValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunderfulAssaultProjectile, nullptr, "SetProjectileType", nullptr, nullptr, Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::PunderfulAssaultProjectile_eventSetProjectileType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::PunderfulAssaultProjectile_eventSetProjectileType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APunderfulAssaultProjectile);
	UClass* Z_Construct_UClass_APunderfulAssaultProjectile_NoRegister()
	{
		return APunderfulAssaultProjectile::StaticClass();
	}
	struct Z_Construct_UClass_APunderfulAssaultProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectileType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APunderfulAssaultProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PunderfulAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APunderfulAssaultProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APunderfulAssaultProjectile_GetProjectileType, "GetProjectileType" }, // 1203726437
		{ &Z_Construct_UFunction_APunderfulAssaultProjectile_OnHit, "OnHit" }, // 3707841810
		{ &Z_Construct_UFunction_APunderfulAssaultProjectile_SetProjectileType, "SetProjectileType" }, // 3869987387
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PunderfulAssaultProjectile.h" },
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData), Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileType_MetaData[] = {
		{ "Category", "PunderfulAssaultProjectile" },
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileType = { "ProjectileType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultProjectile, ProjectileType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileType_MetaData), Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMeshComponent_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMeshComponent = { "ProjectileMeshComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultProjectile, ProjectileMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMeshComponent_MetaData), Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMaterialInstance_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile material\n" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile material" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMaterialInstance = { "ProjectileMaterialInstance", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultProjectile, ProjectileMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMaterialInstance_MetaData), Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMaterialInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APunderfulAssaultProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultProjectile_Statics::NewProp_ProjectileMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APunderfulAssaultProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APunderfulAssaultProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APunderfulAssaultProjectile_Statics::ClassParams = {
		&APunderfulAssaultProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APunderfulAssaultProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_APunderfulAssaultProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APunderfulAssaultProjectile()
	{
		if (!Z_Registration_Info_UClass_APunderfulAssaultProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APunderfulAssaultProjectile.OuterSingleton, Z_Construct_UClass_APunderfulAssaultProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APunderfulAssaultProjectile.OuterSingleton;
	}
	template<> PUNDERFULASSAULT_API UClass* StaticClass<APunderfulAssaultProjectile>()
	{
		return APunderfulAssaultProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APunderfulAssaultProjectile);
	APunderfulAssaultProjectile::~APunderfulAssaultProjectile() {}
	struct Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APunderfulAssaultProjectile, APunderfulAssaultProjectile::StaticClass, TEXT("APunderfulAssaultProjectile"), &Z_Registration_Info_UClass_APunderfulAssaultProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APunderfulAssaultProjectile), 2226760050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_2357692360(TEXT("/Script/PunderfulAssault"),
		Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
