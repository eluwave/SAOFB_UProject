#pragma once
#include "CoreMinimal.h"
#include "EVGDialogButtonStyle.generated.h"

UENUM(BlueprintType)
namespace EVGDialogButtonStyle {
    enum Type {
        None,
        Okay,
        Yes,
        YesNo = 6,
        Cancel = 8,
        OKCancel,
        YesNoCancel = 14,
        ENUM_MAX UMETA(Hidden),
    };
}

