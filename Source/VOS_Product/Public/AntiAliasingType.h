#pragma once
#include "CoreMinimal.h"
#include "AntiAliasingType.generated.h"

UENUM(BlueprintType)
enum class AntiAliasingType : uint8 {
    None,
    FXAA,
    TemporalAA,
    MSAA,
    AATypeNum,
};

