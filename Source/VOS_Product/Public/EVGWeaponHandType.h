#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponHandType.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponHandType : uint8 {
    Fix,
    Right,
    Left,
    Top,
    Under,
    Num,
};

