// The original copyright of MAWI United GmbH remains unchanged.

using UnrealBuildTool;
using System.Collections.Generic;

public class ConiferForestEditorTarget : TargetRules
{
	public ConiferForestEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ConiferForest" } );
	}
}
