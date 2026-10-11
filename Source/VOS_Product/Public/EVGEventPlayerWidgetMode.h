#pragma once
#include "CoreMinimal.h"
#include "EVGEventPlayerWidgetMode.generated.h"

UENUM(BlueprintType)
namespace EVGEventPlayerWidgetMode {
    enum Type {
        None,
        CharacterSelect,
        CharacterSelectHide,
        EventSelect,
        EventSelectHide,
        EventSelectStart,
        ENUM_MAX UMETA(Hidden),
    };
}

