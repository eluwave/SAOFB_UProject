#pragma once
#include "CoreMinimal.h"
#include "EVGBattleState.generated.h"

UENUM(BlueprintType)
enum class EVGBattleState : uint8 {
    None,
    Start,
    Demo,
    CountDown,
    Main,
    Clear,
    GameOver,
    TimeOut,
    Retire,
    Bye,
    Restart,
    Save,
    ResultReady,
    Result,
    ResultFinish,
    Transition,
    Num,
};

