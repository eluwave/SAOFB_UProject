#pragma once
#include "CoreMinimal.h"
#include "EVGStatusMenuItemType.generated.h"

UENUM(BlueprintType)
enum class EVGStatusMenuItemType : uint8 {
    Status_STR,
    Status_VIT,
    Status_INT,
    Status_AGI,
    Status_DEX,
    Status_LUK,
    Num,
    None,
};

