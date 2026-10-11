#pragma once
#include "CoreMinimal.h"
#include "EVGTDMQuestAnnounceAgentMode.generated.h"

UENUM(BlueprintType)
enum class EVGTDMQuestAnnounceAgentMode : uint8 {
    Start,
    CountDown,
    Fail,
    Completion,
    Num,
};

