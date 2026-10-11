#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponFormat.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponFormat : uint8 {
    Physics,
    Optics,
    Blast,
    Num,
};

