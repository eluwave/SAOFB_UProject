#pragma once
#include "CoreMinimal.h"
#include "EVGBTLocationTarget.generated.h"

UENUM(BlueprintType)
enum class EVGBTLocationTarget : uint8 {
    AttackTarget,
    MoveTarget,
    MoveLocation,
    CommandTarget,
    Leader,
    HomeLocation,
    Self,
    Num,
};

