#pragma once
#include "CoreMinimal.h"
#include "EVGBTSkillCategory.generated.h"

UENUM(BlueprintType)
enum class EVGBTSkillCategory : uint8 {
    Heal,
    Recovery,
    Rescue,
    Buff,
    Debuff,
    Damage,
    Recharge,
    Dodge,
    Num,
};

