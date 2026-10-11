#pragma once
#include "CoreMinimal.h"
#include "EVGItemSpecialEffectRounding.generated.h"

UENUM(BlueprintType)
enum class EVGItemSpecialEffectRounding : uint8 {
    None,
    Floor,
    Ceil,
    RoundUp,
    Floor01,
    Ceil01,
    RoundUp01,
    Floor001,
    Ceil001,
    RoundUp001,
    Floor0001,
    Ceil0001,
    RoundUp0001,
    Floor00001,
    Ceil00001,
    RoundUp00001,
    Num,
};

