#pragma once
#include "CoreMinimal.h"
#include "EVGActMoveType.generated.h"

UENUM(BlueprintType)
enum class EVGActMoveType : uint8 {
    None,
    Velocity,
    Acceleration,
    Num,
};

