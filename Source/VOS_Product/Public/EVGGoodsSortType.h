#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsSortType.generated.h"

UENUM(BlueprintType)
enum class EVGGoodsSortType : uint8 {
    Default,
    Name,
    Division,
    Rarity,
    WeaponDivision,
    WeaponPower,
    WeaponAccuracy,
    WeaponRange,
    WeaponRapid,
    WeaponRank,
    WeaponShotType,
    WeaponCriticalProbability,
    WeaponCriticalFactor,
    BulletDivision,
    BulletPower,
    BulletNum,
    CostumeDivision,
    AccessoryDivision,
    MaterialDivision,
    IdentifiedDivision,
    GadgetDivision,
    KeyItemDefault,
    Num,
};

