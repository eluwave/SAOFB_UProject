#pragma once
#include "CoreMinimal.h"
#include "PlatformType.generated.h"

UENUM(BlueprintType)
enum class PlatformType : uint8 {
    PS4,
    Xbox,
    Steam,
};

