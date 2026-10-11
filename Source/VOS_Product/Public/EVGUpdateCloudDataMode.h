#pragma once
#include "CoreMinimal.h"
#include "EVGUpdateCloudDataMode.generated.h"

UENUM(BlueprintType)
enum class EVGUpdateCloudDataMode : uint8 {
    Startup,
    AfasysDeposit,
    CoopClearTime,
    InitPenalty,
    ClearPenalty,
};

