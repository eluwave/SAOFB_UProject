#pragma once
#include "CoreMinimal.h"
#include "EVGMatchingFlowType.generated.h"

UENUM(BlueprintType)
enum class EVGMatchingFlowType : uint8 {
    Coop,
    PowerStruggle,
    HeroStruggle,
    ENUM_MAX UMETA(Hidden),
};

