#pragma once
#include "CoreMinimal.h"
#include "EVGCharaRole.generated.h"

UENUM(BlueprintType)
enum class EVGCharaRole : uint8 {
    Assault,
    Destroyer,
    Sniper,
    Engineer,
    Tank,
    Supporter,
    Num,
    None,
};

