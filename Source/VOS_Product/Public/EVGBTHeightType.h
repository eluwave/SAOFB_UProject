#pragma once
#include "CoreMinimal.h"
#include "EVGBTHeightType.generated.h"

UENUM(BlueprintType)
enum class EVGBTHeightType : uint8 {
    TargetOffset,
    World,
    KeepTargetOffset,
    KeepWorld,
    Num,
};

