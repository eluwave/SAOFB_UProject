#pragma once
#include "CoreMinimal.h"
#include "EVGMainMenuSubWindowState.generated.h"

UENUM(BlueprintType)
enum class EVGMainMenuSubWindowState : uint8 {
    In,
    Out,
    Idle,
    Hide,
    Num,
};

