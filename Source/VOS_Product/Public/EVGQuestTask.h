#pragma once
#include "CoreMinimal.h"
#include "EVGQuestTask.generated.h"

UENUM(BlueprintType)
namespace EVGQuestTask {
    enum Type {
        Manual,
        Defeat,
        GetItem,
        HasItem,
        Quest,
        Flag,
        ENUM_MAX UMETA(Hidden),
    };
}

