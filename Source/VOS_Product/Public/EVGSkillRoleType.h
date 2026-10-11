#pragma once
#include "CoreMinimal.h"
#include "EVGSkillRoleType.generated.h"

UENUM(BlueprintType)
enum class EVGSkillRoleType : uint8 {
    All,
    Assault,
    Destroyer,
    Sniper,
    Engineer,
    Tank,
    Supporter,
    Num,
};

