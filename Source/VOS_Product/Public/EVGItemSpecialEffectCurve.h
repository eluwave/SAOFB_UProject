#pragma once
#include "CoreMinimal.h"
#include "EVGItemSpecialEffectCurve.generated.h"

UENUM(BlueprintType)
enum class EVGItemSpecialEffectCurve : uint8 {
    Linear,
    Square,
    InverseSquare,
    Cube,
    InverseCube,
    Num,
};

