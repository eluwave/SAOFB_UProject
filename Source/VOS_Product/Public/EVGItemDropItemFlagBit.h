#pragma once
#include "CoreMinimal.h"
#include "EVGItemDropItemFlagBit.generated.h"

UENUM(BlueprintType)
enum class EVGItemDropItemFlagBit : uint8 {
    AddSlotLock = 5,
    AttackSpecialized,
    SpecialEffectNormalized,
};

