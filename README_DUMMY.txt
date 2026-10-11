SAOFB dummy project - generated from UE4SS UHTHeaderDump for UE 4.17.2
Created with Claude Opus 5.5 (Medium Effort)

Contents:
  SAOFB.uproject                    - lists all game modules + 2 project plugins
  Source/SAOFB*.Target.cs           - targets with all game modules
  Source/<GameModule>/              - VOS_Product, VP*, DM*, NetCommon, EasyAntiCheatCommon
  Plugins/CriWareRuntime            - reflection-only stub of the CRIWARE plugin (/Script/CriWareRuntime)
  Plugins/DonAINavigation           - reflection-only stub of DoN's 3D navigation plugin

Build:
  1. Close the editor / Visual Studio.
  2. Delete Binaries, Intermediate and the .sln file in the project folder (stale build data).
  3. Right-click SAOFB.uproject -> Generate Visual Studio project files.
  4. Open SAOFB.sln, configuration "Development Editor", platform "Win64", build SAOFB.
  5. If there are errors, send the logs to your AI agent.

Changes vs raw dump:
  - //CROSS-MODULE INCLUDE comments replaced with real UE 4.17 include paths
  - Build.cs dependency lists recomputed from actual type usage
  - int32-based enums: BlueprintType removed (4.17 UHT only allows uint8 BlueprintType enums)
  - UWidget::FGetXxx qualified delegate property types -> FGetXxx
  - FMovieSceneEvalTemplate-derived structs: GetScriptStructImpl() override added
  - reference to a Blueprint class (AB_Warp_Mediator_C) in a C++ default replaced with NULL