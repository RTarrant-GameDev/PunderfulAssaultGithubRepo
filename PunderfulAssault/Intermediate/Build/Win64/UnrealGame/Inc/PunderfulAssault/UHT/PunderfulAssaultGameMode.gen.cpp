// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PunderfulAssault/PunderfulAssaultGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunderfulAssaultGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultGameMode();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PunderfulAssault();
// End Cross Module References
	void APunderfulAssaultGameMode::StaticRegisterNativesAPunderfulAssaultGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APunderfulAssaultGameMode);
	UClass* Z_Construct_UClass_APunderfulAssaultGameMode_NoRegister()
	{
		return APunderfulAssaultGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APunderfulAssaultGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APunderfulAssaultGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PunderfulAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PunderfulAssaultGameMode.h" },
		{ "ModuleRelativePath", "PunderfulAssaultGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APunderfulAssaultGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APunderfulAssaultGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APunderfulAssaultGameMode_Statics::ClassParams = {
		&APunderfulAssaultGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APunderfulAssaultGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APunderfulAssaultGameMode()
	{
		if (!Z_Registration_Info_UClass_APunderfulAssaultGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APunderfulAssaultGameMode.OuterSingleton, Z_Construct_UClass_APunderfulAssaultGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APunderfulAssaultGameMode.OuterSingleton;
	}
	template<> PUNDERFULASSAULT_API UClass* StaticClass<APunderfulAssaultGameMode>()
	{
		return APunderfulAssaultGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APunderfulAssaultGameMode);
	APunderfulAssaultGameMode::~APunderfulAssaultGameMode() {}
	struct Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APunderfulAssaultGameMode, APunderfulAssaultGameMode::StaticClass, TEXT("APunderfulAssaultGameMode"), &Z_Registration_Info_UClass_APunderfulAssaultGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APunderfulAssaultGameMode), 304119438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultGameMode_h_4234347999(TEXT("/Script/PunderfulAssault"),
		Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
