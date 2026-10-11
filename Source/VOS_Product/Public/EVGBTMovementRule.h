#pragma once
#include "CoreMinimal.h"
#include "EVGBTMovementRule.generated.h"

UENUM(BlueprintType)
enum class EVGBTMovementRule : uint8 {
    Stop,
    OrbitOfTarget,
    AroundOfTarget,
    RandomWalk,
    BlackboardKey,
    Num,
};

