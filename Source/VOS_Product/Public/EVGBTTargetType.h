#pragma once
#include "CoreMinimal.h"
#include "EVGBTTargetType.generated.h"

UENUM(BlueprintType)
enum class EVGBTTargetType : uint8 {
    Default,
    Enemy,
    Friend,
    TeamMate,
    None,
    AttackTarget,
    MoveTarget,
    CommandTarget,
    Leader,
    Self,
    Num,
};

