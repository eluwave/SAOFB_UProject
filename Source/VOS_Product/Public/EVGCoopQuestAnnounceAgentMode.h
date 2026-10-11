#pragma once
#include "CoreMinimal.h"
#include "EVGCoopQuestAnnounceAgentMode.generated.h"

UENUM(BlueprintType)
enum class EVGCoopQuestAnnounceAgentMode : uint8 {
    Start,
    CountDown,
    Fail,
    Completion,
    Num,
};

