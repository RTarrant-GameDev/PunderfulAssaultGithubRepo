// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PunderfulAssault/TimerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_UTimerComponent();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_UTimerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PunderfulAssault();
// End Cross Module References
	DEFINE_FUNCTION(UTimerComponent::execSetTimeRemaining)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimerValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeRemaining(Z_Param_TimerValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimerComponent::execGetTimeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeRemaining();
		P_NATIVE_END;
	}
	void UTimerComponent::StaticRegisterNativesUTimerComponent()
	{
		UClass* Class = UTimerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeRemaining", &UTimerComponent::execGetTimeRemaining },
			{ "SetTimeRemaining", &UTimerComponent::execSetTimeRemaining },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics
	{
		struct TimerComponent_eventGetTimeRemaining_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerComponent_eventGetTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "TimerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerComponent, nullptr, "GetTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::TimerComponent_eventGetTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::TimerComponent_eventGetTimeRemaining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTimerComponent_GetTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimerComponent_GetTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics
	{
		struct TimerComponent_eventSetTimeRemaining_Parms
		{
			float TimerValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::NewProp_TimerValue = { "TimerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerComponent_eventSetTimeRemaining_Parms, TimerValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::NewProp_TimerValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "TimerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimerComponent, nullptr, "SetTimeRemaining", nullptr, nullptr, Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::TimerComponent_eventSetTimeRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::TimerComponent_eventSetTimeRemaining_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTimerComponent_SetTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimerComponent_SetTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimerComponent);
	UClass* Z_Construct_UClass_UTimerComponent_NoRegister()
	{
		return UTimerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTimerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PunderfulAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimerComponent_GetTimeRemaining, "GetTimeRemaining" }, // 4051776542
		{ &Z_Construct_UFunction_UTimerComponent_SetTimeRemaining, "SetTimeRemaining" }, // 866179566
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TimerComponent.h" },
		{ "ModuleRelativePath", "TimerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimerComponent_Statics::ClassParams = {
		&UTimerComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimerComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTimerComponent()
	{
		if (!Z_Registration_Info_UClass_UTimerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimerComponent.OuterSingleton, Z_Construct_UClass_UTimerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimerComponent.OuterSingleton;
	}
	template<> PUNDERFULASSAULT_API UClass* StaticClass<UTimerComponent>()
	{
		return UTimerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerComponent);
	UTimerComponent::~UTimerComponent() {}
	struct Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimerComponent, UTimerComponent::StaticClass, TEXT("UTimerComponent"), &Z_Registration_Info_UClass_UTimerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimerComponent), 2621412902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_1450915272(TEXT("/Script/PunderfulAssault"),
		Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
