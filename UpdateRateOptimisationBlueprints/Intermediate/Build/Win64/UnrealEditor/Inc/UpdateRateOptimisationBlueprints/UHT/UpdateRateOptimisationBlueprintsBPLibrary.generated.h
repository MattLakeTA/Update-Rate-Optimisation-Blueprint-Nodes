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
class UUpdateRateOptimisationDataAsset;
enum class EUpdateRateOptimisationMode : uint8;
struct FUpdateRateOptimisationStruct;

// ********** Begin ScriptStruct FUpdateRateOptimisationStruct *************************************
struct Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics;
#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics; \
	UPDATERATEOPTIMISATIONBLUEPRINTS_API static class UScriptStruct* StaticStruct();


struct FUpdateRateOptimisationStruct;
// ********** End ScriptStruct FUpdateRateOptimisationStruct ***************************************

// ********** Begin Class UUpdateRateOptimisationDataAsset *****************************************
struct Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics;
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationDataAsset_NoRegister();

#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateRateOptimisationDataAsset(); \
	friend struct ::Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* ::Z_Construct_UClass_UUpdateRateOptimisationDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UUpdateRateOptimisationDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UpdateRateOptimisationBlueprints"), Z_Construct_UClass_UUpdateRateOptimisationDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UUpdateRateOptimisationDataAsset)


#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateRateOptimisationDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUpdateRateOptimisationDataAsset(UUpdateRateOptimisationDataAsset&&) = delete; \
	UUpdateRateOptimisationDataAsset(const UUpdateRateOptimisationDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateRateOptimisationDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateRateOptimisationDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateRateOptimisationDataAsset) \
	NO_API virtual ~UUpdateRateOptimisationDataAsset();


#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_67_PROLOG
#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_70_INCLASS_NO_PURE_DECLS \
	FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUpdateRateOptimisationDataAsset;

// ********** End Class UUpdateRateOptimisationDataAsset *******************************************

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary *******************************
#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_80_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetUpdateRateOptimisationMode); \
	DECLARE_FUNCTION(execSetUpdateRateOptimisationByStruct); \
	DECLARE_FUNCTION(execSetUpdateRateOptimisationByDataAsset);


struct Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics;
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister();

#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary(); \
	friend struct ::Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* ::Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUpdateRateOptimisationBlueprintsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UpdateRateOptimisationBlueprints"), Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUpdateRateOptimisationBlueprintsBPLibrary)


#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateRateOptimisationBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateRateOptimisationBlueprintsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateRateOptimisationBlueprintsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateRateOptimisationBlueprintsBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUpdateRateOptimisationBlueprintsBPLibrary(UUpdateRateOptimisationBlueprintsBPLibrary&&) = delete; \
	UUpdateRateOptimisationBlueprintsBPLibrary(const UUpdateRateOptimisationBlueprintsBPLibrary&) = delete; \
	NO_API virtual ~UUpdateRateOptimisationBlueprintsBPLibrary();


#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_77_PROLOG
#define FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_80_RPC_WRAPPERS \
	FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_80_INCLASS \
	FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUpdateRateOptimisationBlueprintsBPLibrary;

// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h

// ********** Begin Enum EUpdateRateOptimisationMode ***********************************************
#define FOREACH_ENUM_EUPDATERATEOPTIMISATIONMODE(op) \
	op(EUpdateRateOptimisationMode::None) \
	op(EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds) \
	op(EUpdateRateOptimisationMode::LODToFrameSkipMap) 

enum class EUpdateRateOptimisationMode : uint8;
template<> struct TIsUEnumClass<EUpdateRateOptimisationMode> { enum { Value = true }; };
template<> UPDATERATEOPTIMISATIONBLUEPRINTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EUpdateRateOptimisationMode>();
// ********** End Enum EUpdateRateOptimisationMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
