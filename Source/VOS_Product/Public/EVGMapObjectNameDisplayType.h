#pragma once
#include "CoreMinimal.h"
#include "EVGMapObjectNameDisplayType.generated.h"

UENUM(BlueprintType)
enum class EVGMapObjectNameDisplayType : uint8 {
    Hide,
    Focus,
    Visible,
    Num,
};

