#pragma once
#include "CoreMinimal.h"
#include "EVGSkillAttr.generated.h"

UENUM(BlueprintType)
namespace EVGSkillAttr {
    enum Type {
        None,
        RotateToInput,
        RotateToCamera,
        AirExtend,
        AirOnly,
        Timer,
        Num,
    };
}

