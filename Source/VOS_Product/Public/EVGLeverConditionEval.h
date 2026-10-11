#pragma once
#include "CoreMinimal.h"
#include "EVGLeverConditionEval.generated.h"

UENUM(BlueprintType)
enum class EVGLeverConditionEval : uint8 {
    None,
    Neutral,
    Any,
    Up,
    Down,
    Left,
    Right,
    Angle,
    Num,
};

