#pragma once
#include "CoreMinimal.h"
#include "EVGMedal.generated.h"

UENUM(BlueprintType)
enum class EVGMedal : uint8 {
    Attack,
    Support,
    Weapon,
    Num,
    None,
};

