#pragma once
#include "CoreMinimal.h"
#include "EVGQuestState.generated.h"

UENUM(BlueprintType)
namespace EVGQuestState {
    enum Type {
        Wanted,
        InProgress,
        Resolved,
        Completed,
        Closed,
        Disposed,
        Unknown,
        ENUM_MAX UMETA(Hidden),
    };
}

