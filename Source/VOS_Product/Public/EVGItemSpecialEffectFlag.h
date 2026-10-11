#pragma once
#include "CoreMinimal.h"
#include "EVGItemSpecialEffectFlag.generated.h"

UENUM(BlueprintType)
enum class EVGItemSpecialEffectFlag : uint8 {
    PhysicalGun = 1,
    OpticalGun,
    PhysicalSword = 4,
    OpticalSword = 8,
    Accessory = 16,
    Amplifiable = 32,
    Movable = 64,
};

