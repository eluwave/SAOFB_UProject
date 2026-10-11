#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponTriggerType.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponTriggerType : uint8 {
    None,
    Full,
    Semi,
    TwoBurst,
    ThreeBurst,
    Num,
};

