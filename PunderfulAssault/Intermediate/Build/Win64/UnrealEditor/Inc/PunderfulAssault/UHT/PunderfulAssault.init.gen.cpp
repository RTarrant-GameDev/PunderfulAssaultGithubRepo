// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunderfulAssault_init() {}
	PUNDERFULASSAULT_API UFunction* Z_Construct_UDelegateFunction_PunderfulAssault_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PunderfulAssault;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PunderfulAssault()
	{
		if (!Z_Registration_Info_UPackage__Script_PunderfulAssault.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PunderfulAssault_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PunderfulAssault",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x98787452,
				0x2C120A94,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PunderfulAssault.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PunderfulAssault.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PunderfulAssault(Z_Construct_UPackage__Script_PunderfulAssault, TEXT("/Script/PunderfulAssault"), Z_Registration_Info_UPackage__Script_PunderfulAssault, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x98787452, 0x2C120A94));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
