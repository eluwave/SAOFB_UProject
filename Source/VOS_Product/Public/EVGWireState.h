#pragma once
#include "CoreMinimal.h"
#include "EVGWireState.generated.h"

UENUM(BlueprintType)
enum class EVGWireState : uint8 {
    None,
    Move,
    Break,
    HoldGround,
    HoldWall,
    HoldCeil,
    HoldFriend,
    HoldEnemy,
};

