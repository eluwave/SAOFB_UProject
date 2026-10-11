#pragma once
#include "CoreMinimal.h"
#include "EVGQuestTaskState.generated.h"

UENUM(BlueprintType)
namespace EVGQuestTaskState {
    enum Type {
        Wait,
        Active,
        Achieved,
        Succeeded,
        Failure,
        Unknown,
        ENUM_MAX UMETA(Hidden),
    };
}

