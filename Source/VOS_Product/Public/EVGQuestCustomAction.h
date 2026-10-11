#pragma once
#include "CoreMinimal.h"
#include "EVGQuestCustomAction.generated.h"

UENUM()
enum class EVGQuestCustomAction : int32 {
    SetFlag,
    ResetFlag,
    DebugMessage,
    ENUM_MAX UMETA(Hidden),
};

