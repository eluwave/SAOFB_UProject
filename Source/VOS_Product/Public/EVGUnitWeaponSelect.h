#pragma once
#include "CoreMinimal.h"
#include "EVGUnitWeaponSelect.generated.h"

UENUM(BlueprintType)
enum class EVGUnitWeaponSelect : uint8 {
    Current = 1,
    Other,
    Both,
    LeftHand,
};

