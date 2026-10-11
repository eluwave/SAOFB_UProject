using UnrealBuildTool;
using System.Collections.Generic;

public class SAOFBTarget : TargetRules
{
	public SAOFBTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("SAOFB");
		ExtraModuleNames.Add("DMAutoInput");
		ExtraModuleNames.Add("DMDInputCore");
		ExtraModuleNames.Add("DMUtility");
		ExtraModuleNames.Add("DMDeveloper");
		ExtraModuleNames.Add("EasyAntiCheatCommon");
		ExtraModuleNames.Add("NetCommon");
		ExtraModuleNames.Add("VPOnlineSessionSupervisor");
		ExtraModuleNames.Add("VPOnlineVoice");
		ExtraModuleNames.Add("VOS_Product");
		ExtraModuleNames.Add("VPGameEngine");
		ExtraModuleNames.Add("VPOnlineExternalUI");
		ExtraModuleNames.Add("VPOnlineIdentity");
		ExtraModuleNames.Add("VPOnlineLeaderBoardSupervisor");
		ExtraModuleNames.Add("VPOnlineMessageSanitizer");
		ExtraModuleNames.Add("VPOnlineSessionSupervisorSteam");
		ExtraModuleNames.Add("VPOnlineTitleServerStorage");
		ExtraModuleNames.Add("VPOnlineUserCloud");
		ExtraModuleNames.Add("VPPlatformUtility");
	}
}
