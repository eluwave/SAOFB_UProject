#pragma once
#include "CoreMinimal.h"
#include "EVGHudPlayerSkillState.generated.h"

UENUM(BlueprintType)
namespace EVGHudPlayerSkillState {
    enum Type {
        Use,
        Charge,
        Enable,
        Disable,
    };
}

