#pragma once
#include "CoreMinimal.h"
#include "EVGMainMenuState.generated.h"

UENUM(BlueprintType)
enum class EVGMainMenuState : uint8 {
    In,
    Out,
    Idle,
    Hide,
    SubWindow,
    Num,
};

