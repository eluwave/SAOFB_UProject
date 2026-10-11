#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventType.generated.h"

UENUM(BlueprintType)
enum class EVGGameEventType : uint8 {
    General,
    StepSequence,
    StepSequenceRef,
};

