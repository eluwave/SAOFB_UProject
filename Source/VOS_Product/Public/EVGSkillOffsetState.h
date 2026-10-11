#pragma once
#include "CoreMinimal.h"
#include "EVGSkillOffsetState.generated.h"

UENUM(BlueprintType)
enum class EVGSkillOffsetState : uint8 {
    All,
    Air,
    Kneel,
};

