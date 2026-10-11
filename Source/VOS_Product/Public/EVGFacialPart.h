#pragma once
#include "CoreMinimal.h"
#include "EVGFacialPart.generated.h"

UENUM(BlueprintType)
enum class EVGFacialPart : uint8 {
    Upper,
    Lower,
    All,
    Num,
};

