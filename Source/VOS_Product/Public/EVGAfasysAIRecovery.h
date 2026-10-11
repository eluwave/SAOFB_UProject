#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysAIRecovery.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysAIRecovery {
    enum Type {
        Safety,
        Moderate,
        Emergency,
        Num,
    };
}

