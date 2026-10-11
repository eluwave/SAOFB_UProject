#pragma once
#include "CoreMinimal.h"
#include "EVGGuidedMissileMode.generated.h"

UENUM(BlueprintType)
enum class EVGGuidedMissileMode : uint8 {
    Straight,
    Homing,
    Fix,
    Fall,
    FixToHoming,
    FixToFall,
    Num,
};

