#pragma once
#include "CoreMinimal.h"
#include "EVGVersusQuestAnnounceAgentMode.generated.h"

UENUM(BlueprintType)
enum class EVGVersusQuestAnnounceAgentMode : uint8 {
    Start,
    CountDown,
    Fail,
    Completion,
    Num,
};

