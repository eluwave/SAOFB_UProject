#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsListCategory.generated.h"

UENUM(BlueprintType)
enum class EVGGoodsListCategory : uint8 {
    None,
    Weapon,
    Bullet,
    Costume,
    Accessory,
    Gadget,
    Material,
    Unverified,
    KeyItem,
    Num,
};

