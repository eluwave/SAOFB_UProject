#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponCockType.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponCockType : uint8 {
    Auto,
    BoltAction,
    PumpAction,
    Num,
    None,
};

