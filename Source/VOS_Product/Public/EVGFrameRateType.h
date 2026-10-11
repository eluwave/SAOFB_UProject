#pragma once
#include "CoreMinimal.h"
#include "EVGFrameRateType.generated.h"

UENUM(BlueprintType)
enum class EVGFrameRateType : uint8 {
    FrameRate_30,
    FrameRate_60,
    Num,
};

