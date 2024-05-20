// Copyright 2024 Matthew Lake All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SkinnedMeshComponent.h"
#include "UpdateRateOptimisationBlueprintsBPLibrary.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogUpdateRateOptimisations, Log, All);

UENUM(BlueprintType)
enum class EUpdateRateOptimisationMode : uint8
{
	None,
	VisibleDistanceFactorThresholds,
	LODToFrameSkipMap
};

UCLASS(Category = "Update Rate Optimisations")
class UUpdateRateOptimisationBlueprintsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	/*Determines the update rate optimisation method. 
	Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static void SetUpdateRateOptimisationMode(USkinnedMeshComponent* SkinnedMeshComponent, EUpdateRateOptimisationMode UpdateRateOptimisationMode);

	/*Acquires the update rate optimisation method.
	Visible Distance Factor Threshold will use the screen ratio, while LOD To Frame Skip Map will utilise the LODs to change the optimisation settings.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static EUpdateRateOptimisationMode GetUpdateRateOptimisationMode(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Enables the use of URO on a particular skinned mesh component.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations",	meta = (Keywords = "URO Skeletal Mesh"))
	static void SetEnableUpdateRateOptimisationsOnSkinnedMesh(USkinnedMeshComponent* SkinnedMeshComponent, bool bEnable);

	/*Gets the enabled state the use of URO on a particular skinned mesh component.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static bool GetEnabledUpdateRateOptimisationsOnSkinnedMesh(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Set the visible threshold distances that determine the update rate changes when rendered.
	0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations",	meta = (Keywords = "URO Skeletal Mesh"))
	static void SetVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent, const TArray<float>& VisibleDistanceFactorThesholds);

	/*Get the visible threshold distances that determine the update rate changes when rendered
	0 frame skip, MaxDistanceFactor > 0.4f. 1 frame skip, MaxDistanceFactor > 0.2f*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static TArray<float> GetVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Clears the threshold values set for the Visible Distance Factor.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations", meta = (ToolTip = "Clears the threshold values currently set.",	Keywords = "URO Skeletal Mesh"))
	static void ClearVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Sets the LOD To Frame Skip Map for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static void SetLODToFrameSkipIndex(USkinnedMeshComponent* SkinnedMeshComponent, int LODIndex, int FramesToSkip);

	/*Gets the LOD To Frame Skip Index for URO - LOD index is tied to a particular frame skip rate. A value of 4 means 4 frames will be skipped then the 5th will update.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static int32 GetLODToFrameSkipIndex(USkinnedMeshComponent* SkinnedMeshComponent, int LODIndex);

	/*Clears the LOD To Frame Skip settings for URO.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static void ClearLODToFrameSkip(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Sets the LOD To Frame Skip map for URO - Array entry index is the LOD index, the value is the skip rate.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static void SetLODToFrameSkipArray(USkinnedMeshComponent* SkinnedMeshComponent, const TArray<int32>& LODToFrameSkipArray);

	/*Get the LOD To Frame Skip Array for URO.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static TArray<int32> GetLODToFrameSkipArray(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Sets the LOD To Frame Skip map for URO - The key is the LOD index, and the value is the skip rate.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static void SetLODToFrameSkipMap(USkinnedMeshComponent* SkinnedMeshComponent, const TMap<int32, int32>& LODToFrameSkipMap);

	/*Get the LOD To Frame Skip Map for URO.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static TMap<int32, int32> GetLODToFrameSkipMap(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static void SetMaxEvalRateForInterpolation(USkinnedMeshComponent* SkinnedMeshComponent, int UpdateRate);

	/*Sets the threshold value to disable animation interpolation. For example, below 15 will stop interpolating.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static int32 GetMaxEvalRateForInterpolation(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Sets the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations",	meta = (Keywords = "URO Skeletal Mesh"))
	static void SetBaseNonRenderedUpdateRate(USkinnedMeshComponent* SkinnedMeshComponent, int FramesToSkip);

	/*Get the rate of animation evaluation when non rendered (off screen / dedicated server). A value of 4 means 4 frames will be skipped then the 5th will update.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static int32 GetBaseNonRenderedUpdateRate(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Whether or not to disable interpolation between frames that have been skipped.*/
	UFUNCTION(BlueprintCallable, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static void SetInterpolateSkippedFrames(USkinnedMeshComponent* SkinnedMeshComponent, bool bEnable);

	/*Get the current state of URO's interpolate skipped frames.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static bool GetInterpolateSkippedFrames(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Returns Current Max Distance Factor; useful for debugging and setting up URO or LODs.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static float GetCurrentMaxDistanceFactor(USkinnedMeshComponent* SkinnedMeshComponent);

	/*Returns the current update rate. Useful for debugging URO.*/
	UFUNCTION(BlueprintPure, Category = "Update Rate Optimisations", meta = (Keywords = "URO Skeletal Mesh"))
	static float GetCurrentUpdateRate(USkinnedMeshComponent* SkinnedMeshComponent);

private:
	static void PrintAndLogMessage(const FString& Message);
};
