#pragma once
#include "CoreMinimal.h"
#include "EVGBRQuestAnnounceAgentMode.generated.h"

UENUM(BlueprintType)
enum class EVGBRQuestAnnounceAgentMode : uint8 {
    Start,
    CountDown,
    Completion,
    Num,
};

