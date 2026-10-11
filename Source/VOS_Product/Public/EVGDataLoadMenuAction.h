#pragma once
#include "CoreMinimal.h"
#include "EVGDataLoadMenuAction.generated.h"

UENUM(BlueprintType)
namespace EVGDataLoadMenuAction {
    enum Type {
        None,
        New,
        Continue,
        Erase,
        ENUM_MAX UMETA(Hidden),
    };
}

