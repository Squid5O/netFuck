// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Per2Project : ModuleRules
{
	public Per2Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
