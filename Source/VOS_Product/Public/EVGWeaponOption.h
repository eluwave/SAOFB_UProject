#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponOption.generated.h"

UENUM(BlueprintType)
enum class EVGWeaponOption : uint8 {
    None,
    BAS_Main,
    BAS_Sub,
    TwoHand_Main,
    TwoHand_Sub,
};

