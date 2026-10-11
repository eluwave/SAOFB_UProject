#pragma once
#include "CoreMinimal.h"
#include "EVGMapTravelListState.generated.h"

UENUM(BlueprintType)
enum class EVGMapTravelListState : uint8 {
    AreaSelect,
    MapSelect,
    TravelTargetSelect,
    Num,
};

