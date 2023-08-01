// The original copyright of MAWI United GmbH remains unchanged.

using UnrealBuildTool;
using System.Collections.Generic;

public class ConiferForestTarget : TargetRules
{
	public ConiferForestTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ConiferForest" } );
	}
}
