#pragma once
#include "CoreMinimal.h"
#include "EVGBTLocationTargetBB.generated.h"

UENUM(BlueprintType)
enum class EVGBTLocationTargetBB : uint8 {
    AttackTarget,
    MoveTarget,
    MoveLocation,
    CommandTarget,
    Leader,
    HomeLocation,
    Self,
    BlackBoard,
    Num,
};

