#pragma once
#include "CoreMinimal.h"
#include "EVGMiniMapRange.generated.h"

UENUM(BlueprintType)
enum class EVGMiniMapRange : uint8 {
    Normal,
    Far,
    Num,
};

