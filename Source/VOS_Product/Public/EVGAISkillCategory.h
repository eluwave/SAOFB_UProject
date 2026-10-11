#pragma once
#include "CoreMinimal.h"
#include "EVGAISkillCategory.generated.h"

UENUM(BlueprintType)
enum class EVGAISkillCategory : uint8 {
    Unknown,
    Heal,
    Recovery,
    Rescue,
    Buff,
    Debuff,
    Damage,
    Recharge,
    Dodge,
    Dash,
    Other,
};

