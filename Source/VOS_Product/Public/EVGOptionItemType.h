#pragma once
#include "CoreMinimal.h"
#include "EVGOptionItemType.generated.h"

UENUM(BlueprintType)
enum class EVGOptionItemType : uint8 {
    SpinBox,
    Slider,
    Num,
    None,
};

