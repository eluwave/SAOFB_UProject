#pragma once
#include "CoreMinimal.h"
#include "EVGEndHitBoxRotator.generated.h"

UENUM(BlueprintType)
enum class EVGEndHitBoxRotator : uint8 {
    Zero,
    Normal,
    Direction,
    Owner,
};

