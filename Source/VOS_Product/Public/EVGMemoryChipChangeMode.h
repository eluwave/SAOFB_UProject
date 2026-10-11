#pragma once
#include "CoreMinimal.h"
#include "EVGMemoryChipChangeMode.generated.h"

UENUM(BlueprintType)
namespace EVGMemoryChipChangeMode {
    enum Type {
        Copy,
        Exchange,
        Remodeling,
        ENUM_MAX UMETA(Hidden),
    };
}

