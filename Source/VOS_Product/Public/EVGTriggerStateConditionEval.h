#pragma once
#include "CoreMinimal.h"
#include "EVGTriggerStateConditionEval.generated.h"

UENUM(BlueprintType)
enum class EVGTriggerStateConditionEval : uint8 {
    b_True,
    b_False,
    Equal,
    NotEqual,
    LessThan,
    GreaterThan,
    Num,
};

