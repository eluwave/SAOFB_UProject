#pragma once
#include "CoreMinimal.h"
#include "EVGGraphicsQualityLevel.generated.h"

UENUM(BlueprintType)
enum class EVGGraphicsQualityLevel : uint8 {
    Low,
    Middle,
    High,
    Ideal,
    Off,
    Num,
};

