#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuSelectFunction.generated.h"

UENUM(BlueprintType)
namespace EVGAfasysMenuSelectFunction {
    enum Type {
        FundManagement,
        AI,
        Coordinate,
        EmotionCustomize,
        OriginalSkillCreate,
        Num,
    };
}

