#pragma once
#include "CoreMinimal.h"
#include "EVGItemRarity.generated.h"

UENUM(BlueprintType)
enum class EVGItemRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
    Num,
};

