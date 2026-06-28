// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpdateRateOptimisationBlueprintsBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeUpdateRateOptimisationBlueprintsBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints(ETypeConstructPhase);
UPDATERATEOPTIMISATIONBLUEPRINTS_API UEnum* Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode(ETypeConstructPhase);
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary(ETypeConstructPhase);
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationDataAsset(ETypeConstructPhase);
UPDATERATEOPTIMISATIONBLUEPRINTS_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct(ETypeConstructPhase);
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary(ETypeConstructPhase);
UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationDataAsset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EUpdateRateOptimisationMode ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Statics
template<> UPDATERATEOPTIMISATIONBLUEPRINTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EUpdateRateOptimisationMode>()
{
	return Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ENUM Switcher for the two modes of Update Rate Optimisations.*/" },
#endif
		{ "LODToFrameSkipMap.Name", "EUpdateRateOptimisationMode::LODToFrameSkipMap" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "None.Name", "EUpdateRateOptimisationMode::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ENUM Switcher for the two modes of Update Rate Optimisations." },
#endif
		{ "VisibleDistanceFactorThresholds.Name", "EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdateRateOptimisationMode::None", (int64)EUpdateRateOptimisationMode::None },
		{ "EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds", (int64)EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds },
		{ "EUpdateRateOptimisationMode::LODToFrameSkipMap", (int64)EUpdateRateOptimisationMode::LODToFrameSkipMap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
	nullptr,
	"EUpdateRateOptimisationMode",
	"EUpdateRateOptimisationMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EUpdateRateOptimisationMode;
UEnum* Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EUpdateRateOptimisationMode.OuterSingleton)
		{
			ZRIE_EUpdateRateOptimisationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, (UObject*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints(ETypeConstructPhase::Outer), TEXT("EUpdateRateOptimisationMode"));
		}
		return ZRIE_EUpdateRateOptimisationMode.OuterSingleton;
	}
	if (!ZRIE_EUpdateRateOptimisationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EUpdateRateOptimisationMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EUpdateRateOptimisationMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EUpdateRateOptimisationMode *************************************************

// ********** Begin ScriptStruct FUpdateRateOptimisationStruct *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FUpdateRateOptimisationStruct>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FUpdateRateOptimisationStruct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Struct that defines all the parameters for Update Rate Optimisations*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct that defines all the parameters for Update Rate Optimisations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRateOptimisationMode_MetaData[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Determines the update rate optimisation method.\n\x09Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines the update rate optimisation method.\n       Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleDistanceFactorThesholds_MetaData[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Set the visible threshold distances that determine the update rate changes when rendered.\n\x09""0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f.\n\x09Only used when UpdateRateOptimisationMode is set to VisibleDistanceFactor*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the visible threshold distances that determine the update rate changes when rendered.\n       0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f.\n       Only used when UpdateRateOptimisationMode is set to VisibleDistanceFactor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToFrameSkipArray_MetaData[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate.\n\x09Only used when UpdateRateOptimisationMode is set to LODToFrameSkipArray*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate.\n       Only used when UpdateRateOptimisationMode is set to LODToFrameSkipArray" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetInterpolateSkippedFrames_MetaData[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Whether or not to disable interpolation between frames that have been skipped.*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to disable interpolation between frames that have been skipped." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEvalRateForInterpolation_MetaData[] = {
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating.*/" },
#endif
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNonRenderedUpdateRate_MetaData[] = {
		{ "Category", "Update Rate Optimisations" },
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
	static void NewProp_bSetInterpolateSkippedFrames_SetBit(void* Obj)
	{
		((FUpdateRateOptimisationStruct*)Obj)->bSetInterpolateSkippedFrames = 1;
	}
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
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FUpdateRateOptimisationStruct Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_UpdateRateOptimisationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_UpdateRateOptimisationMode = { "UpdateRateOptimisationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, UpdateRateOptimisationMode), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRateOptimisationMode_MetaData), NewProp_UpdateRateOptimisationMode_MetaData) }; // ef93f67551352d70221b3f0957c93ebfe76157b7
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_VisibleDistanceFactorThesholds_Inner = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_VisibleDistanceFactorThesholds = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, VisibleDistanceFactorThesholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleDistanceFactorThesholds_MetaData), NewProp_VisibleDistanceFactorThesholds_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LODToFrameSkipArray_Inner = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LODToFrameSkipArray = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, LODToFrameSkipArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToFrameSkipArray_MetaData), NewProp_LODToFrameSkipArray_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetInterpolateSkippedFrames = { "bSetInterpolateSkippedFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateRateOptimisationStruct), &UHT_STATICS::NewProp_bSetInterpolateSkippedFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetInterpolateSkippedFrames_MetaData), NewProp_bSetInterpolateSkippedFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxEvalRateForInterpolation = { "MaxEvalRateForInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, MaxEvalRateForInterpolation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEvalRateForInterpolation_MetaData), NewProp_MaxEvalRateForInterpolation_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BaseNonRenderedUpdateRate = { "BaseNonRenderedUpdateRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateRateOptimisationStruct, BaseNonRenderedUpdateRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNonRenderedUpdateRate_MetaData), NewProp_BaseNonRenderedUpdateRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateRateOptimisationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateRateOptimisationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisibleDistanceFactorThesholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisibleDistanceFactorThesholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODToFrameSkipArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODToFrameSkipArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetInterpolateSkippedFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxEvalRateForInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseNonRenderedUpdateRate,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FUpdateRateOptimisationStruct Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
	nullptr,
	&NewStructOps,
	"UpdateRateOptimisationStruct",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FUpdateRateOptimisationStruct>(),
	alignof(FUpdateRateOptimisationStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct;
UScriptStruct* Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct, (UObject*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints(ETypeConstructPhase::Outer), TEXT("UpdateRateOptimisationStruct"));
		}
		return Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FUpdateRateOptimisationStruct ***************************************

// ********** Begin Class UUpdateRateOptimisationDataAsset *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUpdateRateOptimisationDataAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Update Rate Optimisations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Data Asset that can hold the URO Struct for easy portability.*/" },
#endif
		{ "IncludePath", "UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Asset that can hold the URO Struct for easy portability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRateOptimisationStruct_MetaData[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUpdateRateOptimisationDataAsset constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateRateOptimisationStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUpdateRateOptimisationDataAsset constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateRateOptimisationDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UUpdateRateOptimisationDataAsset Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UpdateRateOptimisationStruct = { "UpdateRateOptimisationStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UUpdateRateOptimisationDataAsset, UpdateRateOptimisationStruct), Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRateOptimisationStruct_MetaData), NewProp_UpdateRateOptimisationStruct_MetaData) }; // 4cded8b246964cf51b4b15c32963eef79a674a7e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateRateOptimisationStruct,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UUpdateRateOptimisationDataAsset Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPrimaryDataAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUpdateRateOptimisationDataAsset,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset;
UClass* Z_Construct_UClass_UUpdateRateOptimisationDataAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUpdateRateOptimisationDataAsset;
		if (!Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("UpdateRateOptimisationDataAsset"),
				Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
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
	if (!Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset.OuterSingleton;
}
#undef UHT_STATICS
UUpdateRateOptimisationDataAsset::UUpdateRateOptimisationDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUpdateRateOptimisationDataAsset);
UUpdateRateOptimisationDataAsset::~UUpdateRateOptimisationDataAsset() {}
// ********** End Class UUpdateRateOptimisationDataAsset *******************************************

// ********** Begin Class UUpdateRateOptimisationBlueprintsBPLibrary Function ClearLODToFrameSkip **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearLODToFrameSkip Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "ClearLODToFrameSkip", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ClearVisibleDistanceFactorThresholds Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "ClearVisibleDistanceFactorThresholds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBaseNonRenderedUpdateRate Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetBaseNonRenderedUpdateRate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentMaxDistanceFactor Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetCurrentMaxDistanceFactor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurrentUpdateRate Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetCurrentUpdateRate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh Property Definitions ***
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEnabledUpdateRateOptimisationsOnSkinnedMesh Property Definitions *****
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetEnabledUpdateRateOptimisationsOnSkinnedMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInterpolateSkippedFrames constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInterpolateSkippedFrames Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetInterpolateSkippedFrames Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetInterpolateSkippedFrames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLODToFrameSkipArray Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 LODIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLODToFrameSkipIndex Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TMap<int32,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLODToFrameSkipMap Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMaxEvalRateForInterpolation Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetMaxEvalRateForInterpolation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		EUpdateRateOptimisationMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms, ReturnValue), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(0, nullptr) }; // ef93f67551352d70221b3f0957c93ebfe76157b7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetUpdateRateOptimisationMode Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetUpdateRateOptimisationMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetVisibleDistanceFactorThresholds Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetVisibleDistanceFactorThresholds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 FramesToSkip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms, FramesToSkip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FramesToSkip,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetBaseNonRenderedUpdateRate Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetBaseNonRenderedUpdateRate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static void NewProp_bEnable_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms*)Obj)->bEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableUpdateRateOptimisationsOnSkinnedMesh constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableUpdateRateOptimisationsOnSkinnedMesh Property Definitions ****
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms), &UHT_STATICS::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEnableUpdateRateOptimisationsOnSkinnedMesh Property Definitions ******
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetEnableUpdateRateOptimisationsOnSkinnedMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static void NewProp_bEnable_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms*)Obj)->bEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInterpolateSkippedFrames constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInterpolateSkippedFrames Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms), &UHT_STATICS::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetInterpolateSkippedFrames Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetInterpolateSkippedFrames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TArray<int32> LODToFrameSkipArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LODToFrameSkipArray_Inner = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LODToFrameSkipArray = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms, LODToFrameSkipArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToFrameSkipArray_MetaData), NewProp_LODToFrameSkipArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODToFrameSkipArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODToFrameSkipArray,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLODToFrameSkipArray Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 LODIndex;
		int32 FramesToSkip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, FramesToSkip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FramesToSkip,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLODToFrameSkipIndex Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TMap<int32,int32> LODToFrameSkipMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LODToFrameSkipMap_ValueProp = { "LODToFrameSkipMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LODToFrameSkipMap_Key_KeyProp = { "LODToFrameSkipMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_LODToFrameSkipMap = { "LODToFrameSkipMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms, LODToFrameSkipMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToFrameSkipMap_MetaData), NewProp_LODToFrameSkipMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODToFrameSkipMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODToFrameSkipMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODToFrameSkipMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLODToFrameSkipMap Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		int32 UpdateRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms, UpdateRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateRate,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetMaxEvalRateForInterpolation Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetMaxEvalRateForInterpolation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool bEnable;
		UUpdateRateOptimisationDataAsset* UpdateRateOptimisationDataAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static void NewProp_bEnable_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms*)Obj)->bEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateRateOptimisationDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUpdateRateOptimisationByDataAsset constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUpdateRateOptimisationByDataAsset Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms), &UHT_STATICS::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UpdateRateOptimisationDataAsset = { "UpdateRateOptimisationDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms, UpdateRateOptimisationDataAsset), Z_Construct_UClass_UUpdateRateOptimisationDataAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateRateOptimisationDataAsset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetUpdateRateOptimisationByDataAsset Property Definitions ***************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetUpdateRateOptimisationByDataAsset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		bool bEnable;
		FUpdateRateOptimisationStruct UpdateRateOptimisationSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static void NewProp_bEnable_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms*)Obj)->bEnable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateRateOptimisationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUpdateRateOptimisationByStruct constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUpdateRateOptimisationByStruct Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms), &UHT_STATICS::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_UpdateRateOptimisationSettings = { "UpdateRateOptimisationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms, UpdateRateOptimisationSettings), Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct, METADATA_PARAMS(0, nullptr) }; // 4cded8b246964cf51b4b15c32963eef79a674a7e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateRateOptimisationSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetUpdateRateOptimisationByStruct Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetUpdateRateOptimisationByStruct", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationByStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		EUpdateRateOptimisationMode UpdateRateOptimisationMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_UpdateRateOptimisationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_UpdateRateOptimisationMode = { "UpdateRateOptimisationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms, UpdateRateOptimisationMode), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(0, nullptr) }; // ef93f67551352d70221b3f0957c93ebfe76157b7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateRateOptimisationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateRateOptimisationMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetUpdateRateOptimisationMode Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetUpdateRateOptimisationMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics
struct UHT_STATICS
{
	struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms
	{
		USkinnedMeshComponent* SkinnedMeshComponent;
		TArray<float> VisibleDistanceFactorThesholds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedMeshComponent_MetaData), NewProp_SkinnedMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_VisibleDistanceFactorThesholds_Inner = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_VisibleDistanceFactorThesholds = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms, VisibleDistanceFactorThesholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleDistanceFactorThesholds_MetaData), NewProp_VisibleDistanceFactorThesholds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkinnedMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisibleDistanceFactorThesholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisibleDistanceFactorThesholds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetVisibleDistanceFactorThresholds Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetVisibleDistanceFactorThresholds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
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
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
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
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip, "ClearLODToFrameSkip" }, // 426cb8a00b09c4b563d31c0c980024b9ae34a847
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds, "ClearVisibleDistanceFactorThresholds" }, // e755a8d4b7d0dfc4b173e1b5a9298c972fa60d9f
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate, "GetBaseNonRenderedUpdateRate" }, // a38b72304ed7257b698c7847d9e64c6b89c43c4c
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor, "GetCurrentMaxDistanceFactor" }, // e9a0f2d0ea3caf14d15be5f6450de888c4b229f1
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate, "GetCurrentUpdateRate" }, // 19690850983d795bc0f284dadff31a794d643aff
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh, "GetEnabledUpdateRateOptimisationsOnSkinnedMesh" }, // 76cee4e202f7ac269e19b50b4b46b0e9caa90b77
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames, "GetInterpolateSkippedFrames" }, // ba8e2a49f4dbc8efe8b0f803114db4659cda1e3f
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray, "GetLODToFrameSkipArray" }, // c43d04c0243081e002bba5445f95f43904c20ea0
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex, "GetLODToFrameSkipIndex" }, // 171d5b8facf0bb2c1136b79c9deee61d2ae7b856
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap, "GetLODToFrameSkipMap" }, // 8b448cc75bafeaf76d73f3dbfe58532f81f372df
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation, "GetMaxEvalRateForInterpolation" }, // 45bbc16a771e13ee26dc6316028bf5848dcab1fd
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode, "GetUpdateRateOptimisationMode" }, // 939cd39fc9274a9cf59cdf822450ff73330cc82a
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds, "GetVisibleDistanceFactorThresholds" }, // 839807111285d0170b4811abe62e9b8493be2fb0
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate, "SetBaseNonRenderedUpdateRate" }, // 50877d52a0636743b5cbcc6c8e0c86fa8e686016
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh, "SetEnableUpdateRateOptimisationsOnSkinnedMesh" }, // 0e96a1e6188ded675b0ddbf41a8277c4072f7d0b
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames, "SetInterpolateSkippedFrames" }, // 9b8811d100d1cac4876a7d914e64fc7bd009a805
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray, "SetLODToFrameSkipArray" }, // 5d55f397dcb0c884f21714e68ba7f173a7a6be94
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex, "SetLODToFrameSkipIndex" }, // ea9e64135c5ac7569308bc06fa82c28c71412059
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap, "SetLODToFrameSkipMap" }, // ce271f767c71b0536c0ed15fdee814f0b3627177
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation, "SetMaxEvalRateForInterpolation" }, // 2d0f0b11f06bc86c3791ea7b3184fb132bf6b4b2
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByDataAsset, "SetUpdateRateOptimisationByDataAsset" }, // f7c4af633238f1b99af60bc487086ab706d56424
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationByStruct, "SetUpdateRateOptimisationByStruct" }, // a58a4fc3152feae32c675bdcc126624770ad7a62
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode, "SetUpdateRateOptimisationMode" }, // b84ee174682a78f2a8d15f351f5fd8c7db70e273
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds, "SetVisibleDistanceFactorThresholds" }, // 4fe4d1a1135970e91408eac4df90a301034d8c85
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateRateOptimisationBlueprintsBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UUpdateRateOptimisationBlueprintsBPLibrary_StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary()
{
	UClass* Class = UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary;
UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUpdateRateOptimisationBlueprintsBPLibrary;
		if (!Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("UpdateRateOptimisationBlueprintsBPLibrary"),
				Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.InnerSingleton,
				UUpdateRateOptimisationBlueprintsBPLibrary_StaticRegisterNativesUUpdateRateOptimisationBlueprintsBPLibrary,
				DataSizeOf<TClass>(),
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
	if (!Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUpdateRateOptimisationBlueprintsBPLibrary);
UUpdateRateOptimisationBlueprintsBPLibrary::~UUpdateRateOptimisationBlueprintsBPLibrary() {}
// ********** End Class UUpdateRateOptimisationBlueprintsBPLibrary *********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_FiveEightEGL_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, TEXT("EUpdateRateOptimisationMode"), &ZRIE_EUpdateRateOptimisationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4019451509U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct, Z_Construct_UScriptStruct_FUpdateRateOptimisationStruct_Statics::NewStructOps, TEXT("UpdateRateOptimisationStruct"),&Z_Registration_Info_UScriptStruct_FUpdateRateOptimisationStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateRateOptimisationStruct), 1289672882U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateRateOptimisationDataAsset, TEXT("UUpdateRateOptimisationDataAsset"), &Z_Registration_Info_UClass_UUpdateRateOptimisationDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateRateOptimisationDataAsset), 4198273267U) },
		{ Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, TEXT("UUpdateRateOptimisationBlueprintsBPLibrary"), &Z_Registration_Info_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateRateOptimisationBlueprintsBPLibrary), 618810616U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FiveEightEGL_Plugins_UpdateRateOptimisationBlueprints_Source_UpdateRateOptimisationBlueprints_Public_UpdateRateOptimisationBlueprintsBPLibrary_h__Script_UpdateRateOptimisationBlueprints_7a1d91f63a3ac008b8976e2f3ade45737f4b8b67{
	TEXT("/Script/UpdateRateOptimisationBlueprints"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
