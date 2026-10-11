#pragma once
#include "CoreMinimal.h"
#include "EVGBTD_CheckDistMode.generated.h"

UENUM(BlueprintType)
namespace EVGBTD_CheckDistMode {
    enum Type {
        All,
        IgnoreHeight,
        HeightOnly,
        ENUM_MAX UMETA(Hidden),
    };
}

