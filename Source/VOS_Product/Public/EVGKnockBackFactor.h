#pragma once
#include "CoreMinimal.h"
#include "EVGKnockBackFactor.generated.h"

UENUM(BlueprintType)
enum class EVGKnockBackFactor : uint8 {
    None,
    CauserDirection,
    CauserRelativeAngle,
    AttackerDirection,
    AttackerRelativeAngle,
    Num,
};

