#pragma once
#include "CoreMinimal.h"
#include "EVGNetworkResultMedal.generated.h"

UENUM(BlueprintType)
enum class EVGNetworkResultMedal : uint8 {
    First,
    Second,
    Third,
    OutOfRank,
};

