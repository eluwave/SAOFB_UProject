#pragma once
#include "CoreMinimal.h"
#include "EVGBTEval.generated.h"

UENUM(BlueprintType)
enum class EVGBTEval : uint8 {
    Equal,
    NotEqual,
    LessThan,
    GreaterThan,
    LessEqual,
    GreaterEqual,
    Lowest,
    Highest,
    Num,
};

