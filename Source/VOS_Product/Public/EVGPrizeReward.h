#pragma once
#include "CoreMinimal.h"
#include "EVGPrizeReward.generated.h"

UENUM(BlueprintType)
namespace EVGPrizeReward {
    enum Type {
        Item,
        Cash,
        Exp,
        SP,
        ENUM_MAX UMETA(Hidden),
    };
}

