using UnrealBuildTool;

public class VOS_Product : ModuleRules
{
    public VOS_Product(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnforceIWYU = false;

        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "DMUtility",
            "DonAINavigation",
            "Engine",
            "RenderCore",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MovieScene",
            "NetCommon",
            "Slate",
            "SlateCore",
            "UMG",
            "VPOnlineSessionSupervisor",
            "VPOnlineVoice"
        });
    }
}
