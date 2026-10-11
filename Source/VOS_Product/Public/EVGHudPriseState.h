#pragma once
#include "CoreMinimal.h"
#include "EVGHudPriseState.generated.h"

UENUM(BlueprintType)
enum class EVGHudPriseState : uint8 {
    NormalLoop,
    Half,
    HalfLoop,
    Max,
    MaxLoop,
    None,
};

