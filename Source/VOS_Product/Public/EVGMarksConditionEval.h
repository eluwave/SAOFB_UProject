#pragma once
#include "CoreMinimal.h"
#include "EVGMarksConditionEval.generated.h"

UENUM(BlueprintType)
enum class EVGMarksConditionEval : uint8 {
    b_True,
    b_False,
    Equal,
    NotEqual,
    LessThan,
    GreaterThan,
    LessEqual,
    GreaterEqual,
    Num,
};

