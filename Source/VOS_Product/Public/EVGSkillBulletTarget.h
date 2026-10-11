#pragma once
#include "CoreMinimal.h"
#include "EVGSkillBulletTarget.generated.h"

UENUM(BlueprintType)
enum class EVGSkillBulletTarget : uint8 {
    Field,
    Enemy,
    Friend,
    Num,
};

