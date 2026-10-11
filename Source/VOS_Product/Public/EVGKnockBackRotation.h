#pragma once
#include "CoreMinimal.h"
#include "EVGKnockBackRotation.generated.h"

UENUM(BlueprintType)
enum class EVGKnockBackRotation : uint8 {
    None,
    FrontFace,
    BackFace,
    Auto,
    Num,
};

