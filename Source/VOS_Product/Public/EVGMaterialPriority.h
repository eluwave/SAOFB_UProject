#pragma once
#include "CoreMinimal.h"
#include "EVGMaterialPriority.generated.h"

UENUM(BlueprintType)
enum class EVGMaterialPriority : uint8 {
    StatusAilment,
    ExtraMode,
    StatusBuff,
    Action,
    Damage,
    PartsBreak,
    Highest,
};

