#pragma once
#include "CoreMinimal.h"
#include "EVGDefenceQuestAnnounceAgentMode.generated.h"

UENUM(BlueprintType)
enum class EVGDefenceQuestAnnounceAgentMode : uint8 {
    Start,
    CountDown,
    Fail,
    Completion,
    Num,
};

