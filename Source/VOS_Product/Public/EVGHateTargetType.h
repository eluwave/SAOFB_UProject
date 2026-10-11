#pragma once
#include "CoreMinimal.h"
#include "EVGHateTargetType.generated.h"

UENUM(BlueprintType)
enum class EVGHateTargetType : uint8 {
    Dispersion,
    Concentration,
    NUM,
};

