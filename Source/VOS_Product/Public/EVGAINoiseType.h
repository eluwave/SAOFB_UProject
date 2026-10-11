#pragma once
#include "CoreMinimal.h"
#include "EVGAINoiseType.generated.h"

UENUM(BlueprintType)
enum class EVGAINoiseType : uint8 {
    Hearing = 1,
    Optical,
    HearingAndOptical,
    Weapon,
    HearingWithWeapon,
    OpticalWithWeapon,
    WeaponAdd = 8,
    WeaponAddHearing,
    WeaponAddOprical,
};

