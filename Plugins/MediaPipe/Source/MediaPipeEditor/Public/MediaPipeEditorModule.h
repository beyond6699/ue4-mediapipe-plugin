// Copyright (c) 2022 Anders Xiao. All rights reserved.
// https://github.com/endink
#pragma once

#include "CoreMinimal.h"
#include "IAssetTypeActions.h"

class FAssetTypeAction_MediaPipeRemapAsset;

class MEDIAPIPEEDITOR_API FMediaPipeEditorModule : public  IModuleInterface
{
public:
	virtual  void StartupModule() override;
	virtual void ShutdownModule() override;
//private:
//	TSharedPtr<IAssetTypeActions> MediaPipeRemapAsseAction;
};
