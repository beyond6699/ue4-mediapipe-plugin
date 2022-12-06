// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNode_MediaPipeBase.h"
#include "MediaPipeObserverComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MediaPipeLandmarkObserverComponent.h"

 void FAnimNode_MediaPipeBase::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	 
	 Super::Initialize_AnyThread(Context);
	 TArray<AActor*> AllActors;
	 UGameplayStatics::GetAllActorsOfClass(GWorld, AActor::StaticClass(), AllActors);
	 for (auto actor : AllActors)
	 {
		auto Components = actor->GetComponentsByClass(UMediaPipeLandmarkObserverComponent::StaticClass());
		for (auto Component : Components)
		{
			if (auto MediaPipeComp = Cast<UMediaPipeLandmarkObserverComponent>(Component))
			{
				MediaPipeObserverComponents.AddUnique(MediaPipeComp);
				if (MediaPipeComp->StreamName == "pose_landmarks")
				{
					PoseMediaPipeLandmarkObserverComponent = MediaPipeComp;
				}
			}
		}
	 }
}

