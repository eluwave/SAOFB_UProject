#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsInfoType.generated.h"

UENUM(BlueprintType)
enum class EVGGoodsInfoType : uint8 {
    Weapon,
    WeaponSpec,
    Accessory,
    Gadget,
    Costume,
    Common,
    NoData,
    Num,
    None,
};

