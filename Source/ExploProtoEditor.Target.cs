using UnrealBuildTool;
using System.Collections.Generic;

public class ExploProtoEditorTarget : TargetRules
{
	public ExploProtoEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		// Utilise l'environnement partagé du moteur (requis sur les versions Epic Launcher)
		BuildEnvironment = TargetBuildEnvironment.Shared;
		bOverrideBuildEnvironment = true;

		ExtraModuleNames.Add("ExploProto");
	}
}