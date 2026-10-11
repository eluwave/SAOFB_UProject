#pragma once
#include "CoreMinimal.h"
#include "EVGAreaFlagBit.generated.h"

UENUM(BlueprintType)
enum class EVGAreaFlagBit : uint8 {
    JumpClimb = 1,
    JumpFall,
    Crouch,
    Warp,
    Obstacle,
    DisableJumpPath,
};

