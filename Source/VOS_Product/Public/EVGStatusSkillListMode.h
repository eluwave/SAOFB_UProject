#pragma once
#include "CoreMinimal.h"
#include "EVGStatusSkillListMode.generated.h"

UENUM(BlueprintType)
enum class EVGStatusSkillListMode : uint8 {
    Skill,
    Gadget,
    Num,
    None,
};

