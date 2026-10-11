#pragma once
#include "CoreMinimal.h"
#include "EVGBTActorTargetBB.generated.h"

UENUM(BlueprintType)
enum class EVGBTActorTargetBB : uint8 {
    AttackTarget,
    MoveTarget,
    CommandTarget,
    Leader,
    Self,
    BlackBoard,
    Num,
};

