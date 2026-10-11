#pragma once
#include "CoreMinimal.h"
#include "EVGState.generated.h"

UENUM(BlueprintType)
namespace EVGState {
    enum Type {
        Null,
        Idle,
        Walk,
        Run,
        Air,
        KneelingIdle,
        KneelingWalk,
        Dead,
        Resurrect,
        Throwing,
        IdleSub,
        Aim,
        Fire,
        Respawn,
        Num,
        None = 254,
    };
}

