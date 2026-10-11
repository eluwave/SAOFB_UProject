#pragma once
#include "CoreMinimal.h"
#include "EVGStaffRollItemType.generated.h"

UENUM(BlueprintType)
enum class EVGStaffRollItemType : uint8 {
    Wait,
    Group,
    Human,
    Image,
    Num,
};

