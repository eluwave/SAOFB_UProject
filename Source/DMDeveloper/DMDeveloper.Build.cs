using UnrealBuildTool;

public class DMDeveloper : ModuleRules
{
    public DMDeveloper(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnforceIWYU = false;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DMUtility",
            "Engine",
            "InputCore",
            "SlateCore"
        });
    }
}
