#pragma once
#include "CoreMinimal.h"
#include "EVGFriendSortType.generated.h"

UENUM(BlueprintType)
enum class EVGFriendSortType : uint8 {
    Default,
    Name,
    Level,
    HP,
    ATK,
    Role,
    Num,
    None,
};

