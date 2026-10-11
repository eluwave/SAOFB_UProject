#pragma once
#include "CoreMinimal.h"
#include "EVGBTTargetRule.generated.h"

UENUM(BlueprintType)
enum class EVGBTTargetRule : uint8 {
    None,
    Hate1st,
    Hate2nd,
    Hate3rd,
    Hate4th,
    Hate5th,
    Hate6th,
    Hate7th,
    Hate8th,
    NearestLinear,
    FarestLinear,
    NearestMove,
    FarestMove,
    LowestHPRate,
    HighestHPRate,
    LowestHP,
    HighestHP,
};

