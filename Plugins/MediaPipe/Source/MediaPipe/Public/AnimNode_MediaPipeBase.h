// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"

#include "AnimNode_MediaPipeBase.generated.h"


/**
 * 
 */


USTRUCT(BlueprintInternalUseOnly)
struct MEDIAPIPE_API FAnimNode_MediaPipeBase : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MediaPipe", meta = (PinShownByDefault, ClampMin = 0.f, ClampMax = 1.f))
		float Smooth = 0.3f;
protected:
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override { return true; }

	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
//	bool TryUpdateMediaPipeFaceGeometryFrame(FMediaPipeFaceGeometryFrame& MediaPipeFrame) const;
//	void ResetFaceGeometrySource() const;
//
//	bool TryUpdateMediaPipeFrame(const EMediaPipeLandmarksType TargetType, FMediaPipeFrame& MediaPipeFrame) const;
//	void ResetMediaPipeSource(const EMediaPipeLandmarksType TargetType) const;
//private:
//	UPROPERTY()
//		TWeakObjectPtr<UMediaPipeSource> MediaPipeSource;
//private:
	UPROPERTY()
	 TArray< TWeakObjectPtr< class UMediaPipeLandmarkObserverComponent>> MediaPipeObserverComponents;

	UPROPERTY()
	TWeakObjectPtr< class UMediaPipeLandmarkObserverComponent> PoseMediaPipeLandmarkObserverComponent;
	

};
