#pragma once
#include "CoreMinimal.h"
#include "EVGQuestOp.generated.h"

UENUM()
enum class EVGQuestOp : int32 {
    Equal,
    NotEqual,
    LessThan,
    GreaterThan,
    LessEqual,
    GreaterEqual,
    ENUM_MAX UMETA(Hidden),
};

