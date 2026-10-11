#pragma once
#include "CoreMinimal.h"
#include "EVGMainMenuListState.generated.h"

UENUM(BlueprintType)
enum class EVGMainMenuListState : uint8 {
    In,
    Out,
    Idle,
    Hide,
    Num,
};

