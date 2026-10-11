#pragma once
#include "CoreMinimal.h"
#include "EVGInventoryItemStackChangeType.generated.h"

UENUM(BlueprintType)
enum class EVGInventoryItemStackChangeType : uint8 {
    Increase,
    Decrease,
};

