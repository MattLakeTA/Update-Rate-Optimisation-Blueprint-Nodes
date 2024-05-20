// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UpdateRateOptimisationBlueprints/Public/UpdateRateOptimisationBlueprintsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateRateOptimisationBlueprintsBPLibrary() {}
// Cross Module References
	UPDATERATEOPTIMISATIONBLUEPRINTS_API UEnum* Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode();
	UPackage* Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints();
	UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister();
	UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EUpdateRateOptimisationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints(), TEXT("EUpdateRateOptimisationMode"));
		}
		return Singleton;
	}
	template<> UPDATERATEOPTIMISATIONBLUEPRINTS_API UEnum* StaticEnum<EUpdateRateOptimisationMode>()
	{
		return EUpdateRateOptimisationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdateRateOptimisationMode(EUpdateRateOptimisationMode_StaticEnum, TEXT("/Script/UpdateRateOptimisationBlueprints"), TEXT("EUpdateRateOptimisationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Hash() { return 3159992313U; }
	UEnum* Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdateRateOptimisationMode"), 0, Get_Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpdateRateOptimisationMode::None", (int64)EUpdateRateOptimisationMode::None },
				{ "EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds", (int64)EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds },
				{ "EUpdateRateOptimisationMode::LODToFrameSkipMap", (int64)EUpdateRateOptimisationMode::LODToFrameSkipMap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LODToFrameSkipMap.Name", "EUpdateRateOptimisationMode::LODToFrameSkipMap" },
				{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
				{ "None.Name", "EUpdateRateOptimisationMode::None" },
				{ "VisibleDistanceFactorThresholds.Name", "EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
				nullptr,
				"EUpdateRateOptimisationMode",
				"EUpdateRateOptimisationMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetCurrentUpdateRate)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetCurrentUpdateRate(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetCurrentMaxDistanceFactor)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetCurrentMaxDistanceFactor(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetInterpolateSkippedFrames)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetInterpolateSkippedFrames(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetBaseNonRenderedUpdateRate)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetBaseNonRenderedUpdateRate(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetMaxEvalRateForInterpolation)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetMaxEvalRateForInterpolation(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipMap)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,int32>*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetLODToFrameSkipMap(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetLODToFrameSkipArray)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetLODToFrameSkipArray(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execClearLODToFrameSkip)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUpdateRateOptimisationBlueprintsBPLibrary::ClearLODToFrameSkip(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execClearVisibleDistanceFactorThresholds)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUpdateRateOptimisationBlueprintsBPLibrary::ClearVisibleDistanceFactorThresholds(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetVisibleDistanceFactorThresholds)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetVisibleDistanceFactorThresholds(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetEnabledUpdateRateOptimisationsOnSkinnedMesh)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetEnabledUpdateRateOptimisationsOnSkinnedMesh(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UUpdateRateOptimisationBlueprintsBPLibrary::execGetUpdateRateOptimisationMode)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUpdateRateOptimisationMode*)Z_Param__Result=UUpdateRateOptimisationBlueprintsBPLibrary::GetUpdateRateOptimisationMode(Z_Param_SkinnedMeshComponent);
		P_NATIVE_END;
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
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::NewProp_SkinnedMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Clears the LOD To Frame Skip settings for URO.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Clears the LOD To Frame Skip settings for URO." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "ClearLODToFrameSkip", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventClearLODToFrameSkip_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Clears the threshold values currently set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "ClearVisibleDistanceFactorThresholds", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventClearVisibleDistanceFactorThresholds_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Get the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Get the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetBaseNonRenderedUpdateRate", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetBaseNonRenderedUpdateRate_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Returns Current Max Distance Factor; useful for debugging and setting up URO or LODs.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Returns Current Max Distance Factor; useful for debugging and setting up URO or LODs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetCurrentMaxDistanceFactor", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentMaxDistanceFactor_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Returns the current update rate. Useful for debugging URO.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Returns the current update rate. Useful for debugging URO." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetCurrentUpdateRate", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetCurrentUpdateRate_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Gets the enabled state the use of URO on a particular skinned mesh component.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Gets the enabled state the use of URO on a particular skinned mesh component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetEnabledUpdateRateOptimisationsOnSkinnedMesh", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetEnabledUpdateRateOptimisationsOnSkinnedMesh_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Get the current state of URO's interpolate skipped frames.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Get the current state of URO's interpolate skipped frames." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetInterpolateSkippedFrames", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetInterpolateSkippedFrames_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Get the LOD To Frame Skip Array for URO.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Get the LOD To Frame Skip Array for URO." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipArray", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipArray_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			int32 LODIndex;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Gets the LOD To Frame Skip Index for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Gets the LOD To Frame Skip Index for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipIndex", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipIndex_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			TMap<int32,int32> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Get the LOD To Frame Skip Map for URO.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Get the LOD To Frame Skip Map for URO." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetLODToFrameSkipMap", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetLODToFrameSkipMap_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetMaxEvalRateForInterpolation", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetMaxEvalRateForInterpolation_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			EUpdateRateOptimisationMode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms, ReturnValue), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Acquires the update rate optimisation method.\n\x09Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Acquires the update rate optimisation method.\n       Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetUpdateRateOptimisationMode", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetUpdateRateOptimisationMode_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Get the visible threshold distances that determine the update rate changes when rendered\n\x09""0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Get the visible threshold distances that determine the update rate changes when rendered\n       0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "GetVisibleDistanceFactorThresholds", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventGetVisibleDistanceFactorThresholds_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			int32 FramesToSkip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesToSkip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms, FramesToSkip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::NewProp_FramesToSkip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Sets the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Sets the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetBaseNonRenderedUpdateRate", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetBaseNonRenderedUpdateRate_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			bool bEnable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Enables the use of URO on a particular skinned mesh component.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Enables the use of URO on a particular skinned mesh component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetEnableUpdateRateOptimisationsOnSkinnedMesh", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetEnableUpdateRateOptimisationsOnSkinnedMesh_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			bool bEnable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	void Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms), &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Whether or not to disable interpolation between frames that have been skipped.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Whether or not to disable interpolation between frames that have been skipped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetInterpolateSkippedFrames", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetInterpolateSkippedFrames_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			TArray<int32> LODToFrameSkipArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODToFrameSkipArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODToFrameSkipArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_Inner = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray = { "LODToFrameSkipArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms, LODToFrameSkipArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::NewProp_LODToFrameSkipArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipArray", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipArray_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			int32 LODIndex;
			int32 FramesToSkip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesToSkip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms, FramesToSkip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::NewProp_FramesToSkip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Sets the LOD To Frame Skip Map for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Sets the LOD To Frame Skip Map for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipIndex", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipIndex_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			TMap<int32,int32> LODToFrameSkipMap;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODToFrameSkipMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODToFrameSkipMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LODToFrameSkipMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_ValueProp = { "LODToFrameSkipMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_Key_KeyProp = { "LODToFrameSkipMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap = { "LODToFrameSkipMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms, LODToFrameSkipMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::NewProp_LODToFrameSkipMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Sets the LOD To Frame Skip map for URO - The key is the LOD index, and the value is the skip rate.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Sets the LOD To Frame Skip map for URO - The key is the LOD index, and the value is the skip rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetLODToFrameSkipMap", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetLODToFrameSkipMap_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			int32 UpdateRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UpdateRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms, UpdateRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::NewProp_UpdateRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetMaxEvalRateForInterpolation", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetMaxEvalRateForInterpolation_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			EUpdateRateOptimisationMode UpdateRateOptimisationMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateRateOptimisationMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateRateOptimisationMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode = { "UpdateRateOptimisationMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms, UpdateRateOptimisationMode), Z_Construct_UEnum_UpdateRateOptimisationBlueprints_EUpdateRateOptimisationMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::NewProp_UpdateRateOptimisationMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Determines the update rate optimisation method. \n\x09Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Determines the update rate optimisation method.\n       Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetUpdateRateOptimisationMode", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetUpdateRateOptimisationMode_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics
	{
		struct UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			TArray<float> VisibleDistanceFactorThesholds;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibleDistanceFactorThesholds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleDistanceFactorThesholds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibleDistanceFactorThesholds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_Inner = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds = { "VisibleDistanceFactorThesholds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms, VisibleDistanceFactorThesholds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_SkinnedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::NewProp_VisibleDistanceFactorThesholds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "Comment", "/*Set the visible threshold distances that determine the update rate changes when rendered.\n\x09""0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f*/" },
		{ "Keywords", "URO Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ToolTip", "Set the visible threshold distances that determine the update rate changes when rendered.\n       0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, nullptr, "SetVisibleDistanceFactorThresholds", nullptr, nullptr, sizeof(UpdateRateOptimisationBlueprintsBPLibrary_eventSetVisibleDistanceFactorThresholds_Parms), Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_NoRegister()
	{
		return UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UpdateRateOptimisationBlueprints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearLODToFrameSkip, "ClearLODToFrameSkip" }, // 3295487466
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_ClearVisibleDistanceFactorThresholds, "ClearVisibleDistanceFactorThresholds" }, // 3098755962
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetBaseNonRenderedUpdateRate, "GetBaseNonRenderedUpdateRate" }, // 2544763250
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentMaxDistanceFactor, "GetCurrentMaxDistanceFactor" }, // 1473943292
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetCurrentUpdateRate, "GetCurrentUpdateRate" }, // 2708963425
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetEnabledUpdateRateOptimisationsOnSkinnedMesh, "GetEnabledUpdateRateOptimisationsOnSkinnedMesh" }, // 4023348634
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetInterpolateSkippedFrames, "GetInterpolateSkippedFrames" }, // 2306353138
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipArray, "GetLODToFrameSkipArray" }, // 1631655723
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipIndex, "GetLODToFrameSkipIndex" }, // 1532890938
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetLODToFrameSkipMap, "GetLODToFrameSkipMap" }, // 1552095250
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetMaxEvalRateForInterpolation, "GetMaxEvalRateForInterpolation" }, // 471219130
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetUpdateRateOptimisationMode, "GetUpdateRateOptimisationMode" }, // 4239950598
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_GetVisibleDistanceFactorThresholds, "GetVisibleDistanceFactorThresholds" }, // 4247633116
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetBaseNonRenderedUpdateRate, "SetBaseNonRenderedUpdateRate" }, // 3863393912
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetEnableUpdateRateOptimisationsOnSkinnedMesh, "SetEnableUpdateRateOptimisationsOnSkinnedMesh" }, // 4235367381
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetInterpolateSkippedFrames, "SetInterpolateSkippedFrames" }, // 1395216017
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipArray, "SetLODToFrameSkipArray" }, // 1575918104
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipIndex, "SetLODToFrameSkipIndex" }, // 147539445
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetLODToFrameSkipMap, "SetLODToFrameSkipMap" }, // 3938711547
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetMaxEvalRateForInterpolation, "SetMaxEvalRateForInterpolation" }, // 2394883439
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetUpdateRateOptimisationMode, "SetUpdateRateOptimisationMode" }, // 208660668
		{ &Z_Construct_UFunction_UUpdateRateOptimisationBlueprintsBPLibrary_SetVisibleDistanceFactorThresholds, "SetVisibleDistanceFactorThresholds" }, // 1989817583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Category", "Update Rate Optimisations" },
		{ "IncludePath", "UpdateRateOptimisationBlueprintsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UpdateRateOptimisationBlueprintsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateRateOptimisationBlueprintsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpdateRateOptimisationBlueprintsBPLibrary, 2597479686);
	template<> UPDATERATEOPTIMISATIONBLUEPRINTS_API UClass* StaticClass<UUpdateRateOptimisationBlueprintsBPLibrary>()
	{
		return UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpdateRateOptimisationBlueprintsBPLibrary(Z_Construct_UClass_UUpdateRateOptimisationBlueprintsBPLibrary, &UUpdateRateOptimisationBlueprintsBPLibrary::StaticClass, TEXT("/Script/UpdateRateOptimisationBlueprints"), TEXT("UUpdateRateOptimisationBlueprintsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateRateOptimisationBlueprintsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
