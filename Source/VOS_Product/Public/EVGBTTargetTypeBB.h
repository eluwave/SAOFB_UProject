#pragma once
#include "CoreMinimal.h"
#include "EVGBTTargetTypeBB.generated.h"

UENUM(BlueprintType)
enum class EVGBTTargetTypeBB : uint8 {
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
    BlackBoard,
    Num,
};

