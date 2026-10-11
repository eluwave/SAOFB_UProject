#pragma once
#include "CoreMinimal.h"
#include "EVGAccessoryReinforceWidgetMode.generated.h"

UENUM(BlueprintType)
namespace EVGAccessoryReinforceWidgetMode {
    enum Type {
        None,
        AccessorySelect,
        SlotSelect,
        ReinforceSelect,
        Result,
        ENUM_MAX UMETA(Hidden),
    };
}

