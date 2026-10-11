#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineQuickMatchError.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineQuickMatchError : uint8 {
    None,
    Canceled,
    Timeout,
    Other,
    Num,
};

