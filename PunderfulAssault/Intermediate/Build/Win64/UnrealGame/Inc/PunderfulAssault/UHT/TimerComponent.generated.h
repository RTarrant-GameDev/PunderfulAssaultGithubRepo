// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUNDERFULASSAULT_TimerComponent_generated_h
#error "TimerComponent.generated.h already included, missing '#pragma once' in TimerComponent.h"
#endif
#define PUNDERFULASSAULT_TimerComponent_generated_h

#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_SPARSE_DATA
#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTimeRemaining); \
	DECLARE_FUNCTION(execGetTimeRemaining);


#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_ACCESSORS
#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimerComponent(); \
	friend struct Z_Construct_UClass_UTimerComponent_Statics; \
public: \
	DECLARE_CLASS(UTimerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PunderfulAssault"), NO_API) \
	DECLARE_SERIALIZER(UTimerComponent)


#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimerComponent(UTimerComponent&&); \
	NO_API UTimerComponent(const UTimerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimerComponent) \
	NO_API virtual ~UTimerComponent();


#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_10_PROLOG
#define FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_SPARSE_DATA \
	FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_ACCESSORS \
	FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUNDERFULASSAULT_API UClass* StaticClass<class UTimerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PunderfulAssault_Source_PunderfulAssault_TimerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
