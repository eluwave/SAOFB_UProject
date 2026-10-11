#pragma once
#include "CoreMinimal.h"
#include "EVGHudGoodActionState.generated.h"

UENUM(BlueprintType)
enum class EVGHudGoodActionState : uint8 {
    Idle,
    Open,
    Disp,
    Close,
    None,
};

