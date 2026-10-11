#pragma once
#include "CoreMinimal.h"
#include "EVGMarksCountType.generated.h"

UENUM(BlueprintType)
enum class EVGMarksCountType : uint8 {
    Count,
    AccumDamageRatio,
    Num,
};

