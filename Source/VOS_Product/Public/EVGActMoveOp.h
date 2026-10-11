#pragma once
#include "CoreMinimal.h"
#include "EVGActMoveOp.generated.h"

UENUM(BlueprintType)
enum class EVGActMoveOp : uint8 {
    None,
    Set,
    Add,
    Mul,
    Attenuation,
    Num,
};

