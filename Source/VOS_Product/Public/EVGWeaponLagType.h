#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponLagType.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponLagType : uint8 {
    Normal,
    Warming,
    Num,
};

