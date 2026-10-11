#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventStepCommandFCPositionBase.generated.h"

UENUM(BlueprintType)
enum class EVGGameEventStepCommandFCPositionBase : uint8 {
    Center,
    Left,
    Left_L,
    Left_R,
    Left_Out,
    Right,
    Right_L,
    Right_R,
    Right_Out,
};

