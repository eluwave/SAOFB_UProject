#pragma once
#include "CoreMinimal.h"
#include "EVGActionBranch.generated.h"

UENUM(BlueprintType)
enum class EVGActionBranch : uint8 {
    Always,
    Takeoff,
    Landing,
    Trigger,
    AttackHit,
    WallHit,
    Random,
    Num,
};

