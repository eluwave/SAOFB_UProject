#pragma once
#include "CoreMinimal.h"
#include "EVGMatchingMode.generated.h"

UENUM(BlueprintType)
enum class EVGMatchingMode : uint8 {
    Search,
    Creation,
    ENUM_MAX UMETA(Hidden),
};

