#pragma once
#include "CoreMinimal.h"
#include "EVGTitleMenuPlatformType.generated.h"

UENUM(BlueprintType)
namespace EVGTitleMenuPlatformType {
    enum Type {
        PS4,
        Xbox,
        Steam,
        ENUM_MAX UMETA(Hidden),
    };
}

