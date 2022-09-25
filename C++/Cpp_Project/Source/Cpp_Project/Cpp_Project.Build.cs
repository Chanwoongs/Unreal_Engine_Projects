// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cpp_Project : ModuleRules
{
	public Cpp_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		// 모듈 디렉토리(루트)폴더를 기준으로 헤더를 불러드리겠다.
		PublicIncludePaths.Add(ModuleDirectory);
	}
}
