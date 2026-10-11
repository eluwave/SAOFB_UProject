#pragma once
#include "CoreMinimal.h"
#include "EVGItemCategory.generated.h"

UENUM(BlueprintType)
enum class EVGItemCategory : uint8 {
    Weapon,
    Bullet,
    Costume,
    Accessory,
    Gadget,
    Material,
    KeyItem,
    None,
    Num,
};

