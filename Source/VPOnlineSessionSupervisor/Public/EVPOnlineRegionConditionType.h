#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineRegionConditionType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineRegionConditionType : uint8 {
    All,
    Equal,
    None,
};

