#pragma once
#include "CoreMinimal.h"
#include "EVGSkillEquipState.generated.h"

UENUM(BlueprintType)
enum class EVGSkillEquipState : uint8 {
    SlotSelect,
    SkillList,
    FavoliteList,
    Num,
};

