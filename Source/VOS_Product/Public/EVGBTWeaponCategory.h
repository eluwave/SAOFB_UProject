#pragma once
#include "CoreMinimal.h"
#include "EVGBTWeaponCategory.generated.h"

UENUM(BlueprintType)
enum class EVGBTWeaponCategory : uint8 {
    Melee,
    Range,
    BulletAndSword,
};

