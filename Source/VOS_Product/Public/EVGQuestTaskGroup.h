#pragma once
#include "CoreMinimal.h"
#include "EVGQuestTaskGroup.generated.h"

UENUM(BlueprintType)
namespace EVGQuestTaskGroup {
    enum Type {
        Sequence,
        Parallel,
        Exclusive,
        ENUM_MAX UMETA(Hidden),
    };
}

