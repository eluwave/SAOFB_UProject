#pragma once
#include "CoreMinimal.h"
#include "EVGBTCheckLineType.generated.h"

UENUM(BlueprintType)
enum class EVGBTCheckLineType : uint8 {
    AimTarget,
    LineTrace,
    Num,
};

