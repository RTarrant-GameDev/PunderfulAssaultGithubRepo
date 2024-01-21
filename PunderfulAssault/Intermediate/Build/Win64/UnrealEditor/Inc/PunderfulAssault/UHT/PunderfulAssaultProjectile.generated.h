// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PunderfulAssaultProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PUNDERFULASSAULT_PunderfulAssaultProjectile_generated_h
#error "PunderfulAssaultProjectile.generated.h already included, missing '#pragma once' in PunderfulAssaultProjectile.h"
#endif
#define PUNDERFULASSAULT_PunderfulAssaultProjectile_generated_h

#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_SPARSE_DATA
#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_ACCESSORS
#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPunderfulAssaultProjectile(); \
	friend struct Z_Construct_UClass_APunderfulAssaultProjectile_Statics; \
public: \
	DECLARE_CLASS(APunderfulAssaultProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PunderfulAssault"), NO_API) \
	DECLARE_SERIALIZER(APunderfulAssaultProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APunderfulAssaultProjectile(APunderfulAssaultProjectile&&); \
	NO_API APunderfulAssaultProjectile(const APunderfulAssaultProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APunderfulAssaultProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APunderfulAssaultProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APunderfulAssaultProjectile) \
	NO_API virtual ~APunderfulAssaultProjectile();


#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_12_PROLOG
#define FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_SPARSE_DATA \
	FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_ACCESSORS \
	FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUNDERFULASSAULT_API UClass* StaticClass<class APunderfulAssaultProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PunderfulAssault_Source_PunderfulAssault_PunderfulAssaultProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
