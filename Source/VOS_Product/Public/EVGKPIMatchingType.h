#pragma once
#include "CoreMinimal.h"
#include "EVGKPIMatchingType.generated.h"

UENUM(BlueprintType)
enum class EVGKPIMatchingType : uint8 {
    Start,
    End,
    Break,
    Timeout,
    Num,
    None,
};

