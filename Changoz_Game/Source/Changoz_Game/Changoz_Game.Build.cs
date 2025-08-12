// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Changoz_Game : ModuleRules
{
	public Changoz_Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
