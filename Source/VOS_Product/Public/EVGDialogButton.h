#pragma once
#include "CoreMinimal.h"
#include "EVGDialogButton.generated.h"

UENUM(BlueprintType)
namespace EVGDialogButton {
    enum Type {
        Okay,
        Yes,
        No,
        Cancel,
        ENUM_MAX UMETA(Hidden),
    };
}

