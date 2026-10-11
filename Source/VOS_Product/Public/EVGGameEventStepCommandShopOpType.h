#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventStepCommandShopOpType.generated.h"

UENUM(BlueprintType)
enum class EVGGameEventStepCommandShopOpType : uint8 {
    UnregisterInventory,
    SetShopLevel,
    AddForSaleInformation,
};

