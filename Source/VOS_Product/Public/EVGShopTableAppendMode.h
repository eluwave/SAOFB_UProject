#pragma once
#include "CoreMinimal.h"
#include "EVGShopTableAppendMode.generated.h"

UENUM(BlueprintType)
enum class EVGShopTableAppendMode : uint8 {
    Skip,
    Overwrite,
    Append,
    ENUM_MAX UMETA(Hidden),
};

