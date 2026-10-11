#pragma once
#include "CoreMinimal.h"
#include "EVGGridEditReason.generated.h"

UENUM(BlueprintType)
enum class EVGGridEditReason : uint8 {
    Decide,
    Cancel,
    Inner,
};

