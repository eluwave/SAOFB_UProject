#pragma once
#include "CoreMinimal.h"
#include "EVGEquipListSortType.generated.h"

UENUM(BlueprintType)
enum class EVGEquipListSortType : uint8 {
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
    CostumeDivision,
    Num,
};

