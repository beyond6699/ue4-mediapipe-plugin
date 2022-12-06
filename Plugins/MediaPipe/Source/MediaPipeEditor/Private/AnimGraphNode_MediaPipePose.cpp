

#include "AnimGraphNode_MediaPipePose.h"  

#define LOCTEXT_NAMESPACE "A3Nodes"  


FText UAnimGraphNode_MediaPipePose::GetTooltipText() const
{
    return LOCTEXT("AnimGraphNode_CopyParentBone_Tooltip", "MediaPipePose");
}

FText UAnimGraphNode_MediaPipePose::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("AnimGraphNode_CopyParentBone_Title", "MediaPipePose");
}


#undef LOCTEXT_NAMESPACE