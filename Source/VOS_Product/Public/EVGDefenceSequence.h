#pragma once
#include "CoreMinimal.h"
#include "EVGDefenceSequence.generated.h"

UENUM(BlueprintType)
enum class EVGDefenceSequence : uint8 {
    StartOpeningEvent,
    EndOpeningEvent,
    StartWinEvent,
    EndWinEvent,
    StartLoseEvent,
    EndLoseEvent,
    StartAfterResultEvent,
    EndAfterResultEvent,
};

