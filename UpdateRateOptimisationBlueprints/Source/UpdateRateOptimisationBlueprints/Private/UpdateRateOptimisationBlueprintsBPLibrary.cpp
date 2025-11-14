// Copyright 2024 Matthew Lake All Rights Reserved.

#include "UpdateRateOptimisationBlueprintsBPLibrary.h"
#include "UpdateRateOptimisationBlueprints.h"
#include "Components/SkinnedMeshComponent.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Engine/GameEngine.h"

DEFINE_LOG_CATEGORY(LogUpdateRateOptimisations);

static void SetUpdateRateOptimisationModeImpl(USkinnedMeshComponent* SkinnedMeshComponent, EUpdateRateOptimisationMode UpdateRateOptimisationMode)
{
    switch (UpdateRateOptimisationMode)
    {
    case EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds:
        SkinnedMeshComponent->AnimUpdateRateParams->bShouldUseLodMap = false;
        break;
    case EUpdateRateOptimisationMode::LODToFrameSkipMap:
        SkinnedMeshComponent->AnimUpdateRateParams->bShouldUseLodMap = true;
        break;
    default:
        break;
    }
}

static void SetVisibleDistanceFactorThresholdsImpl(USkinnedMeshComponent* SkinnedMeshComponent, const TArray<float>& VisibleDistanceFactorThesholds)
{
    SkinnedMeshComponent->AnimUpdateRateParams->BaseVisibleDistanceFactorThesholds.Empty();

    for (float MaxDistanceThreshold : VisibleDistanceFactorThesholds)
    {
        SkinnedMeshComponent->AnimUpdateRateParams->BaseVisibleDistanceFactorThesholds.Add(MaxDistanceThreshold);
    }
}

static void SetLODToFrameSkipArrayImpl(USkinnedMeshComponent* SkinnedMeshComponent, const TArray<int32>& LODToFrameSkipArray)
{
    SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap.Empty();

    for (int32 Index = 0; Index < LODToFrameSkipArray.Num(); Index++)
    {
        int32 LODIndex = Index;
        int32 FramesToSkip = LODToFrameSkipArray[Index];

        SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap.Add(LODIndex, FramesToSkip);
    }
}

UUpdateRateOptimisationBlueprintsBPLibrary::UUpdateRateOptimisationBlueprintsBPLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}

void UUpdateRateOptimisationBlueprintsBPLibrary::PrintAndLogMessage(const FString& Message)
{
#if !UE_BUILD_SHIPPING
    UE_LOG(LogUpdateRateOptimisations, Warning, TEXT("%s"), *Message);
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, Message);
#endif
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetUpdateRateOptimisationByDataAsset(USkinnedMeshComponent* SkinnedMeshComponent, bool bEnable, UUpdateRateOptimisationDataAsset* UpdateRateOptimisationDataAsset)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set Update Rate Optimisation By Data Asset - SkinnedMeshComponent is null."));
        return;
    }

    if (!UpdateRateOptimisationDataAsset)
    {
        PrintAndLogMessage(TEXT("URO Set Update Rate Optimisation By Data Asset - Data Asset is null."));
        return;
    }

    FUpdateRateOptimisationStruct UpdateRateOptimisationStruct = UpdateRateOptimisationDataAsset->UpdateRateOptimisationStruct;
    SetUpdateRateOptimisationByStruct(SkinnedMeshComponent, bEnable, UpdateRateOptimisationStruct);
    return;
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetUpdateRateOptimisationByStruct(USkinnedMeshComponent* SkinnedMeshComponent, bool bEnable, FUpdateRateOptimisationStruct UpdateRateOptimisationStruct)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set Update Rate Optimisation By Struct - SkinnedMeshComponent is null."));
        return;
    }

    // Set the URO Mode
    SetUpdateRateOptimisationModeImpl(SkinnedMeshComponent, UpdateRateOptimisationStruct.UpdateRateOptimisationMode);

    // Set visible distance factor thresholds
    SetVisibleDistanceFactorThresholdsImpl(SkinnedMeshComponent, UpdateRateOptimisationStruct.VisibleDistanceFactorThesholds);

    // Set LOD to frame skip array
    SetLODToFrameSkipArrayImpl(SkinnedMeshComponent, UpdateRateOptimisationStruct.LODToFrameSkipArray);
    
    // Set interpolate skipped frames
    SkinnedMeshComponent->AnimUpdateRateParams->bInterpolateSkippedFrames = UpdateRateOptimisationStruct.bSetInterpolateSkippedFrames;

    // Set Max Eval Rate for Interpolation
    SkinnedMeshComponent->AnimUpdateRateParams->MaxEvalRateForInterpolation = UpdateRateOptimisationStruct.MaxEvalRateForInterpolation;
    
    // Set Base Non Rendered Update Rate
    SkinnedMeshComponent->AnimUpdateRateParams->BaseNonRenderedUpdateRate = UpdateRateOptimisationStruct.BaseNonRenderedUpdateRate;
    
    // Set URO Enabled
    SkinnedMeshComponent->bEnableUpdateRateOptimizations = bEnable;

    return;
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetUpdateRateOptimisationMode(USkinnedMeshComponent* SkinnedMeshComponent, EUpdateRateOptimisationMode UpdateRateOptimisationMode)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set Update Rate Optimisation Mode - SkinnedMeshComponent is null."));
        return;
    }

    SetUpdateRateOptimisationModeImpl(SkinnedMeshComponent, UpdateRateOptimisationMode);
}

EUpdateRateOptimisationMode UUpdateRateOptimisationBlueprintsBPLibrary::GetUpdateRateOptimisationMode(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get Update Rate Optimisation Mode - SkinnedMeshComponent is null."));
        return EUpdateRateOptimisationMode::None;
    }

    if (SkinnedMeshComponent->AnimUpdateRateParams->bShouldUseLodMap)
    {
        return EUpdateRateOptimisationMode::LODToFrameSkipMap;
    }

    return EUpdateRateOptimisationMode::VisibleDistanceFactorThresholds;
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetEnableUpdateRateOptimisationsOnSkinnedMesh(USkinnedMeshComponent* SkinnedMeshComponent, bool bEnable)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Enable Update Rate Optimisations On Skinned Mesh Error - SkinnedMeshComponent is null."));
        return;
    }

    SkinnedMeshComponent->bEnableUpdateRateOptimizations = bEnable;
}

bool UUpdateRateOptimisationBlueprintsBPLibrary::GetEnabledUpdateRateOptimisationsOnSkinnedMesh(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get Enabled Update Rate Optimisations On Skinned Mesh - SkinnedMeshComponent is null."));
        return false;
    }

    return SkinnedMeshComponent->bEnableUpdateRateOptimizations;
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent, const TArray<float>& VisibleDistanceFactorThesholds)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set Visible Distance Factor Thresholds - SkinnedMeshComponent is null."));
        return;
    }

    SetVisibleDistanceFactorThresholdsImpl(SkinnedMeshComponent, VisibleDistanceFactorThesholds);
}

TArray<float> UUpdateRateOptimisationBlueprintsBPLibrary::GetVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get Visible Distance Factor Thresholds - SkinnedMeshComponent is null."));
        return {};
    }

    return SkinnedMeshComponent->AnimUpdateRateParams->BaseVisibleDistanceFactorThesholds;
}

void UUpdateRateOptimisationBlueprintsBPLibrary::ClearVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Clear Visible Distance Factor Thresholds - SkinnedMeshComponent is null."));
        return;
    }

    SkinnedMeshComponent->AnimUpdateRateParams->BaseVisibleDistanceFactorThesholds.Empty();
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetLODToFrameSkipIndex(USkinnedMeshComponent* SkinnedMeshComponent, int LODIndex, int FramesToSkip)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set LOD To Frame Skip Index - SkinnedMeshComponent is null."));
        return;
    }

    SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap.Add(LODIndex, FramesToSkip);
}

int32 UUpdateRateOptimisationBlueprintsBPLibrary::GetLODToFrameSkipIndex(USkinnedMeshComponent* SkinnedMeshComponent, int LODIndex)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get LOD To Frame Skip Index - SkinnedMeshComponent is null."));
        return 0;
    }

    TMap<int32, int32> LODToFrameSkipMap = SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap;

    if (!LODToFrameSkipMap.Contains(LODIndex))
    {
        return 0;
    }

    return *SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap.Find(LODIndex);
}

void UUpdateRateOptimisationBlueprintsBPLibrary::ClearLODToFrameSkip(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Clear LOD To Frame Skip - SkinnedMeshComponent is null."));
        return;
    }

    SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap.Empty();
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetLODToFrameSkipMap(USkinnedMeshComponent* SkinnedMeshComponent, const TMap<int32, int32>& LODToFrameSkipMap)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set LOD To Frame Skip Map - SkinnedMeshComponent is null."));
        return;
    }

    SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap.Empty();

    for (const TPair<int32, int32>& Entry : LODToFrameSkipMap)
    {
        int32 LODIndex = Entry.Key;
        int32 FramesToSkip = Entry.Value;

        SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap.Add(LODIndex, FramesToSkip);
    }
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetLODToFrameSkipArray(USkinnedMeshComponent* SkinnedMeshComponent, const TArray<int32>& LODToFrameSkipArray)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set LOD To Frame Array Map - SkinnedMeshComponent is null."));
        return;
    }

    SetLODToFrameSkipArrayImpl(SkinnedMeshComponent, LODToFrameSkipArray);
}

TArray<int32> UUpdateRateOptimisationBlueprintsBPLibrary::GetLODToFrameSkipArray(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get LOD To Frame Skip Array - SkinnedMeshComponent is null."));
        return {};
    }

    TArray<int32> LODToFrameSkipArray;

    TMap<int32, int32> LODToFrameSkipMap = SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap;

    for (const TPair<int32, int32>& Entry : LODToFrameSkipMap)
    {
        int32 Index = Entry.Key;
        int32 Value = Entry.Value;

        if (Index >= LODToFrameSkipArray.Num())
        {
            #if ENGINE_MAJOR_VERSION > 5 || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 5)
                LODToFrameSkipArray.SetNum(Index + 1, EAllowShrinking::No);
            #else
                LODToFrameSkipArray.SetNum(Index + 1, false);
            #endif
        }

        LODToFrameSkipArray[Index] = Value;
    }

    return LODToFrameSkipArray;
}

TMap<int32, int32>UUpdateRateOptimisationBlueprintsBPLibrary::GetLODToFrameSkipMap(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get LOD To Frame Skip Map - SkinnedMeshComponent is null."));
        return {};
    }

    return SkinnedMeshComponent->AnimUpdateRateParams->LODToFrameSkipMap;
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetMaxEvalRateForInterpolation(USkinnedMeshComponent* SkinnedMeshComponent, int UpdateRate)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set Max Eval Rate For Interpolation - SkinnedMeshComponent is null."));
        return;
    }

    SkinnedMeshComponent->AnimUpdateRateParams->MaxEvalRateForInterpolation = UpdateRate;
}

int32 UUpdateRateOptimisationBlueprintsBPLibrary::GetMaxEvalRateForInterpolation(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get Max Eval Rate For Interpolation - SkinnedMeshComponent is null."));
        return 0;
    }

    return SkinnedMeshComponent->AnimUpdateRateParams->MaxEvalRateForInterpolation;
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetBaseNonRenderedUpdateRate(USkinnedMeshComponent* SkinnedMeshComponent, int FramesToSkip)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Set Base Non Rendered Update Rate - SkinnedMeshComponent is null."));
        return;
    }

    SkinnedMeshComponent->AnimUpdateRateParams->BaseNonRenderedUpdateRate = FramesToSkip;
}

int32 UUpdateRateOptimisationBlueprintsBPLibrary::GetBaseNonRenderedUpdateRate(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get Base Non Rendered Update Rate - SkinnedMeshComponent is null."));
        return 0;
    }

    return SkinnedMeshComponent->AnimUpdateRateParams->BaseNonRenderedUpdateRate;
}

void UUpdateRateOptimisationBlueprintsBPLibrary::SetInterpolateSkippedFrames(USkinnedMeshComponent* SkinnedMeshComponent, bool bEnable)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Interpolate Skipped Frames - SkinnedMeshComponent is null."));
        return;
    }
    
    SkinnedMeshComponent->AnimUpdateRateParams->bInterpolateSkippedFrames = bEnable;
}

bool UUpdateRateOptimisationBlueprintsBPLibrary::GetInterpolateSkippedFrames(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get Interpolate Skipped Frames - SkinnedMeshComponent is null."));
        return false;
    }

    return SkinnedMeshComponent->AnimUpdateRateParams->bInterpolateSkippedFrames;
}

float UUpdateRateOptimisationBlueprintsBPLibrary::GetCurrentMaxDistanceFactor(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get Max Distance Factor - SkinnedMeshComponent is null."));
        return 0.f;
    }

    return SkinnedMeshComponent->MaxDistanceFactor;
}

float UUpdateRateOptimisationBlueprintsBPLibrary::GetCurrentUpdateRate(USkinnedMeshComponent* SkinnedMeshComponent)
{
    if (!SkinnedMeshComponent)
    {
        PrintAndLogMessage(TEXT("URO Get Current Update Rate - SkinnedMeshComponent is null."));
        return 0.f;
    }

    return SkinnedMeshComponent->AnimUpdateRateParams->UpdateRate;
}
