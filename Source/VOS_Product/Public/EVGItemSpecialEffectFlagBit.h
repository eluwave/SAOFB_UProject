#pragma once
#include "CoreMinimal.h"
#include "EVGItemSpecialEffectFlagBit.generated.h"

UENUM(BlueprintType)
enum class EVGItemSpecialEffectFlagBit : uint8 {
    PhysicalGun,
    OpticalGun,
    PhysicalSword,
    OpticalSword,
    Accessory,
    Amplifiable,
    Movable,
};

