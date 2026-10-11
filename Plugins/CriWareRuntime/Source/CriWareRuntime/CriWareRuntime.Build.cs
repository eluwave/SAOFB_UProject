using UnrealBuildTool;

public class CriWareRuntime : ModuleRules
{
    public CriWareRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnforceIWYU = false;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "RenderCore",
            "MovieScene",
            "Slate",
            "SlateCore",
            "UMG"
        });
    }
}
