#pragma once
#include "CoreMinimal.h"
#include "EVGHudSatelliteState.generated.h"

UENUM(BlueprintType)
enum class EVGHudSatelliteState : uint8 {
    Hide,
    In,
    Count,
    Starting,
    StartingRoop,
    Out,
};

