#pragma once
#include "CoreMinimal.h"
#include "EVGAISkillTargetBit.generated.h"

UENUM(BlueprintType)
enum class EVGAISkillTargetBit : uint8 {
    Self,
    Friend,
    Enemy,
};

