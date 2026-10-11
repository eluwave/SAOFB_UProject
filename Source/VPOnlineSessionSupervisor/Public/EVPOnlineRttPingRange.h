#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineRttPingRange.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineRttPingRange : uint8 {
    Range1,
    Range2,
    Range3,
    Range4,
    Range5,
    Error,
    Num,
    None,
};

