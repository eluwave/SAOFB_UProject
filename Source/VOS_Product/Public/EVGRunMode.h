#pragma once
#include "CoreMinimal.h"
#include "EVGRunMode.generated.h"

UENUM(BlueprintType)
enum class EVGRunMode : uint8 {
    Normal,
    Runnable,
    KeepRunning,
    Num,
};

