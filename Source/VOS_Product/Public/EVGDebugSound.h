#pragma once
#include "CoreMinimal.h"
#include "EVGDebugSound.generated.h"

UENUM(BlueprintType)
namespace EVGDebugSound {
    enum Type {
        MUTE,
        CATEGORY_MUTE,
        VOLUME,
        CATEGORY_VOLUME,
        ENUM_MAX UMETA(Hidden),
    };
}

