#pragma once
#include "CoreMinimal.h"
#include "EVGBTActorTargetBBNearestEnemy.generated.h"

UENUM(BlueprintType)
enum class EVGBTActorTargetBBNearestEnemy : uint8 {
    AttackTarget,
    MoveTarget,
    CommandTarget,
    Leader,
    Self,
    BlackBoard,
    NearestEnemy,
    Num,
};

