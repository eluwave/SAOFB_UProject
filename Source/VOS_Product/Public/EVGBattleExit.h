#pragma once
#include "CoreMinimal.h"
#include "EVGBattleExit.generated.h"

UENUM(BlueprintType)
enum class EVGBattleExit : uint8 {
    None,
    Clear,
    GameOver,
    TimeOut,
    Retire,
    Restart,
    Bye,
    Transition,
};

