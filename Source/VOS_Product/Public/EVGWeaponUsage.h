#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponUsage.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponUsage : uint8 {
    Main,
    Sub,
    Num,
    None,
};

