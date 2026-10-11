#pragma once
#include "CoreMinimal.h"
#include "EVGUnitWeaponSelectBit.generated.h"

UENUM(BlueprintType)
enum class EVGUnitWeaponSelectBit : uint8 {
    Current,
    Other,
    Both,
    LeftHand,
};

