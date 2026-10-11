#pragma once
#include "CoreMinimal.h"
#include "EVGFPSCheckerFPSRange.generated.h"

UENUM(BlueprintType)
enum class EVGFPSCheckerFPSRange : uint8 {
    _00_10,
    _10_20,
    _20_30,
    _30_40,
    _40_50,
    _50_60,
    _60_70,
    _70_80,
    _80_90,
    _90_INF,
    Num,
};

