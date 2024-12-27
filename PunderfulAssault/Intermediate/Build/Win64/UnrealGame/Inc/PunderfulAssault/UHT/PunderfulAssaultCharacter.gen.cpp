// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PunderfulAssault/PunderfulAssaultCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunderfulAssaultCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultCharacter();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultCharacter_NoRegister();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_APunderfulAssaultProjectile_NoRegister();
	PUNDERFULASSAULT_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PunderfulAssault();
// End Cross Module References
<<<<<<< HEAD
	DEFINE_FUNCTION(APunderfulAssaultCharacter::execLoadAudioSynchronously)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundWave**)Z_Param__Result=P_THIS->LoadAudioSynchronously();
		P_NATIVE_END;
	}
=======
>>>>>>> main
	DEFINE_FUNCTION(APunderfulAssaultCharacter::execDisplayHP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HPToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->DisplayHP(Z_Param_HPToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APunderfulAssaultCharacter::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void APunderfulAssaultCharacter::StaticRegisterNativesAPunderfulAssaultCharacter()
	{
		UClass* Class = APunderfulAssaultCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayHP", &APunderfulAssaultCharacter::execDisplayHP },
			{ "Fire", &APunderfulAssaultCharacter::execFire },
<<<<<<< HEAD
			{ "LoadAudioSynchronously", &APunderfulAssaultCharacter::execLoadAudioSynchronously },
=======
>>>>>>> main
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics
	{
		struct PunderfulAssaultCharacter_eventDisplayHP_Parms
		{
			int32 HPToDisplay;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_HPToDisplay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::NewProp_HPToDisplay = { "HPToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultCharacter_eventDisplayHP_Parms, HPToDisplay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultCharacter_eventDisplayHP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::NewProp_HPToDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunderfulAssaultCharacter, nullptr, "DisplayHP", nullptr, nullptr, Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::PunderfulAssaultCharacter_eventDisplayHP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::PunderfulAssaultCharacter_eventDisplayHP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APunderfulAssaultCharacter_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunderfulAssaultCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunderfulAssaultCharacter, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultCharacter_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunderfulAssaultCharacter_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APunderfulAssaultCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunderfulAssaultCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
<<<<<<< HEAD
	struct Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics
	{
		struct PunderfulAssaultCharacter_eventLoadAudioSynchronously_Parms
		{
			USoundWave* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PunderfulAssaultCharacter_eventLoadAudioSynchronously_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APunderfulAssaultCharacter, nullptr, "LoadAudioSynchronously", nullptr, nullptr, Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::PropPointers), sizeof(Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::PunderfulAssaultCharacter_eventLoadAudioSynchronously_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::Function_MetaDataParams), Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::PunderfulAssaultCharacter_eventLoadAudioSynchronously_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
=======
>>>>>>> main
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APunderfulAssaultCharacter);
	UClass* Z_Construct_UClass_APunderfulAssaultCharacter_NoRegister()
	{
		return APunderfulAssaultCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APunderfulAssaultCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_JokesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JokesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_JokesArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APunderfulAssaultCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PunderfulAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APunderfulAssaultCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APunderfulAssaultCharacter_DisplayHP, "DisplayHP" }, // 2161211309
		{ &Z_Construct_UFunction_APunderfulAssaultCharacter_Fire, "Fire" }, // 1613423911
<<<<<<< HEAD
		{ &Z_Construct_UFunction_APunderfulAssaultCharacter_LoadAudioSynchronously, "LoadAudioSynchronously" }, // 1351130430
=======
>>>>>>> main
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PunderfulAssaultCharacter.h" },
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_Mesh1P_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_Mesh1P_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire Input Action */" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FireAction_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FireAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_PauseAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pause Input Action */" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pause Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_PauseAction_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_PauseAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn.\n" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APunderfulAssaultProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JokesArray_Inner = { "JokesArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JokesArray_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JokesArray = { "JokesArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, JokesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JokesArray_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JokesArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gun muzzle offset from the camera location.\n" },
#endif
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun muzzle offset from the camera location." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MuzzleOffset_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MuzzleOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_HealthComponentClass_MetaData[] = {
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PunderfulAssaultCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_HealthComponentClass = { "HealthComponentClass", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APunderfulAssaultCharacter, HealthComponentClass), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_HealthComponentClass_MetaData), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_HealthComponentClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APunderfulAssaultCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_FireAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_PauseAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JokesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_JokesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APunderfulAssaultCharacter_Statics::NewProp_HealthComponentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APunderfulAssaultCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APunderfulAssaultCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APunderfulAssaultCharacter_Statics::ClassParams = {
		&APunderfulAssaultCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APunderfulAssaultCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APunderfulAssaultCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APunderfulAssaultCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APunderfulAssaultCharacter()
	{
		if (!Z_Registration_Info_UClass_APunderfulAssaultCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APunderfulAssaultCharacter.OuterSingleton, Z_Construct_UClass_APunderfulAssaultCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APunderfulAssaultCharacter.OuterSingleton;
	}
	template<> PUNDERFULASSAULT_API UClass* StaticClass<APunderfulAssaultCharacter>()
	{
		return APunderfulAssaultCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APunderfulAssaultCharacter);
	APunderfulAssaultCharacter::~APunderfulAssaultCharacter() {}
	struct Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultCharacter_h_Statics::ClassInfo[] = {
<<<<<<< HEAD
		{ Z_Construct_UClass_APunderfulAssaultCharacter, APunderfulAssaultCharacter::StaticClass, TEXT("APunderfulAssaultCharacter"), &Z_Registration_Info_UClass_APunderfulAssaultCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APunderfulAssaultCharacter), 1410503939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultCharacter_h_1591871222(TEXT("/Script/PunderfulAssault"),
=======
		{ Z_Construct_UClass_APunderfulAssaultCharacter, APunderfulAssaultCharacter::StaticClass, TEXT("APunderfulAssaultCharacter"), &Z_Registration_Info_UClass_APunderfulAssaultCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APunderfulAssaultCharacter), 1504098298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultCharacter_h_1883486891(TEXT("/Script/PunderfulAssault"),
>>>>>>> main
		Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
