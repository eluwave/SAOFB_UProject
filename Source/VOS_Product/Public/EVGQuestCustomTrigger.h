#pragma once
#include "CoreMinimal.h"
#include "EVGQuestCustomTrigger.generated.h"

UENUM()
enum class EVGQuestCustomTrigger : int32 {
    TaskStarted,
    TaskAchieved,
    ENUM_MAX UMETA(Hidden),
};

