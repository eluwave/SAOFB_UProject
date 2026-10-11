#pragma once
#include "CoreMinimal.h"
#include "EVGSoundAisac.generated.h"

UENUM(BlueprintType)
namespace EVGSoundAisac {
    enum Type {
        ANY,
        DISTANCE,
        PAN_3D,
        FLASH_VAN,
        SNIPE_SCOPE,
        LEVEL_REVERB,
        BGM_FADE,
        ENUM_MAX UMETA(Hidden),
    };
}

