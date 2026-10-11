#pragma once
#include "CoreMinimal.h"
#include "EVGRoamCharacterEffectType.generated.h"

UENUM(BlueprintType)
enum class EVGRoamCharacterEffectType : uint8 {
    INVALID,
    Spawn,
    Goal,
    Emote,
};

