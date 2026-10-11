#pragma once
#include "CoreMinimal.h"
#include "EVGSkillEquipSlot.generated.h"

UENUM(BlueprintType)
enum class EVGSkillEquipSlot : uint8 {
    Up,
    Right,
    Down,
    Left,
    Num,
    None,
};

