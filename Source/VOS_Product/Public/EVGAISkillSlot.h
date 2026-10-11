#pragma once
#include "CoreMinimal.h"
#include "EVGAISkillSlot.generated.h"

UENUM(BlueprintType)
enum class EVGAISkillSlot : uint8 {
    Slot0,
    Slot1,
    Slot2,
    Slot3,
    Ultimate,
    Num,
};

