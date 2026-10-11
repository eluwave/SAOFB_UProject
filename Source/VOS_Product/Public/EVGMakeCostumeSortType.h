#pragma once
#include "CoreMinimal.h"
#include "EVGMakeCostumeSortType.generated.h"

UENUM(BlueprintType)
enum class EVGMakeCostumeSortType : uint8 {
    Default,
    Create,
    Gender,
    ENUM_MAX UMETA(Hidden),
};

