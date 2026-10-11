#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponCategory.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponCategory : uint8 {
    Melee,
    Range,
    Num,
    None,
};

