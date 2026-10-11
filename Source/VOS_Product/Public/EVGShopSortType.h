#pragma once
#include "CoreMinimal.h"
#include "EVGShopSortType.generated.h"

UENUM(BlueprintType)
enum class EVGShopSortType : uint8 {
    Default,
    Name,
    Obtain,
    Category,
    AppraiseType,
    WeaponDivision,
    WeaponPower,
    WeaponAccuracy,
    WeaponRange,
    WeaponRapid,
    Rarity,
    WeaponRank,
    WeaponTriggerAndCock,
    BulletType,
    BulletNum,
    CostumeGender,
    AccessoryType,
    MaterialType,
    Price,
    WeaponCriticalProbability,
    WeaponCriticalFactor,
    ENUM_MAX UMETA(Hidden),
};

