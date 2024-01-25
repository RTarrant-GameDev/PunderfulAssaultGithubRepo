// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PunderfulAssault/PunderfulAssaultHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunderfulAssaultHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultHUD();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PunderfulAssault();
// End Cross Module References
	void APunderfulAssaultHUD::StaticRegisterNativesAPunderfulAssaultHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APunderfulAssaultHUD);
	UClass* Z_Construct_UClass_APunderfulAssaultHUD_NoRegister()
	{
		return APunderfulAssaultHUD::StaticClass();
	}
	struct Z_Construct_UClass_APunderfulAssaultHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APunderfulAssaultHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PunderfulAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PunderfulAssaultHUD.h" },
		{ "ModuleRelativePath", "PunderfulAssaultHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APunderfulAssaultHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APunderfulAssaultHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APunderfulAssaultHUD_Statics::ClassParams = {
		&APunderfulAssaultHUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_APunderfulAssaultHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APunderfulAssaultHUD()
	{
		if (!Z_Registration_Info_UClass_APunderfulAssaultHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APunderfulAssaultHUD.OuterSingleton, Z_Construct_UClass_APunderfulAssaultHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APunderfulAssaultHUD.OuterSingleton;
	}
	template<> PUNDERFULASSAULT_API UClass* StaticClass<APunderfulAssaultHUD>()
	{
		return APunderfulAssaultHUD::StaticClass();
	}
	APunderfulAssaultHUD::APunderfulAssaultHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APunderfulAssaultHUD);
	APunderfulAssaultHUD::~APunderfulAssaultHUD() {}
	struct Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APunderfulAssaultHUD, APunderfulAssaultHUD::StaticClass, TEXT("APunderfulAssaultHUD"), &Z_Registration_Info_UClass_APunderfulAssaultHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APunderfulAssaultHUD), 2853360700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultHUD_h_156147534(TEXT("/Script/PunderfulAssault"),
		Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
