#pragma once
#include "CoreMinimal.h"
#include "EVGStatusAilment.generated.h"

UENUM(BlueprintType)
enum class EVGStatusAilment : uint8 {
    Blaze,
    Poison,
    Terror,
    Stun,
    All,
    Num,
    None,
    Heavy,
};

