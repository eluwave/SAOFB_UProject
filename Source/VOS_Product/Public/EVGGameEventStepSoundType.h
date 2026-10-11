#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventStepSoundType.generated.h"

UENUM(BlueprintType)
enum class EVGGameEventStepSoundType : uint8 {
    Voice,
    SE,
    BGM,
    Ambient,
};

