#pragma once
#include "CoreMinimal.h"
#include "EVGBTTargetSelectType.generated.h"

UENUM(BlueprintType)
enum class EVGBTTargetSelectType : uint8 {
    None,
    Target,
    Condition,
    Num,
};

