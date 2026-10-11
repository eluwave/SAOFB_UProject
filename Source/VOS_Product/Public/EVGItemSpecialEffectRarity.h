#pragma once
#include "CoreMinimal.h"
#include "EVGItemSpecialEffectRarity.generated.h"

UENUM(BlueprintType)
enum class EVGItemSpecialEffectRarity : uint8 {
    None,
    Common,
    UnCommon,
    Rare,
    SuperRare,
    UltraRare,
    Num,
};

