using UnrealBuildTool;
using System.Collections.Generic;

public class ExploProtoTarget : TargetRules
{
	public ExploProtoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		BuildEnvironment = TargetBuildEnvironment.Shared;
		bOverrideBuildEnvironment = true;

		ExtraModuleNames.Add("ExploProto");
	}
}