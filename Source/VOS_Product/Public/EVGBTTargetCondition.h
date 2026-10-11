#pragma once
#include "CoreMinimal.h"
#include "EVGBTTargetCondition.generated.h"

UENUM(BlueprintType)
enum class EVGBTTargetCondition : uint8 {
    Hate,
    LinearDistance,
    MoveDistance,
    Health,
    Attack,
    DPS,
    Num,
};

