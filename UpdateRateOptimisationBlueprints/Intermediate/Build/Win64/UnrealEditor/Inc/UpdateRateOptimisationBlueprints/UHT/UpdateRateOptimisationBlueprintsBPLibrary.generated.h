// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UpdateRateOptimisationBlueprintsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class USkinnedMeshComponent;
enum class EUpdateRateOptimisationMode : uint8;
#ifdef UPDATERATEOPTIMISATIONBLUEPRINTS_UpdateRateOptimisationBlueprintsBPLibrary_generated_h
#error "UpdateRateOptimisationBlueprintsBPLibrary.generated.h already included, missing '#pragma once' in UpdateRateOptimisationBlueprintsBPLibrary.h"
#endif
#define UPDATERATEOPTIMISATIONBLUEPRINTS_UpdateRateOptimisationBlueprintsBPLibrary_generated_h

#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_SPARSE_DATA
#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentUpdateRate); \
	DECLARE_FUNCTION(execGetCurrentMaxDistanceFactor); \
	DECLARE_FUNCTION(execGetInterpolateSkippedFrames); \
	DECLARE_FUNCTION(execSetInterpolateSkippedFrames); \
	DECLARE_FUNCTION(execGetBaseNonRenderedUpdateRate); \
	DECLARE_FUNCTION(execSetBaseNonRenderedUpdateRate); \
	DECLARE_FUNCTION(execGetMaxEvalRateForInterpolation); \
	DECLARE_FUNCTION(execSetMaxEvalRateForInterpolation); \
	DECLARE_FUNCTION(execGetLODToFrameSkipMap); \
	DECLARE_FUNCTION(execSetLODToFrameSkipMap); \
	DECLARE_FUNCTION(execGetLODToFrameSkipArray); \
	DECLARE_FUNCTION(execSetLODToFrameSkipArray); \
	DECLARE_FUNCTION(execClearLODToFrameSkip); \
	DECLARE_FUNCTION(execGetLODToFrameSkipIndex); \
	DECLARE_FUNCTION(execSetLODToFrameSkipIndex); \
	DECLARE_FUNCTION(execClearVisibleDistanceFactorThresholds); \
	DECLARE_FUNCTION(execGetVisibleDistanceFactorThresholds); \
	DECLARE_FUNCTION(execSetVisibleDistanceFactorThresholds); \
	DECLARE_FUNCTION(execGetEnabledUpdateRateOptimisationsOnSkinnedMesh); \
	DECLARE_FUNCTION(execSetEnableUpdateRateOptimisationsOnSkinnedMesh); \
	DECLARE_FUNCTION(execGetUpdateRateOptimisationMode); \
	DECLARE_FUNCTION(execSetUpdateRateOptimisationMode);


#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentUpdateRate); \
	DECLARE_FUNCTION(execGetCurrentMaxDistanceFactor); \
	DECLARE_FUNCTION(execGetInterpolateSkippedFrames); \
	DECLARE_FUNCTION(execSetInterpolateSkippedFrames); \
	DECLARE_FUNCTION(execGetBaseNonRenderedUpdateRate); \
	DECLARE_FUNCTION(execSetBaseNonRenderedUpdateRate); \
	DECLARE_FUNCTION(execGetMaxEvalRateForInterpolation); \
	DECLARE_FUNCTION(execSetMaxEvalRateForInterpolation); \
	DECLARE_FUNCTION(execGetLODToFrameSkipMap); \
	DECLARE_FUNCTION(execSetLODToFrameSkipMap); \
	DECLARE_FUNCTION(execGetLODToFrameSkipArray); \
	DECLARE_FUNCTION(execSetLODToFrameSkipArray); \
	DECLARE_FUNCTION(execClearLODToFrameSkip); \
	DECLARE_FUNCTION(execGetLODToFrameSkipIndex); \
	DECLARE_FUNCTION(execSetLODToFrameSkipIndex); \
	DECLARE_FUNCTION(execClearVisibleDistanceFactorThresholds); \
	DECLARE_FUNCTION(execGetVisibleDistanceFactorThresholds); \
	DECLARE_FUNCTION(execSetVisibleDistanceFactorThresholds); \
	DECLARE_FUNCTION(execGetEnabledUpdateRateOptimisationsOnSkinnedMesh); \
	DECLARE_FUNCTION(execSetEnableUpdateRateOptimisationsOnSkinnedMesh); \
	DECLARE_FUNCTION(execGetUpdateRateOptimisationMode); \
	DECLARE_FUNCTION(execSetUpdateRateOptimisationMode);


#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_ACCESSORS
#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary(); \
	friend struct Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UUpdateRateOptimisationBlueprintsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UpdateRateOptimisationBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UUpdateRateOptimisationBlueprintsBPLibrary)


#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary(); \
	friend struct Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UUpdateRateOptimisationBlueprintsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UpdateRateOptimisationBlueprints"), NO_API) \
	DECLARE_SERIALIZER(UUpdateRateOptimisationBlueprintsBPLibrary)


#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateRateOptimisationBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateRateOptimisationBlueprintsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateRateOptimisationBlueprintsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateRateOptimisationBlueprintsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateRateOptimisationBlueprintsBPLibrary(UUpdateRateOptimisationBlueprintsBPLibrary&&); \
	NO_API UUpdateRateOptimisationBlueprintsBPLibrary(const UUpdateRateOptimisationBlueprintsBPLibrary&); \
public: \
	NO_API virtual ~UUpdateRateOptimisationBlueprintsBPLibrary();


#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateRateOptimisationBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateRateOptimisationBlueprintsBPLibrary(UUpdateRateOptimisationBlueprintsBPLibrary&&); \
	NO_API UUpdateRateOptimisationBlueprintsBPLibrary(const UUpdateRateOptimisationBlueprintsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateRateOptimisationBlueprintsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateRateOptimisationBlueprintsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateRateOptimisationBlueprintsBPLibrary) \
	NO_API virtual ~UUpdateRateOptimisationBlueprintsBPLibrary();


#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_20_PROLOG
#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_SPARSE_DATA \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_RPC_WRAPPERS \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_ACCESSORS \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_INCLASS \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_SPARSE_DATA \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_ACCESSORS \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UpdateRateOptimisationBlueprintsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* StaticClass<class UUpdateRateOptimisationBlueprintsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE52_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h


#define FOREACH_ENUM_EUPDATERATEOPTIMISATIONMODE(op) \
	op(EUpdateRateOptimisationMode::None) \
	op(EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds) \
	op(EUpdateRateOptimisationMode::LODToFrameSkipMap) 

enum class EUpdateRateOptimisationMode : uint8;
template<> struct TIsUEnumClass<EUpdateRateOptimisationMode> { enum { Value = true }; };
template<> UPDATERATEOPTIMISATIONBLUEPRINTS_API UEnum* StaticEnum<EUpdateRateOptimisationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
