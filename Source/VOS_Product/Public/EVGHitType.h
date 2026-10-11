#pragma once
#include "CoreMinimal.h"
#include "EVGHitType.generated.h"

UENUM(BlueprintType)
enum class EVGHitType : uint8 {
    Invalid,
    Block,
    Normal,
    Critical,
    WeakPoint,
    Tolerance,
    Effective,
    Setoff,
    Num,
};

