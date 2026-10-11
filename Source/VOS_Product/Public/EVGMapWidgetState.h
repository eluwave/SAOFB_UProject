#pragma once
#include "CoreMinimal.h"
#include "EVGMapWidgetState.generated.h"

UENUM(BlueprintType)
enum class EVGMapWidgetState : uint8 {
    In,
    Out,
    Idle,
    Hide,
    Num,
};

