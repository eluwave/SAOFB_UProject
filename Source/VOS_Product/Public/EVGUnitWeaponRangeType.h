#pragma once
#include "CoreMinimal.h"
#include "EVGUnitWeaponRangeType.generated.h"

UENUM(BlueprintType)
enum class EVGUnitWeaponRangeType : uint8 {
    FullDamage,
    Effective,
    MaxReach,
};

