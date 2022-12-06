// Copyright (c) 2022 Anders Xiao. All rights reserved.
// https://github.com/endink
using UnrealBuildTool;
using System.IO;

public class MediaPipeEditor : ModuleRules
{
 //   public const string BinaryOutputDir = "$(BinaryOutputDir)";

    public MediaPipeEditor(ReadOnlyTargetRules target) : base(target)
    {
        //PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        //bUseUnity = false;
        //bUseRTTI = true;
        //bUsePrecompiled = true;
        //PrecompileForTargets = PrecompileTargetsType.None;


        PublicDependencyModuleNames.AddRange(
                new string[] {
                    "Core",
                    "AnimGraph",
                    "MediaPipe", 
                }
            );

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "AnimGraph",
                "BlueprintGraph",
                "MediaPipe", 
                "AssetTools",
                "PropertyEditor",
                "UnrealEd", 
                "Persona", 
                "MainFrame",
                "AssetRegistry",
                "EditorStyle",
                "ContentBrowser"
            }
        );


    }

    
}
