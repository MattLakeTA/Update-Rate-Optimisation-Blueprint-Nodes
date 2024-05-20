// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpdateRateOptimisationBlueprints/Public/UpdateRateOptimisationBlueprintsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateRateOptimisationBlueprintsBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UEnum* Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode();
// End Cross Module References

// Begin Enum EUpdateRateOptimisationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateRateOptimisationMode;
static UEnum* EUpdateRateOptimisationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, (UObject*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints(), TEXT("EUpdateRateOptimisationMode"));
	}
	return Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.OuterSingleton;
}
template<> UPDATERATEOPTIMISATIONBLUEPRINTS_API UEnum* StaticEnum<EUpdateRateOptimisationMode>()
{
	return EUpdateRateOptimisationMode_StaticEnum();
}
struct Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LODToFrameSkipMap.Name", "EUpdateRateOptimisationMode::LODToFrameSkipMap" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "None.Name", "EUpdateRateOptimisationMode::None" },
		{ "VisibleDistanceFactorThresholds.Name", "EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdateRateOptimisationMode::None", (int64)EUpdateRateOptimisationMode::None },
		{ "EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds", (int64)EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds },
		{ "EUpdateRateOptimisationMode::LODToFrameSkipMap", (int64)EUpdateRateOptimisationMode::LODToFrameSkipMap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
	nullptr,
	"EUpdateRateOptimisationMode",
	"EUpdateRateOptimisationMode",
	Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode()
{
	if (!Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.InnerSingleton, Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.InnerSingleton;
}
// End Enum EUpdateRateOptimisationMode

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearLODToFrameSkip
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Clears the LOD To Frame Skip settings for URO.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the LOD To Frame Skip settings for URO." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "ClearLODToFrameSkip", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execClearLODToFrameSkip)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::ClearLODToFrameSkip(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearLODToFrameSkip

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearVisibleDistanceFactorThresholds
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the threshold values currently set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "ClearVisibleDistanceFactorThresholds", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execClearVisibleDistanceFactorThresholds)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::ClearVisibleDistanceFactorThresholds(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearVisibleDistanceFactorThresholds

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetBaseNonRenderedUpdateRate
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Get the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetBaseNonRenderedUpdateRate", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetBaseNonRenderedUpdateRate)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetBaseNonRenderedUpdateRate(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetBaseNonRenderedUpdateRate

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetCurrentMaxDistanceFactor
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Returns Current Max Distance Factor; useful for debugging and setting up URO or LODs.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Current Max Distance Factor; useful for debugging and setting up URO or LODs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetCurrentMaxDistanceFactor", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetCurrentMaxDistanceFactor)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetCurrentMaxDistanceFactor(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetCurrentMaxDistanceFactor

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetCurrentUpdateRate
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Returns the current update rate. Useful for debugging URO.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current update rate. Useful for debugging URO." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetCurrentUpdateRate", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetCurrentUpdateRate)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetCurrentUpdateRate(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetCurrentUpdateRate

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Gets the enabled state the use of URO on a particular skinned mesh component.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the enabled state the use of URO on a particular skinned mesh component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetEnabledUpdateRateOptimisationsOnSkinnedMesh", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetEnabledUpdateRateOptimisationsOnSkinnedMesh)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetEnabledUpdateRateOptimisationsOnSkinnedMesh(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetInterpolateSkippedFrames
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Get the current state of URO's interpolate skipped frames.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current state of URO's interpolate skipped frames." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetInterpolateSkippedFrames", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetInterpolateSkippedFrames)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetInterpolateSkippedFrames(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetInterpolateSkippedFrames

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipArray
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Get the LOD To Frame Skip Array for URO.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the LOD To Frame Skip Array for URO." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipArray", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipArray)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetLODToFrameSkipArray(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipArray

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipIndex
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 LODIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Gets the LOD To Frame Skip Index for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the LOD To Frame Skip Index for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipIndex", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipIndex)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetLODToFrameSkipIndex(Z_Param_SkinnedMeshComponent,Z_Param_LODIndex);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipIndex

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipMap
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TMap<int32,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Get the LOD To Frame Skip Map for URO.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the LOD To Frame Skip Map for URO." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipMap", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipMap)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<int32,int32>*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetLODToFrameSkipMap(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipMap

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetMaxEvalRateForInterpolation
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetMaxEvalRateForInterpolation", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetMaxEvalRateForInterpolation)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetMaxEvalRateForInterpolation(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetMaxEvalRateForInterpolation

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetUpdateRateOptimisationMode
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		EUpdateRateOptimisationMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Acquires the update rate optimisation method.\n\x09Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acquires the update rate optimisation method.\n       Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms, ReturnValue), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(0, nullptr) }; // 1983680387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetUpdateRateOptimisationMode", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetUpdateRateOptimisationMode)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUpdateRateOptimisationMode*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetUpdateRateOptimisationMode(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetUpdateRateOptimisationMode

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetVisibleDistanceFactorThresholds
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Get the visible threshold distances that determine the update rate changes when rendered\n\x09""0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the visible threshold distances that determine the update rate changes when rendered\n       0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetVisibleDistanceFactorThresholds", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetVisibleDistanceFactorThresholds)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetVisibleDistanceFactorThresholds(Z_Param_SkinnedMeshComponent);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetVisibleDistanceFactorThresholds

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetBaseNonRenderedUpdateRate
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 FramesToSkip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToSkip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms, FramesToSkip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_FramesToSkip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetBaseNonRenderedUpdateRate", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetBaseNonRenderedUpdateRate)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_FramesToSkip);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetBaseNonRenderedUpdateRate(Z_Param_SkinnedMeshComponent,Z_Param_FramesToSkip);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetBaseNonRenderedUpdateRate

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetEnableUpdateRateOptimisationsOnSkinnedMesh
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Enables the use of URO on a particular skinned mesh component.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the use of URO on a particular skinned mesh component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetEnableUpdateRateOptimisationsOnSkinnedMesh", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetEnableUpdateRateOptimisationsOnSkinnedMesh)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetEnableUpdateRateOptimisationsOnSkinnedMesh(Z_Param_SkinnedMeshComponent,Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetEnableUpdateRateOptimisationsOnSkinnedMesh

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetInterpolateSkippedFrames
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Whether or not to disable interpolation between frames that have been skipped.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to disable interpolation between frames that have been skipped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetInterpolateSkippedFrames", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetInterpolateSkippedFrames)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetInterpolateSkippedFrames(Z_Param_SkinnedMeshComponent,Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetInterpolateSkippedFrames

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipArray
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TArray<int32> LODToFrameSkipArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToFrameSkipArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODToFrameSkipArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_Inner = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms, LODToFrameSkipArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToFrameSkipArray_MetaData), NewProp_LODToFrameSkipArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipArray", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipArray)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_TARRAY_REF(int32,Z_Param_Out_LODToFrameSkipArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetLODToFrameSkipArray(Z_Param_SkinnedMeshComponent,Z_Param_Out_LODToFrameSkipArray);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipArray

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipIndex
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 LODIndex;
		int32 FramesToSkip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the LOD To Frame Skip Map for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the LOD To Frame Skip Map for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToSkip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, FramesToSkip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_FramesToSkip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipIndex", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipIndex)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FramesToSkip);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetLODToFrameSkipIndex(Z_Param_SkinnedMeshComponent,Z_Param_LODIndex,Z_Param_FramesToSkip);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipIndex

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipMap
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TMap<int32,int32> LODToFrameSkipMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the LOD To Frame Skip map for URO - The key is the LOD index, and the value is the skip rate.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the LOD To Frame Skip map for URO - The key is the LOD index, and the value is the skip rate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToFrameSkipMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LODToFrameSkipMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_ValueProp = { "LODToFrameSkipMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_Key_KeyProp = { "LODToFrameSkipMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap = { "LODToFrameSkipMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms, LODToFrameSkipMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToFrameSkipMap_MetaData), NewProp_LODToFrameSkipMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipMap", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipMap)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_TMAP_REF(int32,int32,Z_Param_Out_LODToFrameSkipMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetLODToFrameSkipMap(Z_Param_SkinnedMeshComponent,Z_Param_Out_LODToFrameSkipMap);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipMap

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetMaxEvalRateForInterpolation
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 UpdateRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms, UpdateRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_UpdateRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetMaxEvalRateForInterpolation", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetMaxEvalRateForInterpolation)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_UpdateRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetMaxEvalRateForInterpolation(Z_Param_SkinnedMeshComponent,Z_Param_UpdateRate);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetMaxEvalRateForInterpolation

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetUpdateRateOptimisationMode
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		EUpdateRateOptimisationMode UpdateRateOptimisationMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Determines the update rate optimisation method. \n\x09Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the update rate optimisation method.\n       Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateRateOptimisationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateRateOptimisationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode = { "UpdateRateOptimisationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms, UpdateRateOptimisationMode), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(0, nullptr) }; // 1983680387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetUpdateRateOptimisationMode", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetUpdateRateOptimisationMode)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_ENUM(EUpdateRateOptimisationMode,Z_Param_UpdateRateOptimisationMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetUpdateRateOptimisationMode(Z_Param_SkinnedMeshComponent,EUpdateRateOptimisationMode(Z_Param_UpdateRateOptimisationMode));
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetUpdateRateOptimisationMode

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetVisibleDistanceFactorThresholds
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TArray<float> VisibleDistanceFactorThesholds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Set the visible threshold distances that determine the update rate changes when rendered.\n\x09""0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the visible threshold distances that determine the update rate changes when rendered.\n       0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleDistanceFactorThesholds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleDistanceFactorThesholds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleDistanceFactorThesholds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_Inner = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms, VisibleDistanceFactorThesholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleDistanceFactorThesholds_MetaData), NewProp_VisibleDistanceFactorThesholds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetVisibleDistanceFactorThresholds", nullptr, nullptr, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetVisibleDistanceFactorThresholds)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_TARRAY_REF(float,Z_Param_Out_VisibleDistanceFactorThesholds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetVisibleDistanceFactorThresholds(Z_Param_SkinnedMeshComponent,Z_Param_Out_VisibleDistanceFactorThesholds);
	P_NATIVE_END;
}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetVisibleDistanceFactorThresholds

// Begin Class UUpdateRateOptimisationBlueprintsBPLibrary
void UUpdateRateOptimisationBlueprintsBPLibrary::StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary()
{
	UClass* Class = UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearLODToFrameSkip", &UUpdateRateOptimisationBlueprintsBPLibrary::execClearLODToFrameSkip },
		{ "ClearVisibleDistanceFactorThresholds", &UUpdateRateOptimisationBlueprintsBPLibrary::execClearVisibleDistanceFactorThresholds },
		{ "GetBaseNonRenderedUpdateRate", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetBaseNonRenderedUpdateRate },
		{ "GetCurrentMaxDistanceFactor", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetCurrentMaxDistanceFactor },
		{ "GetCurrentUpdateRate", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetCurrentUpdateRate },
		{ "GetEnabledUpdateRateOptimisationsOnSkinnedMesh", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetEnabledUpdateRateOptimisationsOnSkinnedMesh },
		{ "GetInterpolateSkippedFrames", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetInterpolateSkippedFrames },
		{ "GetLODToFrameSkipArray", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipArray },
		{ "GetLODToFrameSkipIndex", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipIndex },
		{ "GetLODToFrameSkipMap", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipMap },
		{ "GetMaxEvalRateForInterpolation", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetMaxEvalRateForInterpolation },
		{ "GetUpdateRateOptimisationMode", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetUpdateRateOptimisationMode },
		{ "GetVisibleDistanceFactorThresholds", &UUpdateRateOptimisationBlueprintsBPLibrary::execGetVisibleDistanceFactorThresholds },
		{ "SetBaseNonRenderedUpdateRate", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetBaseNonRenderedUpdateRate },
		{ "SetEnableUpdateRateOptimisationsOnSkinnedMesh", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetEnableUpdateRateOptimisationsOnSkinnedMesh },
		{ "SetInterpolateSkippedFrames", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetInterpolateSkippedFrames },
		{ "SetLODToFrameSkipArray", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipArray },
		{ "SetLODToFrameSkipIndex", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipIndex },
		{ "SetLODToFrameSkipMap", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipMap },
		{ "SetMaxEvalRateForInterpolation", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetMaxEvalRateForInterpolation },
		{ "SetUpdateRateOptimisationMode", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetUpdateRateOptimisationMode },
		{ "SetVisibleDistanceFactorThresholds", &UUpdateRateOptimisationBlueprintsBPLibrary::execSetVisibleDistanceFactorThresholds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateRateOptimisationBlueprintsBPLibrary);
UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister()
{
	return UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "IncludePath", "UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip, "ClearLODToFrameSkip" }, // 3314179707
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds, "ClearVisibleDistanceFactorThresholds" }, // 3814544128
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate, "GetBaseNonRenderedUpdateRate" }, // 401440703
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor, "GetCurrentMaxDistanceFactor" }, // 3442918761
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate, "GetCurrentUpdateRate" }, // 3655116074
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh, "GetEnabledUpdateRateOptimisationsOnSkinnedMesh" }, // 2914859620
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames, "GetInterpolateSkippedFrames" }, // 911751856
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray, "GetLODToFrameSkipArray" }, // 79304364
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex, "GetLODToFrameSkipIndex" }, // 221117785
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap, "GetLODToFrameSkipMap" }, // 809076537
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation, "GetMaxEvalRateForInterpolation" }, // 2458438471
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode, "GetUpdateRateOptimisationMode" }, // 1357886623
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds, "GetVisibleDistanceFactorThresholds" }, // 2670612753
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate, "SetBaseNonRenderedUpdateRate" }, // 1335190120
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh, "SetEnableUpdateRateOptimisationsOnSkinnedMesh" }, // 3918441092
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames, "SetInterpolateSkippedFrames" }, // 2038700916
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray, "SetLODToFrameSkipArray" }, // 733685362
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex, "SetLODToFrameSkipIndex" }, // 3482636515
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap, "SetLODToFrameSkipMap" }, // 2484293910
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation, "SetMaxEvalRateForInterpolation" }, // 4033353020
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode, "SetUpdateRateOptimisationMode" }, // 135610848
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds, "SetVisibleDistanceFactorThresholds" }, // 3641461829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateRateOptimisationBlueprintsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::ClassParams = {
	&UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton, Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton;
}
template<> UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* StaticClass<UUpdateRateOptimisationBlueprintsBPLibrary>()
{
	return UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateRateOptimisationBlueprintsBPLibrary);
UUpdateRateOptimisationBlueprintsBPLibrary::~UUpdateRateOptimisationBlueprintsBPLibrary() {}
// End Class UUpdateRateOptimisationBlueprintsBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE54_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUpdateRateOptimisationMode_StaticEnum, TEXT("EUpdateRateOptimisationMode"), &Z_Registration_Info_UEnum_EUpdateRateOptimisationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1983680387U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass, TEXT("UUpdateRateOptimisationBlueprintsBPLibrary"), &Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateRateOptimisationBlueprintsBPLibrary), 2992070645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE54_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_2972258808(TEXT("/Script/UpdateRateOptimisationBlueprints"),
	Z_CompiledInDeferFile_FID_UE54_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE54_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE54_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE54_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
