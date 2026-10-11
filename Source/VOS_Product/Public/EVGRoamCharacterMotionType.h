#pragma once
#include "CoreMinimal.h"
#include "EVGRoamCharacterMotionType.generated.h"

UENUM(BlueprintType)
enum class EVGRoamCharacterMotionType : uint8 {
    INVALID,
    Walk,
    Wait,
    Emote,
};

