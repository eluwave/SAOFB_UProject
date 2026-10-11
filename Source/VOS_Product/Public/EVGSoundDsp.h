#pragma once
#include "CoreMinimal.h"
#include "EVGSoundDsp.generated.h"

UENUM(BlueprintType)
namespace EVGSoundDsp {
    enum Type {
        MASTER_OUT,
        DISTANCE,
        STAGE_REVERB,
        MATRIX,
        ENUM_MAX UMETA(Hidden),
    };
}

