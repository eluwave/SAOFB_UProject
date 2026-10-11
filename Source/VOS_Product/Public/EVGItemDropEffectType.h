#pragma once
#include "CoreMinimal.h"
#include "EVGItemDropEffectType.generated.h"

UENUM(BlueprintType)
enum class EVGItemDropEffectType : uint8 {
    LegendaryAccessoryDrop,
    AllSlotLockAndAttackSpecialized,
    SpecialEffectNormalized,
    Num,
};

