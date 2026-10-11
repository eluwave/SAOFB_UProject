#pragma once
#include "CoreMinimal.h"
#include "EVGLoadingTipsTypeId.generated.h"

UENUM(BlueprintType)
enum class EVGLoadingTipsTypeId : uint8 {
    None,
    Skill,
    Weapon,
    Material,
    Costume,
    Accessory,
    Num,
    Invalid,
};

