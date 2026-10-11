#pragma once
#include "CoreMinimal.h"
#include "EVGInformation.generated.h"

UENUM(BlueprintType)
namespace EVGInformation {
    enum Type {
        Progress,
        ItemDropModifier,
        ENUM_MAX UMETA(Hidden),
    };
}

