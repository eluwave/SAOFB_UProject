#pragma once
#include "CoreMinimal.h"
#include "EVGNetworkResultPhase.generated.h"

UENUM(BlueprintType)
enum class EVGNetworkResultPhase : uint8 {
    In,
    Result,
    ResultOut,
    PrizeResultIn,
    PrizeResult,
    PrizeResultOut,
    RewardIn,
    Reward,
    Out,
};

