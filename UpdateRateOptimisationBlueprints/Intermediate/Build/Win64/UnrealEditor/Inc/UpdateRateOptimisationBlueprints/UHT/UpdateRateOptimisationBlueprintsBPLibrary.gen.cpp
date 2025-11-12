// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpdateRateOptimisationBlueprintsBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUpdateRateOptimisationBlueprintsBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationDataAsset();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationDataAsset_NoRegister();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UEnum* Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode();
UPDATERATEOPTIMISATIONBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EUpdateRateOptimisationMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateRateOptimisationMode;
static UEnum* EUpdateRateOptimisationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, (UObject*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints(), TEXT("EUpdateRateOptimisationMode"));
	}
	return Z_Registration_Info_UEnum_EUpdateRateOptimisationMode.OuterSingleton;
}
template<> UPDATERATEOPTIMISATIONBLUEPRINTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EUpdateRateOptimisationMode>()
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
}; // struct Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics 
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
// ********** End Enum EUpdateRateOptimisationMode *************************************************

// ********** Begin ScriptStruct FUpdateRateOptimisationStruct *************************************
struct Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FUpdateRateOptimisationStruct); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUpdateRateOptimisationStruct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Update Rate Optimisation Blueprints" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRateOptimisationMode_MetaData[] = {
		{ "Category", "UpdateRateOptimisationStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Determines the update rate optimisation method.\n\x09Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the update rate optimisation method.\n       Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleDistanceFactorThesholds_MetaData[] = {
		{ "Category", "UpdateRateOptimisationStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Set the visible threshold distances that determine the update rate changes when rendered.\n\x09""0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f.\n\x09Only used when UpdateRateOptimisationMode is set to VisibleDistanceFactor*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the visible threshold distances that determine the update rate changes when rendered.\n       0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f.\n       Only used when UpdateRateOptimisationMode is set to VisibleDistanceFactor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToFrameSkipArray_MetaData[] = {
		{ "Category", "UpdateRateOptimisationStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate.\n\x09Only used when UpdateRateOptimisationMode is set to LODToFrameSkipArray*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate.\n       Only used when UpdateRateOptimisationMode is set to LODToFrameSkipArray" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetInterpolateSkippedFrames_MetaData[] = {
		{ "Category", "UpdateRateOptimisationStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Whether or not to disable interpolation between frames that have been skipped.*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to disable interpolation between frames that have been skipped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEvalRateForInterpolation_MetaData[] = {
		{ "Category", "UpdateRateOptimisationStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating.*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNonRenderedUpdateRate_MetaData[] = {
		{ "Category", "UpdateRateOptimisationStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FUpdateRateOptimisationStruct constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateRateOptimisationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateRateOptimisationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleDistanceFactorThesholds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleDistanceFactorThesholds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODToFrameSkipArray;
	static void NewProp_bSetInterpolateSkippedFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetInterpolateSkippedFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEvalRateForInterpolation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseNonRenderedUpdateRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FUpdateRateOptimisationStruct constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateRateOptimisationStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct;
class UScriptStruct* FUpdateRateOptimisationStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct, (UObject*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints(), TEXT("UpdateRateOptimisationStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.OuterSingleton;
	}

// ********** Begin ScriptStruct FUpdateRateOptimisationStruct Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_UpdateRateOptimisationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_UpdateRateOptimisationMode = { "UpdateRateOptimisationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, UpdateRateOptimisationMode), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRateOptimisationMode_MetaData), NewProp_UpdateRateOptimisationMode_MetaData) }; // 4033337951
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_VisibleDistanceFactorThesholds_Inner = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_VisibleDistanceFactorThesholds = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, VisibleDistanceFactorThesholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleDistanceFactorThesholds_MetaData), NewProp_VisibleDistanceFactorThesholds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_LODToFrameSkipArray_Inner = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_LODToFrameSkipArray = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, LODToFrameSkipArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToFrameSkipArray_MetaData), NewProp_LODToFrameSkipArray_MetaData) };
void Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_bSetInterpolateSkippedFrames_SetBit(void* Obj)
{
	((FUpdateRateOptimisationStruct*)Obj)->bSetInterpolateSkippedFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_bSetInterpolateSkippedFrames = { "bSetInterpolateSkippedFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateRateOptimisationStruct), &Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_bSetInterpolateSkippedFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetInterpolateSkippedFrames_MetaData), NewProp_bSetInterpolateSkippedFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_MaxEvalRateForInterpolation = { "MaxEvalRateForInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, MaxEvalRateForInterpolation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEvalRateForInterpolation_MetaData), NewProp_MaxEvalRateForInterpolation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_BaseNonRenderedUpdateRate = { "BaseNonRenderedUpdateRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, BaseNonRenderedUpdateRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNonRenderedUpdateRate_MetaData), NewProp_BaseNonRenderedUpdateRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_UpdateRateOptimisationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_UpdateRateOptimisationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_VisibleDistanceFactorThesholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_VisibleDistanceFactorThesholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_LODToFrameSkipArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_LODToFrameSkipArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_bSetInterpolateSkippedFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_MaxEvalRateForInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewProp_BaseNonRenderedUpdateRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FUpdateRateOptimisationStruct Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
	nullptr,
	&NewStructOps,
	"UpdateRateOptimisationStruct",
	Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::PropPointers),
	sizeof(FUpdateRateOptimisationStruct),
	alignof(FUpdateRateOptimisationStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.InnerSingleton, Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.InnerSingleton);
}
// ********** End ScriptStruct FUpdateRateOptimisationStruct ***************************************

// ********** Begin Class UUpdateRateOptimisationDataAsset *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset;
UClass* UUpdateRateOptimisationDataAsset::GetPrivateStaticClass()
{
	using TClass = UUpdateRateOptimisationDataAsset;
	if (!Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UpdateRateOptimisationDataAsset"),
			Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.InnerSingleton,
			StaticRegisterNativesUUpdateRateOptimisationDataAsset,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UUpdateRateOptimisationDataAsset_NoRegister()
{
	return UUpdateRateOptimisationDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// This is the data asset that stores the information to build any actor/prop/etc.\n" },
#endif
		{ "IncludePath", "UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the data asset that stores the information to build any actor/prop/etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRateOptimisationStruct_MetaData[] = {
		{ "Category", "UpdateRateOptimisationDataAsset" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUpdateRateOptimisationDataAsset constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateRateOptimisationStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUpdateRateOptimisationDataAsset constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateRateOptimisationDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics

// ********** Begin Class UUpdateRateOptimisationDataAsset Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::NewProp_UpdateRateOptimisationStruct = { "UpdateRateOptimisationStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateRateOptimisationDataAsset, UpdateRateOptimisationStruct), Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRateOptimisationStruct_MetaData), NewProp_UpdateRateOptimisationStruct_MetaData) }; // 4012390040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::NewProp_UpdateRateOptimisationStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UUpdateRateOptimisationDataAsset Property Definitions **********************
UObject* (*const Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::ClassParams = {
	&UUpdateRateOptimisationDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::Class_MetaDataParams)
};
void UUpdateRateOptimisationDataAsset::StaticRegisterNativesUUpdateRateOptimisationDataAsset()
{
}
UClass* Z_Construct_UClass_UUpdateRateOptimisationDataAsset()
{
	if (!Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.OuterSingleton, Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.OuterSingleton;
}
UUpdateRateOptimisationDataAsset::UUpdateRateOptimisationDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUpdateRateOptimisationDataAsset);
UUpdateRateOptimisationDataAsset::~UUpdateRateOptimisationDataAsset() {}
// ********** End Class UUpdateRateOptimisationDataAsset *******************************************

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearLODToFrameSkip **
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

// ********** Begin Function ClearLODToFrameSkip constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearLODToFrameSkip constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearLODToFrameSkip Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers) < 2048);
// ********** End Function ClearLODToFrameSkip Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "ClearLODToFrameSkip", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearLODToFrameSkip ****

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearVisibleDistanceFactorThresholds 
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

// ********** Begin Function ClearVisibleDistanceFactorThresholds constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ClearVisibleDistanceFactorThresholds constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ClearVisibleDistanceFactorThresholds Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers) < 2048);
// ********** End Function ClearVisibleDistanceFactorThresholds Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "ClearVisibleDistanceFactorThresholds", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearVisibleDistanceFactorThresholds 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetBaseNonRenderedUpdateRate 
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

// ********** Begin Function GetBaseNonRenderedUpdateRate constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBaseNonRenderedUpdateRate constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBaseNonRenderedUpdateRate Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers) < 2048);
// ********** End Function GetBaseNonRenderedUpdateRate Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetBaseNonRenderedUpdateRate", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetBaseNonRenderedUpdateRate 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetCurrentMaxDistanceFactor 
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

// ********** Begin Function GetCurrentMaxDistanceFactor constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentMaxDistanceFactor constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentMaxDistanceFactor Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentMaxDistanceFactor Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetCurrentMaxDistanceFactor", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetCurrentMaxDistanceFactor 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetCurrentUpdateRate *
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

// ********** Begin Function GetCurrentUpdateRate constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentUpdateRate constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentUpdateRate Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentUpdateRate Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetCurrentUpdateRate", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetCurrentUpdateRate ***

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh 
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

// ********** Begin Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh Property Definitions ***
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
// ********** End Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh Property Definitions *****
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetEnabledUpdateRateOptimisationsOnSkinnedMesh", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetInterpolateSkippedFrames 
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

// ********** Begin Function GetInterpolateSkippedFrames constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInterpolateSkippedFrames constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInterpolateSkippedFrames Property Definitions **********************
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
// ********** End Function GetInterpolateSkippedFrames Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetInterpolateSkippedFrames", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetInterpolateSkippedFrames 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipArray 
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

// ********** Begin Function GetLODToFrameSkipArray constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLODToFrameSkipArray constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLODToFrameSkipArray Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers) < 2048);
// ********** End Function GetLODToFrameSkipArray Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipArray", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipArray *

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipIndex 
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

// ********** Begin Function GetLODToFrameSkipIndex constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLODToFrameSkipIndex constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLODToFrameSkipIndex Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers) < 2048);
// ********** End Function GetLODToFrameSkipIndex Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipIndex", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipIndex *

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipMap *
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

// ********** Begin Function GetLODToFrameSkipMap constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLODToFrameSkipMap constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLODToFrameSkipMap Property Definitions *****************************
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
// ********** End Function GetLODToFrameSkipMap Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipMap", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetLODToFrameSkipMap ***

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetMaxEvalRateForInterpolation 
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

// ********** Begin Function GetMaxEvalRateForInterpolation constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaxEvalRateForInterpolation constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaxEvalRateForInterpolation Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers) < 2048);
// ********** End Function GetMaxEvalRateForInterpolation Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetMaxEvalRateForInterpolation", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetMaxEvalRateForInterpolation 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetUpdateRateOptimisationMode 
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

// ********** Begin Function GetUpdateRateOptimisationMode constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUpdateRateOptimisationMode constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUpdateRateOptimisationMode Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms, ReturnValue), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(0, nullptr) }; // 4033337951
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers) < 2048);
// ********** End Function GetUpdateRateOptimisationMode Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetUpdateRateOptimisationMode", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetUpdateRateOptimisationMode 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetVisibleDistanceFactorThresholds 
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

// ********** Begin Function GetVisibleDistanceFactorThresholds constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVisibleDistanceFactorThresholds constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVisibleDistanceFactorThresholds Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers) < 2048);
// ********** End Function GetVisibleDistanceFactorThresholds Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetVisibleDistanceFactorThresholds", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function GetVisibleDistanceFactorThresholds 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetBaseNonRenderedUpdateRate 
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

// ********** Begin Function SetBaseNonRenderedUpdateRate constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToSkip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBaseNonRenderedUpdateRate constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBaseNonRenderedUpdateRate Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms, FramesToSkip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_FramesToSkip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers) < 2048);
// ********** End Function SetBaseNonRenderedUpdateRate Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetBaseNonRenderedUpdateRate", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetBaseNonRenderedUpdateRate 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetEnableUpdateRateOptimisationsOnSkinnedMesh 
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

// ********** Begin Function SetEnableUpdateRateOptimisationsOnSkinnedMesh constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableUpdateRateOptimisationsOnSkinnedMesh constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableUpdateRateOptimisationsOnSkinnedMesh Property Definitions ****
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
// ********** End Function SetEnableUpdateRateOptimisationsOnSkinnedMesh Property Definitions ******
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetEnableUpdateRateOptimisationsOnSkinnedMesh", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetEnableUpdateRateOptimisationsOnSkinnedMesh 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetInterpolateSkippedFrames 
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

// ********** Begin Function SetInterpolateSkippedFrames constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInterpolateSkippedFrames constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInterpolateSkippedFrames Property Definitions **********************
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
// ********** End Function SetInterpolateSkippedFrames Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetInterpolateSkippedFrames", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetInterpolateSkippedFrames 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipArray 
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

// ********** Begin Function SetLODToFrameSkipArray constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODToFrameSkipArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLODToFrameSkipArray constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLODToFrameSkipArray Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_Inner = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms, LODToFrameSkipArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToFrameSkipArray_MetaData), NewProp_LODToFrameSkipArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers) < 2048);
// ********** End Function SetLODToFrameSkipArray Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipArray", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipArray *

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipIndex 
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

// ********** Begin Function SetLODToFrameSkipIndex constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToSkip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLODToFrameSkipIndex constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLODToFrameSkipIndex Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, FramesToSkip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_FramesToSkip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers) < 2048);
// ********** End Function SetLODToFrameSkipIndex Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipIndex", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipIndex *

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipMap *
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

// ********** Begin Function SetLODToFrameSkipMap constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LODToFrameSkipMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLODToFrameSkipMap constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLODToFrameSkipMap Property Definitions *****************************
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
// ********** End Function SetLODToFrameSkipMap Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipMap", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetLODToFrameSkipMap ***

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetMaxEvalRateForInterpolation 
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

// ********** Begin Function SetMaxEvalRateForInterpolation constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaxEvalRateForInterpolation constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaxEvalRateForInterpolation Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms, UpdateRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_UpdateRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers) < 2048);
// ********** End Function SetMaxEvalRateForInterpolation Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetMaxEvalRateForInterpolation", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetMaxEvalRateForInterpolation 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetUpdateRateOptimisationByDataAsset 
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool bEnable;
		UUpdateRateOptimisationDataAsset* UpdateRateOptimisationDataAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Determines the update rate optimisation method via a struct that contains all the relevant information, rather than applying with individual nodes.\n\x09Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the update rate optimisation method via a struct that contains all the relevant information, rather than applying with individual nodes.\n       Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUpdateRateOptimisationByDataAsset constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateRateOptimisationDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUpdateRateOptimisationByDataAsset constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUpdateRateOptimisationByDataAsset Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::NewProp_UpdateRateOptimisationDataAsset = { "UpdateRateOptimisationDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms, UpdateRateOptimisationDataAsset), Z_Construct_UClass_UUpdateRateOptimisationDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::NewProp_UpdateRateOptimisationDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::PropPointers) < 2048);
// ********** End Function SetUpdateRateOptimisationByDataAsset Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetUpdateRateOptimisationByDataAsset", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetUpdateRateOptimisationByDataAsset)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_UBOOL(Z_Param_bEnable);
	P_GET_OBJECT(UUpdateRateOptimisationDataAsset,Z_Param_UpdateRateOptimisationDataAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetUpdateRateOptimisationByDataAsset(Z_Param_SkinnedMeshComponent,Z_Param_bEnable,Z_Param_UpdateRateOptimisationDataAsset);
	P_NATIVE_END;
}
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetUpdateRateOptimisationByDataAsset 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetUpdateRateOptimisationByStruct 
struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool bEnable;
		FUpdateRateOptimisationStruct UpdateRateOptimisationSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Determines the update rate optimisation method via a struct that contains all the relevant information, rather than applying with individual nodes.\n\x09Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/" },
#endif
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the update rate optimisation method via a struct that contains all the relevant information, rather than applying with individual nodes.\n       Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUpdateRateOptimisationByStruct constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateRateOptimisationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUpdateRateOptimisationByStruct constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUpdateRateOptimisationByStruct Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::NewProp_UpdateRateOptimisationSettings = { "UpdateRateOptimisationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms, UpdateRateOptimisationSettings), Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct, METADATA_PARAMS(0, nullptr) }; // 4012390040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::NewProp_UpdateRateOptimisationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::PropPointers) < 2048);
// ********** End Function SetUpdateRateOptimisationByStruct Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetUpdateRateOptimisationByStruct", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execSetUpdateRateOptimisationByStruct)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
	P_GET_UBOOL(Z_Param_bEnable);
	P_GET_STRUCT(FUpdateRateOptimisationStruct,Z_Param_UpdateRateOptimisationSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUpdateRateOptimisationBlueprintsBPLibrary::SetUpdateRateOptimisationByStruct(Z_Param_SkinnedMeshComponent,Z_Param_bEnable,Z_Param_UpdateRateOptimisationSettings);
	P_NATIVE_END;
}
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetUpdateRateOptimisationByStruct 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetUpdateRateOptimisationMode 
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

// ********** Begin Function SetUpdateRateOptimisationMode constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateRateOptimisationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateRateOptimisationMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUpdateRateOptimisationMode constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUpdateRateOptimisationMode Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode = { "UpdateRateOptimisationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms, UpdateRateOptimisationMode), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(0, nullptr) }; // 4033337951
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers) < 2048);
// ********** End Function SetUpdateRateOptimisationMode Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetUpdateRateOptimisationMode", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetUpdateRateOptimisationMode 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetVisibleDistanceFactorThresholds 
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

// ********** Begin Function SetVisibleDistanceFactorThresholds constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleDistanceFactorThesholds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleDistanceFactorThesholds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVisibleDistanceFactorThresholds constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVisibleDistanceFactorThresholds Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_Inner = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms, VisibleDistanceFactorThesholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleDistanceFactorThesholds_MetaData), NewProp_VisibleDistanceFactorThesholds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers) < 2048);
// ********** End Function SetVisibleDistanceFactorThresholds Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetVisibleDistanceFactorThresholds", 	Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary Function SetVisibleDistanceFactorThresholds 

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary;
UClass* UUpdateRateOptimisationBlueprintsBPLibrary::GetPrivateStaticClass()
{
	using TClass = UUpdateRateOptimisationBlueprintsBPLibrary;
	if (!Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UpdateRateOptimisationBlueprintsBPLibrary"),
			Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.InnerSingleton,
			StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister()
{
	return UUpdateRateOptimisationBlueprintsBPLibrary::GetPrivateStaticClass();
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

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary constinit property declarations 
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary constinit property declarations *
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearLODToFrameSkip"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execClearLODToFrameSkip },
		{ .NameUTF8 = UTF8TEXT("ClearVisibleDistanceFactorThresholds"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execClearVisibleDistanceFactorThresholds },
		{ .NameUTF8 = UTF8TEXT("GetBaseNonRenderedUpdateRate"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetBaseNonRenderedUpdateRate },
		{ .NameUTF8 = UTF8TEXT("GetCurrentMaxDistanceFactor"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetCurrentMaxDistanceFactor },
		{ .NameUTF8 = UTF8TEXT("GetCurrentUpdateRate"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetCurrentUpdateRate },
		{ .NameUTF8 = UTF8TEXT("GetEnabledUpdateRateOptimisationsOnSkinnedMesh"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetEnabledUpdateRateOptimisationsOnSkinnedMesh },
		{ .NameUTF8 = UTF8TEXT("GetInterpolateSkippedFrames"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetInterpolateSkippedFrames },
		{ .NameUTF8 = UTF8TEXT("GetLODToFrameSkipArray"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipArray },
		{ .NameUTF8 = UTF8TEXT("GetLODToFrameSkipIndex"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipIndex },
		{ .NameUTF8 = UTF8TEXT("GetLODToFrameSkipMap"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipMap },
		{ .NameUTF8 = UTF8TEXT("GetMaxEvalRateForInterpolation"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetMaxEvalRateForInterpolation },
		{ .NameUTF8 = UTF8TEXT("GetUpdateRateOptimisationMode"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetUpdateRateOptimisationMode },
		{ .NameUTF8 = UTF8TEXT("GetVisibleDistanceFactorThresholds"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execGetVisibleDistanceFactorThresholds },
		{ .NameUTF8 = UTF8TEXT("SetBaseNonRenderedUpdateRate"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetBaseNonRenderedUpdateRate },
		{ .NameUTF8 = UTF8TEXT("SetEnableUpdateRateOptimisationsOnSkinnedMesh"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetEnableUpdateRateOptimisationsOnSkinnedMesh },
		{ .NameUTF8 = UTF8TEXT("SetInterpolateSkippedFrames"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetInterpolateSkippedFrames },
		{ .NameUTF8 = UTF8TEXT("SetLODToFrameSkipArray"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipArray },
		{ .NameUTF8 = UTF8TEXT("SetLODToFrameSkipIndex"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipIndex },
		{ .NameUTF8 = UTF8TEXT("SetLODToFrameSkipMap"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetLODToFrameSkipMap },
		{ .NameUTF8 = UTF8TEXT("SetMaxEvalRateForInterpolation"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetMaxEvalRateForInterpolation },
		{ .NameUTF8 = UTF8TEXT("SetUpdateRateOptimisationByDataAsset"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetUpdateRateOptimisationByDataAsset },
		{ .NameUTF8 = UTF8TEXT("SetUpdateRateOptimisationByStruct"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetUpdateRateOptimisationByStruct },
		{ .NameUTF8 = UTF8TEXT("SetUpdateRateOptimisationMode"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetUpdateRateOptimisationMode },
		{ .NameUTF8 = UTF8TEXT("SetVisibleDistanceFactorThresholds"), .Pointer = &UUpdateRateOptimisationBlueprintsBPLibrary::execSetVisibleDistanceFactorThresholds },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip, "ClearLODToFrameSkip" }, // 1740442192
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds, "ClearVisibleDistanceFactorThresholds" }, // 1636648484
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate, "GetBaseNonRenderedUpdateRate" }, // 2870882067
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor, "GetCurrentMaxDistanceFactor" }, // 2025144672
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate, "GetCurrentUpdateRate" }, // 193228170
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh, "GetEnabledUpdateRateOptimisationsOnSkinnedMesh" }, // 2093613885
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames, "GetInterpolateSkippedFrames" }, // 2976648994
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray, "GetLODToFrameSkipArray" }, // 2088155265
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex, "GetLODToFrameSkipIndex" }, // 742161636
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap, "GetLODToFrameSkipMap" }, // 752559878
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation, "GetMaxEvalRateForInterpolation" }, // 388681504
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode, "GetUpdateRateOptimisationMode" }, // 3372173377
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds, "GetVisibleDistanceFactorThresholds" }, // 2114669462
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate, "SetBaseNonRenderedUpdateRate" }, // 3064981754
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh, "SetEnableUpdateRateOptimisationsOnSkinnedMesh" }, // 1515470756
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames, "SetInterpolateSkippedFrames" }, // 2498629738
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray, "SetLODToFrameSkipArray" }, // 3655160269
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex, "SetLODToFrameSkipIndex" }, // 3760438887
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap, "SetLODToFrameSkipMap" }, // 2776943478
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation, "SetMaxEvalRateForInterpolation" }, // 491934340
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset, "SetUpdateRateOptimisationByDataAsset" }, // 3283981085
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct, "SetUpdateRateOptimisationByStruct" }, // 2356043281
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode, "SetUpdateRateOptimisationMode" }, // 23503908
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds, "SetVisibleDistanceFactorThresholds" }, // 1242847556
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateRateOptimisationBlueprintsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics
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
void UUpdateRateOptimisationBlueprintsBPLibrary::StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary()
{
	UClass* Class = UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary()
{
	if (!Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton, Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUpdateRateOptimisationBlueprintsBPLibrary);
UUpdateRateOptimisationBlueprintsBPLibrary::~UUpdateRateOptimisationBlueprintsBPLibrary() {}
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUpdateRateOptimisationMode_StaticEnum, TEXT("EUpdateRateOptimisationMode"), &Z_Registration_Info_UEnum_EUpdateRateOptimisationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4033337951U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUpdateRateOptimisationStruct::StaticStruct, Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewStructOps, TEXT("UpdateRateOptimisationStruct"),&Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateRateOptimisationStruct), 4012390040U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateRateOptimisationDataAsset, UUpdateRateOptimisationDataAsset::StaticClass, TEXT("UUpdateRateOptimisationDataAsset"), &Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateRateOptimisationDataAsset), 2450660068U) },
		{ Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass, TEXT("UUpdateRateOptimisationBlueprintsBPLibrary"), &Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateRateOptimisationBlueprintsBPLibrary), 2936277000U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_2216582565{
	TEXT("/Script/UpdateRateOptimisationBlueprints"),
	Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Matt_Documents_Unreal_Projects_fiveseven_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
