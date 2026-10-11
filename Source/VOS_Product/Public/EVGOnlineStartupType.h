#pragma once
#include "CoreMinimal.h"
#include "EVGOnlineStartupType.generated.h"

UENUM(BlueprintType)
enum class EVGOnlineStartupType : uint8 {
    Default,
    CheckOnline,
    CheckOnlineWithUgc,
    Multiplay,
};

