#pragma once
#include "CoreMinimal.h"
#include "EVGBTDirectionType.generated.h"

UENUM(BlueprintType)
enum class EVGBTDirectionType : uint8 {
    Normal,
    Yaw,
    Pitch,
    Num,
};

