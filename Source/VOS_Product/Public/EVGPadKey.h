#pragma once
#include "CoreMinimal.h"
#include "EVGPadKey.generated.h"

UENUM(BlueprintType)
namespace EVGPadKey {
    enum Type {
        AL_Up,
        AL_Down,
        AL_Left,
        AL_Right,
        DL_Up,
        DL_Down,
        DL_Left,
        DL_Right,
        AR_Up,
        AR_Down,
        AR_Left,
        AR_Right,
        DR_Up,
        DR_Down,
        DR_Left,
        DR_Right,
        L1,
        L2,
        L3,
        R1,
        R2,
        R3,
        Select,
        Start,
        ML_Up,
        ML_Down,
        ML_Left,
        ML_Right,
        Num,
        Decide,
        Cancel,
        None,
    };
}

