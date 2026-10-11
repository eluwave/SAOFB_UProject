#pragma once
#include "CoreMinimal.h"
#include "EVGBTActorTarget.generated.h"

UENUM(BlueprintType)
enum class EVGBTActorTarget : uint8 {
    AttackTarget,
    MoveTarget,
    CommandTarget,
    Leader,
    Self,
    Num,
};

