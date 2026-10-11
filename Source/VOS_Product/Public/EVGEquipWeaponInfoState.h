#pragma once
#include "CoreMinimal.h"
#include "EVGEquipWeaponInfoState.generated.h"

UENUM(BlueprintType)
enum class EVGEquipWeaponInfoState : uint8 {
    Hide,
    Weapon1,
    Weapon2,
    Num,
    None,
};

