// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNode_MediaPipePose.h"
#include "MediaPipeLandmarkObserverComponent.h"
#include "Animation/AnimInstanceProxy.h"
 void FAnimNode_MediaPipePose::EvaluateComponentPose_AnyThread(FComponentSpacePoseContext& Output)
{ 
	 if (PoseMediaPipeLandmarkObserverComponent->IsValidLowLevel())
	 {
		 TArray<FMediaPipeLandmark> landMarkList;
		 if (PoseMediaPipeLandmarkObserverComponent->TryGetLandmarkList(0, landMarkList))
		 {
			 for (auto landMark : landMarkList)
			 {
				 UE_LOG(LogTemp, Log, TEXT("X:%f  ,Y:%f  ,Z:%f  "), landMark.Pos.X, landMark.Pos.Y, landMark.Pos.Z);

			 }

		//	 FBoneReference BonesToModify;

		//	 const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();
		//	 FCompactPoseBoneIndex CompactPoseBoneToModify = BonesToModify.GetCompactPoseIndex(BoneContainer);
			// FTransform NewBoneTM = Output.Pose.GetComponentSpaceTransform(CompactPoseBoneToModify);
			 //FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();

			// VerletParticleNet.VerletInstigation();
			// VerletParticleNet.SolveConstraint();
			// FCollisionResponseContainer ResponsChannel;
			// ResponsChannel.SetResponse(ECC_WorldDynamic, ECollisionResponse::ECR_MAX);
			// VerletParticleNet.PerformCollision(GEngine->GetWorld(), ECollisionChannel::ECC_Camera, ResponsChannel);
			// VerletParticleNet.DrawDebug(GEngine->GetWorld());

			// NewBoneTM.SetTranslation(VerletParticleNet.Particles[2].CurPos);



 		}
	 }
	 
	 Super::EvaluateComponentPose_AnyThread(Output);


}

  void FAnimNode_MediaPipePose::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
  {

	  Super::EvaluateSkeletalControl_AnyThread(Output, OutBoneTransforms);

	  //check(OutBoneTransforms.Num() == 0);

	  //const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();

	  //FCompactPoseBoneIndex CompactPoseBoneToModify = BonesToModify.GetCompactPoseIndex(BoneContainer);
	  //FTransform NewBoneTM = Output.Pose.GetComponentSpaceTransform(CompactPoseBoneToModify);
	  //FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();

	  //NewBoneTM.SetTranslation(FVector(10, 10, 10));

	  //OutBoneTransforms.Add(FBoneTransform(BonesToModify.GetCompactPoseIndex(BoneContainer), NewBoneTM));
  }

 void FAnimNode_MediaPipePose::Initialize_AnyThread(const FAnimationInitializeContext& Context)
 {
	 Super::Initialize_AnyThread(Context);
 }
