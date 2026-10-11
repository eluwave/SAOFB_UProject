#pragma once
#include "CoreMinimal.h"
#include "EVGBTComparision.generated.h"

UENUM(BlueprintType)
enum class EVGBTComparision : uint8 {
    Equal,
    NotEqual,
    LessThan,
    GreaterThan,
    LessEqual,
    GreaterEqual,
    Num,
};

