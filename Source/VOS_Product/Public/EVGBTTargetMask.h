#pragma once
#include "CoreMinimal.h"
#include "EVGBTTargetMask.generated.h"

UENUM(BlueprintType)
enum class EVGBTTargetMask : uint8 {
    All,
    Alive,
    Dead,
};

