#pragma once
#include "CoreMinimal.h"
#include "EDMAutoInputKeyType.generated.h"

UENUM(BlueprintType)
enum class EDMAutoInputKeyType : uint8 {
    FaceButtonBottom,
    FaceButtonRight,
    FaceButtonLeft,
    FaceButtonTop,
    LeftShoulder,
    RightShoulder,
    SpecialRight,
    LeftThumb,
    RightThumb,
    LeftTrigger,
    RightTrigger,
    DPadUp,
    DPadDown,
    DPadLeft,
    DPadRight,
    LeftStickUp,
    LeftStickDown,
    LeftStickRight,
    LeftStickLeft,
    RightStickUp,
    RightStickDown,
    RightStickRight,
    RightStickLeft,
    Num,
    None,
};

