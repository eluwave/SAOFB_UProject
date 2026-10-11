#pragma once
#include "CoreMinimal.h"
#include "EVGBTDistanceType.generated.h"

UENUM(BlueprintType)
enum class EVGBTDistanceType : uint8 {
    LinearDistance,
    MoveDistance,
    Num,
};

