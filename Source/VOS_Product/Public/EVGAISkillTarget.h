#pragma once
#include "CoreMinimal.h"
#include "EVGAISkillTarget.generated.h"

UENUM(BlueprintType)
enum class EVGAISkillTarget : uint8 {
    None,
    Self,
    Friend,
    Enemy = 4,
    All = 255,
};

