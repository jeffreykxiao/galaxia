// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GalaxiaEditorTarget : TargetRules
{
	public GalaxiaEditorTarget(TargetInfo Target) : base(Target)
	{

        DefaultBuildSettings = BuildSettingsVersion.V2;

        Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Galaxia" } );
	}
}
