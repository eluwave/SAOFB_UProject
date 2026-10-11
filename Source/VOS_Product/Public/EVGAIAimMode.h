#pragma once
#include "CoreMinimal.h"
#include "EVGAIAimMode.generated.h"

UENUM(BlueprintType)
namespace EVGAIAimMode {
    enum Type {
        Normal,
        Foot,
        WeakPoint,
        Node,
        ENUM_MAX UMETA(Hidden),
    };
}

