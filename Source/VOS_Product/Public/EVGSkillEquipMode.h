#pragma once
#include "CoreMinimal.h"
#include "EVGSkillEquipMode.generated.h"

UENUM(BlueprintType)
enum class EVGSkillEquipMode : uint8 {
    Skill,
    Gadget,
    Num,
    None,
};

