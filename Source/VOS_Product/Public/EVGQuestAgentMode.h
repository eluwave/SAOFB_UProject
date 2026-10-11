#pragma once
#include "CoreMinimal.h"
#include "EVGQuestAgentMode.generated.h"

UENUM(BlueprintType)
namespace EVGQuestAgentMode {
    enum Type {
        Browse,
        UndertakeSingle,
        UndertakeList,
        Achievement,
        ClearTask,
    };
}

