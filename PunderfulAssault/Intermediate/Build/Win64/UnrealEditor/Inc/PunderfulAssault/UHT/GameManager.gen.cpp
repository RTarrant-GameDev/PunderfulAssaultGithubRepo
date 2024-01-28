// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PunderfulAssault/GameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_AGameManager();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_UTimerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PunderfulAssault();
// End Cross Module References
	DEFINE_FUNCTION(AGameManager::execDisplayEnemies)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EnemyCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->DisplayEnemies(Z_Param_EnemyCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameManager::execDisplayTimeToTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->DisplayTimeToTimer(Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	void AGameManager::StaticRegisterNativesAGameManager()
	{
		UClass* Class = AGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayEnemies", &AGameManager::execDisplayEnemies },
			{ "DisplayTimeToTimer", &AGameManager::execDisplayTimeToTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics
	{
		struct GameManager_eventDisplayEnemies_Parms
		{
			int32 EnemyCount;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnemyCount;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::NewProp_EnemyCount = { "EnemyCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventDisplayEnemies_Parms, EnemyCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventDisplayEnemies_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::NewProp_EnemyCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "DisplayEnemies", nullptr, nullptr, Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::GameManager_eventDisplayEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::GameManager_eventDisplayEnemies_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGameManager_DisplayEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameManager_DisplayEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics
	{
		struct GameManager_eventDisplayTimeToTimer_Parms
		{
			float TimeToDisplay;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventDisplayTimeToTimer_Parms, TimeToDisplay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventDisplayTimeToTimer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::NewProp_TimeToDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "DisplayTimeToTimer", nullptr, nullptr, Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::GameManager_eventDisplayTimeToTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::GameManager_eventDisplayTimeToTimer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGameManager_DisplayTimeToTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameManager_DisplayTimeToTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameManager);
	UClass* Z_Construct_UClass_AGameManager_NoRegister()
	{
		return AGameManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesInLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnemiesInLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesMadeToLaugh_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnemiesMadeToLaugh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimerComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PunderfulAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameManager_DisplayEnemies, "DisplayEnemies" }, // 1696775517
		{ &Z_Construct_UFunction_AGameManager_DisplayTimeToTimer, "DisplayTimeToTimer" }, // 552380393
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_TimerValue_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_TimerValue = { "TimerValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, TimerValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_TimerValue_MetaData), Z_Construct_UClass_AGameManager_Statics::NewProp_TimerValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesInLevel_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesInLevel = { "EnemiesInLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, EnemiesInLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesInLevel_MetaData), Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesInLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesMadeToLaugh_MetaData[] = {
		{ "Category", "Enemies" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesMadeToLaugh = { "EnemiesMadeToLaugh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, EnemiesMadeToLaugh), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesMadeToLaugh_MetaData), Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesMadeToLaugh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_TimerComponentClass_MetaData[] = {
		{ "Category", "Timer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_TimerComponentClass = { "TimerComponentClass", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, TimerComponentClass), Z_Construct_UClass_UTimerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_TimerComponentClass_MetaData), Z_Construct_UClass_AGameManager_Statics::NewProp_TimerComponentClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_TimerValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesInLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_EnemiesMadeToLaugh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_TimerComponentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameManager_Statics::ClassParams = {
		&AGameManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameManager()
	{
		if (!Z_Registration_Info_UClass_AGameManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameManager.OuterSingleton, Z_Construct_UClass_AGameManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameManager.OuterSingleton;
	}
	template<> PUNDERFULASSAULT_API UClass* StaticClass<AGameManager>()
	{
		return AGameManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
	AGameManager::~AGameManager() {}
	struct Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_GameManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_GameManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameManager, AGameManager::StaticClass, TEXT("AGameManager"), &Z_Registration_Info_UClass_AGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManager), 2795595517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_GameManager_h_514457693(TEXT("/Script/PunderfulAssault"),
		Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_GameManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
