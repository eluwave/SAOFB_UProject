#pragma once
#include "CoreMinimal.h"
#include "EVGSoundAttribute.generated.h"

UENUM(BlueprintType)
namespace EVGSoundAttribute {
    enum Type {
        SE,
        VOICE,
        ENUM_MAX UMETA(Hidden),
    };
}

