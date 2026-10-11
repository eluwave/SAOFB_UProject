#pragma once
#include "CoreMinimal.h"
#include "EVGSkillOffsetInput.generated.h"

UENUM(BlueprintType)
enum class EVGSkillOffsetInput : uint8 {
    NoCheck,
    Neutral,
    LeverLeft,
    LeverRight,
    LeverFront,
    LeverBack,
};

