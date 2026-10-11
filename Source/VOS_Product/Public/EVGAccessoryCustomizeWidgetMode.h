#pragma once
#include "CoreMinimal.h"
#include "EVGAccessoryCustomizeWidgetMode.generated.h"

UENUM(BlueprintType)
namespace EVGAccessoryCustomizeWidgetMode {
    enum Type {
        None,
        AccessorySelect,
        MemorySelect,
        Comparation,
        Result,
        ENUM_MAX UMETA(Hidden),
    };
}

