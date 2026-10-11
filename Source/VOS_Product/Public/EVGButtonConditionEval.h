#pragma once
#include "CoreMinimal.h"
#include "EVGButtonConditionEval.generated.h"

UENUM(BlueprintType)
enum class EVGButtonConditionEval : uint8 {
    None,
    Both,
    Press,
    Release,
    Down,
    Up,
    NotPress,
    Double,
    Tap,
    KeepDown,
    Num,
};

