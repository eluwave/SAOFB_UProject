#pragma once
#include "CoreMinimal.h"
#include "EVGFFAQuestAnnounceAgentMode.generated.h"

UENUM(BlueprintType)
enum class EVGFFAQuestAnnounceAgentMode : uint8 {
    Start,
    CountDown,
    Fail,
    Completion,
    Num,
};

