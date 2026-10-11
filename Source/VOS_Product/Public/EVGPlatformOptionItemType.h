#pragma once
#include "CoreMinimal.h"
#include "EVGPlatformOptionItemType.generated.h"

UENUM(BlueprintType)
enum class EVGPlatformOptionItemType : uint8 {
    SpinBox,
    Slider,
    KeyAssignment,
    Num,
    None,
};

