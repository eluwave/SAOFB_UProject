#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponBuff.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponBuff : uint8 {
    IgnoreAttenuation,
    Num,
    None,
};

