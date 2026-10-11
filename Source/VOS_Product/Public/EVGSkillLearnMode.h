#pragma once
#include "CoreMinimal.h"
#include "EVGSkillLearnMode.generated.h"

UENUM(BlueprintType)
enum class EVGSkillLearnMode : uint8 {
    Skill,
    Gadget,
    Num,
    None,
};

