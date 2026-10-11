#pragma once
#include "CoreMinimal.h"
#include "EVGPrizeResult.generated.h"

UENUM(BlueprintType)
namespace EVGPrizeResult {
    enum Type {
        Weapon,
        Accessory,
        Costume,
        Bullet,
        Gadget,
        Unverified,
        Material,
        NormalEnemy,
        NamedEnemy,
        BountyEnemy,
        Total,
        Num,
    };
}

