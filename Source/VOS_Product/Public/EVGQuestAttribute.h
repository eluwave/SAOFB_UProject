#pragma once
#include "CoreMinimal.h"
#include "EVGQuestAttribute.generated.h"

UENUM(BlueprintType)
namespace EVGQuestAttribute {
    enum Type {
        Discardable,
        Standalone,
        ManualFinalize,
        JustOnce,
        ExcludeAchievement,
        ENUM_MAX UMETA(Hidden),
    };
}

