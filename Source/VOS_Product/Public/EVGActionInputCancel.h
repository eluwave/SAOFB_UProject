#pragma once
#include "CoreMinimal.h"
#include "EVGActionInputCancel.generated.h"

UENUM(BlueprintType)
enum class EVGActionInputCancel : uint8 {
    None,
    Forward,
    Back,
    Side,
    Num,
};

