// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UpdateRateOptimisationBlueprintsBPLibrary.h"

#ifdef UPDATERATEOPTIMISATIONBLUEPRINTS_UpdateRateOptimisationBlueprintsBPLibrary_generated_h
#error "UpdateRateOptimisationBlueprintsBPLibrary.generated.h already included, missing '#pragma once' in UpdateRateOptimisationBlueprintsBPLibrary.h"
#endif
#define UPDATERATEOPTIMISATIONBLUEPRINTS_UpdateRateOptimisationBlueprintsBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
class USkinnedMeshComponent;
enum class EUpdateRateOptimisationMode : uint8;

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary *******************************
#define FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_RPC_WRAPPERS \
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


UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister();

#define FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary(); \
	friend struct Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUpdateRateOptimisationBlueprintsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UpdateRateOptimisationBlueprints"), Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUpdateRateOptimisationBlueprintsBPLibrary)


#define FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateRateOptimisationBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateRateOptimisationBlueprintsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateRateOptimisationBlueprintsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateRateOptimisationBlueprintsBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUpdateRateOptimisationBlueprintsBPLibrary(UUpdateRateOptimisationBlueprintsBPLibrary&&) = delete; \
	UUpdateRateOptimisationBlueprintsBPLibrary(const UUpdateRateOptimisationBlueprintsBPLibrary&) = delete; \
	NO_API virtual ~UUpdateRateOptimisationBlueprintsBPLibrary();


#define FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_20_PROLOG
#define FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_RPC_WRAPPERS \
	FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_INCLASS \
	FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUpdateRateOptimisationBlueprintsBPLibrary;

// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h

// ********** Begin Enum EUpdateRateOptimisationMode ***********************************************
#define FOREACH_ENUM_EUPDATERATEOPTIMISATIONMODE(op) \
	op(EUpdateRateOptimisationMode::None) \
	op(EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds) \
	op(EUpdateRateOptimisationMode::LODToFrameSkipMap) 

enum class EUpdateRateOptimisationMode : uint8;
template<> struct TIsUEnumClass<EUpdateRateOptimisationMode> { enum { Value = true }; };
template<> UPDATERATEOPTIMISATIONBLUEPRINTS_API UEnum* StaticEnum<EUpdateRateOptimisationMode>();
// ********** End Enum EUpdateRateOptimisationMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
