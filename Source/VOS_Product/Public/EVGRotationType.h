#pragma once
#include "CoreMinimal.h"
#include "EVGRotationType.generated.h"

UENUM(BlueprintType)
enum class EVGRotationType : uint8 {
    Shortest,
    Right,
    Left,
    Num,
};

