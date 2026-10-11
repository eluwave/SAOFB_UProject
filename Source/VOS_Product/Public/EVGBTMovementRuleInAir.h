#pragma once
#include "CoreMinimal.h"
#include "EVGBTMovementRuleInAir.generated.h"

UENUM(BlueprintType)
enum class EVGBTMovementRuleInAir : uint8 {
    ChangeAtLanding,
    ChangeImmediate,
    Num,
};

