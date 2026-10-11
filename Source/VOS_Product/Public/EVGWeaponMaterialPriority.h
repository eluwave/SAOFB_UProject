#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponMaterialPriority.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponMaterialPriority : uint8 {
    Base,
    BarrelHeat,
    Translucent,
    ShellVisibility,
    Highest,
};

