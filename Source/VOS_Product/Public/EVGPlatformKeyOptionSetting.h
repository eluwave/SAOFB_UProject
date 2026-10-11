#pragma once
#include "CoreMinimal.h"
#include "EVGPlatformKeyOptionSetting.generated.h"

UENUM(BlueprintType)
enum class EVGPlatformKeyOptionSetting : uint8 {
    Forward,
    Back,
    Right,
    Left,
    CameraUp,
    CameraDown,
    CameraRight,
    CameraLeft,
    MoveChange,
    Squat,
    Step,
    Jump,
    UFG,
    PalletChange,
    Reload,
    ReticleChange,
    BalletCircleChange,
    Shift,
    Shot,
    Aim,
    WeponChange,
    QuickGadget1,
    QuickGadget2,
    QuickGadget3,
    QuickGadget4,
    Pause,
    PartyCommand,
    GoodAction,
    Emote,
    FixedFormSentence,
};

