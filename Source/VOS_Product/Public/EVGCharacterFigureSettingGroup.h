#pragma once
#include "CoreMinimal.h"
#include "EVGCharacterFigureSettingGroup.generated.h"

UENUM(BlueprintType)
enum class EVGCharacterFigureSettingGroup : uint8 {
    HeadSize,
    NeckLength,
    NeckThickness,
    ChestSize,
    BrestSize,
    ArmLength,
    ArmThickness,
    HandSize,
    TorsoLength,
    TorsoThickness,
    HipSize,
    LegLength,
    LegThickness,
    EntireScaling,
    Num,
};

