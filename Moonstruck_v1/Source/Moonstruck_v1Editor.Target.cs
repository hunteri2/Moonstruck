// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Moonstruck_v1EditorTarget : TargetRules
{
	public Moonstruck_v1EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Moonstruck_v1" } );
	}
}
